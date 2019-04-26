#include "SceneWriter.h"
#include "Scene.h"
#include "Element.h"
#include "VectorGraphic.h"
#include <sstream>

namespace
{
    std::string toString(const int& value)
    {
        std::stringstream s;
        s << value;
        return s.str();
    }
    
    std::string toString(const bool& value)
    {
        if (value)
        {
            return "true";
        }
        
        return "false";
    }
}

namespace Framework
{
    
    Xml::HElement SceneWriter::writeScene(const Scene& scene)
    {
        Xml::HElement root(new Xml::Element("Scene"));
        root->setAttribute("width", toString(scene.getWidth()));
        root->setAttribute("height", toString(scene.getHeight()));
        
        Scene::LayerIterator iLayer;
        for (iLayer = scene.begin(); iLayer != scene.end(); ++iLayer)
        {
            const Layer& layer = *iLayer;
            Xml::HElement layerElement(new Xml::Element("Layer"));
            layerElement->setAttribute("alias", layer.getAlias());
            
            Layer::PlacedGraphicIterator iPlacedGraphic;
            for (iPlacedGraphic = layer.begin(); iPlacedGraphic != layer.end(); ++iPlacedGraphic)
            {
                const PlacedGraphic& placedGraphic = *iPlacedGraphic;
                Xml::HElement placedGraphicElement(new Xml::Element("PlacedGraphic"));
                VG::Point placementPoint = placedGraphic.getPlacementPoint();
                placedGraphicElement->setAttribute("x", toString(placementPoint.getX()));
                placedGraphicElement->setAttribute("y", toString(placementPoint.getY()));
                
                Xml::HElement vectorGraphicElement(new Xml::Element("VectorGraphic"));
                const VG::VectorGraphic& vectorGraphic = placedGraphic.getGraphic();
                vectorGraphicElement->setAttribute("closed", toString(vectorGraphic.isClosed()));
                
                for (int i = 0; i < vectorGraphic.getPointCount(); ++i)
                {
                    VG::Point p = vectorGraphic.getPoint(i);
                    Xml::HElement pointElement(new Xml::Element("Point"));
                    pointElement->setAttribute("x", toString(p.getX()));
                    pointElement->setAttribute("y", toString(p.getY()));
                    vectorGraphicElement->appendChild(pointElement);
                }
                
                placedGraphicElement->appendChild(vectorGraphicElement);
                
                layerElement->appendChild(placedGraphicElement);
            }
            
            root->appendChild(layerElement);
        }
        
        return root;
    }
}