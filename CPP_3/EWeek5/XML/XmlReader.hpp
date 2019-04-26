//
//  XmlReader.hpp
//  EWeek2
//
//  Created by CLAYTON WONG on 8/3/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "Element.hpp"
#include "tinyxml2.h"
#include <sstream>
#include <exception>
#include <iostream>

namespace Xml
{
    class Reader
    {
    public:
        
        static const HElement loadXml ( std::stringstream& stream );
    };
    
}  // namespace Xml
