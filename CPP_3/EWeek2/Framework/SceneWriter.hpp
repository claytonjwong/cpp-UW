//
//  SceneWriter.hpp
//  EWeek2
//
//  Created by CLAYTON WONG on 8/5/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "Element.hpp"
#include "Scene.hpp"

//    Xml::HElement root = Framework::SceneWriter::writeScene(scene); // TODO make_HElement from scene

namespace Framework
{
    class SceneWriter
    {
    public:
        
        static Xml::HElement writeScene ( const Scene& scene );
        
        //
        // TODO:
        //
        // remove from Element: make_HElement, make_HXMLNode, insertXMLNode
        // and instead create writeLayer, writePlacedGraphic, writeVectorGraphic
        //
        // or as the instructor's solution, just write the whole thing
        // in a single function as follows...
        //

//    Xml::HElement SceneWriter::writeScene(const Scene& scene)
//    {
//        Xml::HElement root(new Xml::Element("Scene"));
//        root->setAttribute("width", toString(scene.getWidth()));
//        root->setAttribute("height", toString(scene.getHeight()));
//
//        Scene::LayerIterator iLayer;
//        for (iLayer = scene.begin(); iLayer != scene.end(); ++iLayer)
//        {
//            const Layer& layer = *iLayer;
//            Xml::HElement layerElement(new Xml::Element("Layer"));
//            layerElement->setAttribute("alias", layer.getAlias());
//
//            Layer::PlacedGraphicIterator iPlacedGraphic;
//            for (iPlacedGraphic = layer.begin(); iPlacedGraphic != layer.end(); ++iPlacedGraphic)
//            {
//                const PlacedGraphic& placedGraphic = *iPlacedGraphic;
//                Xml::HElement placedGraphicElement(new Xml::Element("PlacedGraphic"));
//                VG::Point placementPoint = placedGraphic.getPlacementPoint();
//                placedGraphicElement->setAttribute("x", toString(placementPoint.getX()));
//                placedGraphicElement->setAttribute("y", toString(placementPoint.getY()));
//
//                Xml::HElement vectorGraphicElement(new Xml::Element("VectorGraphic"));
//                const VG::VectorGraphic& vectorGraphic = placedGraphic.getGraphic();
//                vectorGraphicElement->setAttribute("closed", toString(vectorGraphic.isClosed()));
//
//                for (int i = 0; i < vectorGraphic.getPointCount(); ++i)
//                {
//                    VG::Point p = vectorGraphic.getPoint(i);
//                    Xml::HElement pointElement(new Xml::Element("Point"));
//                    pointElement->setAttribute("x", toString(p.getX()));
//                    pointElement->setAttribute("y", toString(p.getY()));
//                    vectorGraphicElement->appendChild(pointElement);
//                }
//
//                placedGraphicElement->appendChild(vectorGraphicElement);
//
//                layerElement->appendChild(placedGraphicElement);
//            }
//
//            root->appendChild(layerElement);
//        }
//
//        return root;
//    }

    };
}
