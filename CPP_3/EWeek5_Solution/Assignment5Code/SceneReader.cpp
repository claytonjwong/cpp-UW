#include "SceneReader.h"
#include "Element.h"
#include "Scene.h"
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

    VG::VectorGraphic readVectorGraphic(const Xml::Element& vgElement)
    {
        VG::VectorGraphic vg;

        const auto closed = vgElement.getAttribute("closed");
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

        auto elements = vgElement.getChildElements();
        for (const auto& element : elements)
        {
            const auto x = toInt(element->getAttribute("x"));
            const auto y = toInt(element->getAttribute("y"));
            vg.addPoint({ x, y });
        }

        return vg;
    }

    void readGraphic(
        Framework::Scene& scene,
        Framework::Layer& layer,
        const Xml::Element& graphicElement)
    {
        if (graphicElement.getName() != "PlacedGraphic")
        {
            throw std::runtime_error("Expected PlacedGraphic");
        }

        Framework::PlacedGraphic pg;
        const auto x = toInt(graphicElement.getAttribute("x"));
        const auto y = toInt(graphicElement.getAttribute("y"));

        if (x < 0 || y < 0 || x > scene.getWidth() || y > scene.getHeight())
        {
            throw std::runtime_error("PlacedGraphic out of bounds");
        }

        pg.setPlacementPoint(VG::Point(x, y));

        auto vectorGraphics = graphicElement.getChildElements();
        for (const auto& graphic : vectorGraphics)
        {
            pg.setGraphic(readVectorGraphic(*graphic));
        }

        layer.pushBack(std::move(pg));
    }

    void readLayer(
        Framework::Scene& scene,
        const Xml::Element& layerElement)
    {
        if (layerElement.getName() != "Layer")
        {
            throw std::runtime_error("Expected Layer");
        }

        Framework::Layer layer(layerElement.getAttribute("alias"));

        auto graphics = layerElement.getChildElements();
        for (const auto& graphic : graphics)
        {
            readGraphic(scene, layer, *graphic);
        }

        scene.pushBack(std::move(layer));
    }
}

namespace Framework
{
    Scene SceneReader::readScene(const Xml::Element& rootElement)
    {
        if (rootElement.getName() != "Scene")
        {
            throw std::runtime_error("Expected Scene");
        }

        const auto width = toInt(rootElement.getAttribute("width"));
        const auto height = toInt(rootElement.getAttribute("height"));
        Scene theScene(width, height);

        auto layers = rootElement.getChildElements();
        for (const auto& layer : layers)
        {
            readLayer(theScene, *layer);
        }

        return theScene;
    }
}