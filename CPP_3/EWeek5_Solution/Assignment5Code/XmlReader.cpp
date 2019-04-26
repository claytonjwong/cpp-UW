#include "XmlReader.h"
#include "Parse.h"
#include <memory>

namespace Xml
{
    Element::HElement XmlReader::loadXml(std::istream& in)
    {
        const std::istreambuf_iterator<char> eos;
        std::string xmlStr(std::istreambuf_iterator<char>(in), eos);

        auto element = std::make_unique<Element>();
        element->createFromXml(xmlStr);
        return element;
    }        
}