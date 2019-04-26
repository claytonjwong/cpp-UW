#pragma once

#include "Element.h"
#include <ostream>

namespace Xml
{
    class Writer
    {
    public:
        static void writeXml(const Element& element, std::ostream& os);
        
    private:
        static void writeElement(const Element& element, std::ostream& os);
        static void writeAttributes(const Element& element, std::ostream& os);
    };
}