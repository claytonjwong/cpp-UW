//
//  HElement.cpp
//  EWeek2
//
//  Created by CLAYTON WONG on 8/3/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "Element.hpp"
#include <iostream>

using namespace std;

namespace Xml
{
    const HElement Element::make_HElement ( const Framework::Scene& scene )
    {
        HElement handle = make_shared<Element>();
        auto sceneRoot = handle->createXMLNode( "Scene" );
        
        sceneRoot->SetAttribute( "height", scene.getHeight() );
        sceneRoot->SetAttribute( "width", scene.getWidth() );
        
        for ( const auto& layer: scene )
        {
            auto layerRoot = make_HXMLNode( handle, layer );
            sceneRoot->InsertEndChild( layerRoot );
        }
        
        handle->insertXMLNode( sceneRoot );
        return handle;
    }
    
    HXMLNode Element::make_HXMLNode ( HElement handle, const Framework::Layer& layer )
    {
        auto layerRoot = handle->createXMLNode( "Layer" );
        
        layerRoot->SetAttribute( "alias", layer.getAlias().c_str() );
        
        for ( const auto& graphic: layer )
        {
            auto graphicRoot = make_HXMLNode( handle, graphic );
            layerRoot->InsertEndChild( graphicRoot );
        }
        
        return layerRoot;
    }
    
    HXMLNode Element::make_HXMLNode ( HElement handle, const Framework::PlacedGraphic& graphic )
    {
        auto placedGraphicRoot = handle->createXMLNode( "PlacedGraphic" );
        
        auto placement_point = graphic.getPlacementPoint();

        placedGraphicRoot->SetAttribute( "x", placement_point.getX() );
        placedGraphicRoot->SetAttribute( "y", placement_point.getY() );

        auto vectorGraphic = graphic.getGraphic();

        auto vectorGraphicRoot = make_HXMLNode( handle, vectorGraphic );

        placedGraphicRoot->InsertEndChild( vectorGraphicRoot );

        return placedGraphicRoot;
    }
    
    HXMLNode Element::make_HXMLNode ( HElement handle, const VG::VectorGraphic& vectorGraphic )
    {
        auto vectorGraphicRoot = handle->createXMLNode( "VectorGraphic" );
        
        vectorGraphicRoot->SetAttribute(  "closed", ( vectorGraphic.isClosed() ? "true" : "false" )  );
        
        for ( const auto& point: vectorGraphic )
        {
            auto pointRoot = make_HXMLNode( handle, point );
            vectorGraphicRoot->InsertEndChild( pointRoot );
        }
        
        return vectorGraphicRoot;
    }
    
    HXMLNode Element::make_HXMLNode ( HElement handle, const VG::Point& point )
    {
        auto pointRoot = handle->createXMLNode( "Point" );
        
        pointRoot->SetAttribute( "x", point.getX() );
        pointRoot->SetAttribute( "y", point.getY() );
        
        return pointRoot;
    }

    const HElement Element::make_HElement ( const VG::VectorGraphic& vectorGraphic )
    {
        HElement element = make_shared<Element>();
        auto vectorGraphicRoot = element->createXMLNode( "VectorGraphic" );
        
        vectorGraphicRoot->SetAttribute(  "closed", ( vectorGraphic.isClosed() ? "true" : "false" )  );
        
        for (  int index=0, N=static_cast<int>( vectorGraphic.getPointCount() );  index < N;  ++index  )
        {
            auto point = vectorGraphic.getPoint( index );
            auto pointRoot = element->createXMLNode( "Point" );
            pointRoot->SetAttribute( "x", point.getX() );
            pointRoot->SetAttribute( "y", point.getY() );
            vectorGraphicRoot->InsertEndChild( pointRoot );
        }
        
        element->insertXMLNode( vectorGraphicRoot ); // TODO: does this work to update myRoot in here?
        
        return element;
    }

    const string Element::getName() const noexcept
    {
        auto result = myRoot->Name();
        
        if ( result != nullptr )
        {
            return string{ result };
        }
        else
        {
            return {};
        }
    }
    
    const string Element::getAttribute(const string& name) const noexcept
    {
        auto result = myRoot->Attribute( name.c_str() );
        
        if ( result != nullptr )
        {
            return string{ result };
        }
        else
        {
            return {};
        }
    }
    
    const AttributeMap Element::getAttributes() const noexcept
    {
        AttributeMap result;
        
        for ( auto attribute = myRoot->FirstAttribute();
              attribute != nullptr;
              attribute = attribute->Next() )
        {
            result[ attribute->Name() ] = attribute->Value();
        }
        return result;
    }
    
    const ElementList Element::getChildElements() const noexcept
    {
        ElementList result;
        for ( auto child = myRoot->FirstChildElement();
              child != nullptr;
              child = child->NextSiblingElement() )
        {
            result.push_back(  make_shared<Element>( child )  );
        }
        
        return result;
    }
        
    ElementError Element::parseXML(const std::string& xml)
    {
        auto result = myDocument.Parse( xml.c_str() );
        
        myRoot = myDocument.RootElement(); // TODO: double check if I want to update myRoot here or not
        
        return result;
    }

    HXMLElement Element::createXMLNode(const std::string& name)
    {
        return myDocument.NewElement( name.c_str() );
    }

    HXMLNode Element::insertXMLNode(HXMLNode node)
    {
        auto result = myDocument.InsertEndChild( node );
        
        myRoot = myDocument.RootElement(); // TODO: double check if I want to update myRoot here or not
        
        return result;
    }
}
