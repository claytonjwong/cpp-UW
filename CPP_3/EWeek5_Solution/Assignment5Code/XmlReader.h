#pragma once

#include "Element.h"

namespace Xml
{
    class XmlReader
    {
    public:
        XmlReader() = default;
        ~XmlReader() = default;

        static Element::HElement loadXml(std::istream& in);

        XmlReader(const XmlReader& other) = delete;
        XmlReader(XmlReader&& other) = delete;
        XmlReader& operator=(const XmlReader& other) = delete;
        XmlReader& operator=(XmlReader&& other) = delete;
    };
}
