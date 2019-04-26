#include "XmlWriter.h"

namespace Xml
{
    
    void Writer::writeXml(const HElement& element, std::ostream& os)
    {
        return writeElement(element, os);
    }
    
    void Writer::writeElement(const HElement& element, std::ostream& os)
    {
        os << "<" << element->getName();
        writeAttributes(element, os);
        
        ElementList childElements = element->getChildElements();
        if (childElements.size() > 0)
        {
            os << ">" << std::endl;
        }
        else
        {
            os << "/>" << std::endl;
            return;
        }
        
        for (ElementList::iterator childElement = childElements.begin();
             childElement != childElements.end();
             ++childElement)
        {
            writeElement(*childElement, os);
        }
        
        os << "</" << element->getName() << ">" << std::endl;
    }
    
    void Writer::writeAttributes(const HElement& element, std::ostream& os)
    {
        AttributeMap attributes = element->getAttributes();
        for (AttributeMap::iterator attr = attributes.begin();
             attr != attributes.end();
             ++attr)
        {
            os << " " << attr->first << "=\"" << attr->second << "\"";
        }
    }
    
}