#include "SceneReader.h"
#include "Scene.h"
#include "XmlInterfaces.h"
#include "VectorGraphic.h"
#include <sstream>

namespace
{
    int toInt(const std::string& s)
    {
        int value;
        std::stringstream ss(s);
        ss >> value;
        
        return value;
    }
    
    VG::VectorGraphic readVectorGraphic(const Xml::HElement vgElement)
    {
        VG::VectorGraphic vg;
        
        std::string closed = vgElement->getAttribute("closed");
        if (closed == "true")
        {
            vg.closeShape();
        }
        else if (closed == "false")
        {
            vg.openShape();
        }
        else
        {
            throw std::runtime_error("Invalid VectorGraphic attribute");
        }
        
        Xml::ElementCollection points = vgElement->getChildElements();
        Xml::ElementCollection::const_iterator p;
        for (p = points.begin(); p != points.end(); ++p)
        {
            int x = toInt((*p)->getAttribute("x"));
            int y = toInt((*p)->getAttribute("y"));
			vg.addPoint(VG::Point(x, y));
        }
        
        return vg;
    }
    
    void readGraphic(Framework::Scene& scene,
                     Framework::Layer& layer,
                     const Xml::HElement graphicElement)
    {
        if (graphicElement->getName() != "PlacedGraphic")
        {
            throw std::runtime_error("Expected PlacedGraphic");
        }
        
        Framework::PlacedGraphic pg;
        int x = toInt(graphicElement->getAttribute("x"));
        int y = toInt(graphicElement->getAttribute("y"));
        
        if (x < 0 || y < 0 ||
            x > scene.getWidth() || y > scene.getHeight())
        {
            throw std::runtime_error("PlacedGraphic out of bounds");
        }
        
        pg.setPlacementPoint(VG::Point(x, y));
        
        Xml::ElementCollection vectorGraphics = graphicElement->getChildElements();
        Xml::ElementCollection::const_iterator vgElement;
        for (vgElement = vectorGraphics.begin(); vgElement != vectorGraphics.end(); ++vgElement)
        {
            // TODO - assert - there should only be one of these
            pg.setGraphic(readVectorGraphic(*vgElement));
        }
        
        layer.pushBack(pg);
    }
    
    void readLayer(Framework::Scene& scene,
                   const Xml::HElement layerElement)
    {
        if (layerElement->getName() != "Layer")
        {
            throw std::runtime_error("Expected Layer");
        }
        
        Framework::Layer layer(layerElement->getAttribute("alias"));
        
        Xml::ElementCollection graphics = layerElement->getChildElements();
        Xml::ElementCollection::const_iterator graphic;
        for (graphic = graphics.begin(); graphic != graphics.end(); ++graphic)
        {
            readGraphic(scene, layer, *graphic);
        }
        
        scene.pushBack(layer);
    }
}

namespace Framework
{

Scene SceneReader::readScene(const Xml::IElement& rootElement)
{
    if (rootElement.getName() != "Scene")
    {
        throw std::runtime_error("Expected Scene");
    }
    
    int width = toInt(rootElement.getAttribute("width"));
    int height = toInt(rootElement.getAttribute("height"));
    Scene theScene(width, height);
    
    Xml::ElementCollection layers = rootElement.getChildElements();
    Xml::ElementCollection::const_iterator layer;
    for (layer = layers.begin(); layer != layers.end(); ++layer)
    {
		readLayer(theScene, *layer);
    }
    
    return theScene;
}

}