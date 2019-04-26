#pragma once

#include "Element.h"
#include <iostream>

namespace Xml
{
    
    class Reader
    {
    public:
        static HElement loadXml(std::istream& in);
        
    private:
        static HElement readElement(std::istream& in, Element* parentP);
        static bool readAttribute(std::istream& in, Element& parent);
    };
    
}
