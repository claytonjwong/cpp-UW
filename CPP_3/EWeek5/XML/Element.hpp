//
//  HElement.hpp
//  EWeek2
//
//  Created by CLAYTON WONG on 8/3/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "VectorGraphic.hpp"
#include "PlacedGraphic.hpp"
#include "Layer.hpp"
#include "Scene.hpp"
#include "tinyxml2.h"
#include <string>
#include <unordered_map>
#include <memory>
#include <vector>

namespace Xml
{
    class Element;
    using HElement = std::shared_ptr<Element>;
    using ElementList = std::vector<HElement>;
    
    using HXMLElement = tinyxml2::XMLElement*;
    using HXMLNode = tinyxml2::XMLNode*;
    using ElementDocument = tinyxml2::XMLDocument;
    using AttributeMap = std::unordered_map<std::string,std::string>;
    
    using ElementError = tinyxml2::XMLError;

    class Element
    {
    public:
        
        explicit Element ( tinyxml2::XMLElement* root = nullptr ) : myRoot{ root } {}
        ~Element() = default;
        
        Element(const Element& src) = delete;
        Element(Element&& src) = delete;
        
        Element& operator=(const Element& rhs) = delete;
        Element& operator=(Element&& rhs) = delete;
        
        const static std::shared_ptr<Element> make_HElement(const Framework::Scene& scene);
        static tinyxml2::XMLNode* make_HXMLNode(std::shared_ptr<Element> handle, const Framework::Layer& layer);
        static tinyxml2::XMLNode* make_HXMLNode(std::shared_ptr<Element> handle, const Framework::PlacedGraphic& graphic);
        static tinyxml2::XMLNode* make_HXMLNode(std::shared_ptr<Element> handle, const VG::VectorGraphic& vg);
        static tinyxml2::XMLNode* make_HXMLNode(std::shared_ptr<Element> handle, const VG::Point& point);
        const static std::shared_ptr<Element> make_HElement(const VG::VectorGraphic& vg);
        
        const std::string getName() const noexcept;
        const std::string getAttribute(const std::string& name) const noexcept;
        const AttributeMap getAttributes() const noexcept;
        const ElementList getChildElements() const noexcept;
        
        tinyxml2::XMLError parseXML(const std::string& xml);
        tinyxml2::XMLElement* createXMLNode(const std::string& name);
        tinyxml2::XMLNode* insertXMLNode( HXMLNode child );
        
    private:
        
        tinyxml2::XMLElement* myRoot;
        tinyxml2::XMLDocument myDocument;
        
        ElementList myChildren;
    };
    
} // namespace Xml
