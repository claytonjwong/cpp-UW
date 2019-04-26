#include "Element.h"

namespace Xml
{
    Element::Element(const std::string& name) :
    myName{name}
    {
    }
    
    void Element::setAttribute(const std::string& name,
                               const std::string& value)
    {
        myAttributes.insert(std::make_pair(name, value));
    }
    
    std::string Element::getAttribute(const std::string& name) const
    {
        auto pos = myAttributes.find(name);
        if (pos != myAttributes.end())
        {
            return (*pos).second;
        }
        
        return std::string{};
    }
    
    void Element::appendChild(const HElement& child)
    {
        myElements.push_back(child);
    }
    
    AttributeMap Element::getAttributes() const
    {
        return myAttributes;
    }
    
    ElementList Element::getChildElements() const
    {
        return myElements;
    }
    
    std::string Element::getName() const
    {
        return myName;
    }
}
