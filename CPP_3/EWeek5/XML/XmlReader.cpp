//
//  XmlReader.cpp
//  EWeek2
//
//  Created by CLAYTON WONG on 8/3/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "XmlReader.hpp"
#include "tinyxml2.h"
#include <sstream>

using namespace std;

namespace Xml
{
    
    
    const HElement Reader::loadXml ( stringstream& stream )
    {
        HElement element_handle = make_shared<Element>();
        
        const auto& xml = stream.str();
        
        auto return_code = element_handle->parseXML( xml );
        
        if ( return_code == tinyxml2::XML_SUCCESS )
        {
            return element_handle;
        }
        else
        {
            throw runtime_error( "failed to parse XML input" );
        }
    }
    
    
} // namespace Xml
