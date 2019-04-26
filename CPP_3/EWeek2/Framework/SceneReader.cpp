//
//  SceneReader.cpp
//  EWeek2
//
//  Created by CLAYTON WONG on 8/5/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "SceneReader.hpp"
#include "VectorGraphicStreamer.hpp"
#include <string>
#include <sstream>

using namespace std;

namespace Framework
{
    int toInt ( const string& str )
    {
        int value{ 0 };
        stringstream stream{ str };
        stream >> value;
        return value;
    }

    Scene SceneReader::readScene ( const Xml::Element& sceneRoot )
    {
        if ( sceneRoot.getName() == "Scene" )
        {
            Scene scene;
            
            auto width = sceneRoot.getAttribute( "width" );
            auto height = sceneRoot.getAttribute( "height" );
            
            scene.setWidth(  toInt( width )  );
            scene.setHeight(  toInt( height )  );
            
            for ( const auto& layerRoot: sceneRoot.getChildElements() )
            {
                auto layer = readLayer( layerRoot );
                scene.pushBack( layer );
            }
            return scene;
        }
        else
        {
            throw runtime_error{ "unable to create Scene from XML" };
        }
    }

    Layer SceneReader::readLayer ( const Xml::HElement layerRoot )
    {
        auto name = layerRoot->getName();
        if ( name == "Layer" )
        {
            auto alias = layerRoot->getAttribute( "alias" );
            Layer layer{ alias };
            for ( const auto& placedGraphicRoot: layerRoot->getChildElements() )
            {
                auto placedGraphic = readPlacedGraphic( placedGraphicRoot );
                layer.addGraphic( placedGraphic );
            }
            return layer;
        }
        else
        {
            throw runtime_error{ "unable to create Layer from XML" };
        }
    }

    PlacedGraphic SceneReader::readPlacedGraphic ( const Xml::HElement placedGraphicRoot )
    {
        auto name = placedGraphicRoot->getName();
        if ( name == "PlacedGraphic" )
        {
            PlacedGraphic placedGraphic;
            
            auto x = toInt(  placedGraphicRoot->getAttribute( "x" )  );
            auto y = toInt(  placedGraphicRoot->getAttribute( "y" )  );
            
            placedGraphic.setPlacementPoint(  VG::Point{ x,y }  );
            
            for ( const auto& vectorGraphicRoot: placedGraphicRoot->getChildElements() )
            {
                const auto graphic = readVectorGraphic( vectorGraphicRoot );
                placedGraphic.setGraphic( graphic );
            }
            
            return placedGraphic;
        }
        else
        {
            throw runtime_error{ "unable to create PlacedGraphic from XML" };
        }
    }

    VG::HVectorGraphic SceneReader::readVectorGraphic ( const Xml::HElement vectorGraphicRoot )
    {
        auto name = vectorGraphicRoot->getName();
        if ( name == "VectorGraphic" )
        {
            const auto vectorGraphic =
                make_shared<VG::VectorGraphic>(
                    VG::VectorGraphicStreamer::getVectorGraphicFromHandle( vectorGraphicRoot )  );
            return vectorGraphic;
        }
        else
        {
            throw runtime_error{ "unable to create VectorGraphic from XML" };
        }
    }
}
