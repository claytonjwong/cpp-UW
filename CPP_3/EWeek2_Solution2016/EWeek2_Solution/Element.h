#pragma once

#include <string>
#include <vector>
#include <map>
#include <memory>

namespace Xml
{
    class Element;
    using HElement = std::shared_ptr<Element>;
    using AttributeMap = std::map<std::string, std::string>;
    using ElementList = std::vector<HElement>;
    
    class Element
    {
    public:
        Element(const std::string& name);
        std::string getName() const;
        
        void setAttribute(const std::string& name,
                          const std::string& value);
        
        std::string getAttribute(const std::string& name) const;
        
        ElementList getChildElements() const;
        AttributeMap getAttributes() const;
        
        void appendChild(const HElement& child);
        
    private:
        std::string myName;
        AttributeMap myAttributes;
        ElementList myElements;
    };
}
