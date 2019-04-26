//
//  XmlWriter.hpp
//  EWeek2
//
//  Created by CLAYTON WONG on 8/4/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "Element.hpp"
#include "VectorGraphic.hpp"
#include <iostream>

using namespace std;

namespace Xml
{
    class Writer
    {
    public:

        static void writeXml(HElement root, ostream& os, int&& depth=0);
    
    private:
    
        static void writeXmlNodeHead(HElement root, ostream& os, const int depth=0);
        static void writeXmlNodeTail(HElement root, ostream& os, const int depth=0);
        static void writeLeadingWhitespace(ostream& os, const int depth=0);
    };
    
}  // namespace Xml
