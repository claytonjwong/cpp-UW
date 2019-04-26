//
//  XmlWriter.cpp
//  EWeek2
//
//  Created by CLAYTON WONG on 8/4/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//


#include "XmlWriter.hpp"
#include "VectorGraphic.hpp"

using namespace std;

namespace Xml
{
    
    
    void Writer::writeXml(const HElement root, ostream& os, int&& depth) // default value depth=0
    {
        if ( root != nullptr )
        {
            writeXmlNodeHead( root, os, depth );
            
            for ( const auto& child: root->getChildElements() )
            {
                writeXml(  child, os, ( depth + 1 )  );
            }
            
            writeXmlNodeTail( root, os, depth );
        }
    }
    
    
    void Writer::writeXmlNodeHead(const HElement root, ostream& os, const int depth)
    {
        writeLeadingWhitespace( os, depth );
        
        os << "<" << root->getName();
    
        for ( const auto& attribute: root->getAttributes() )
        {
            auto name = attribute.first;
            auto value = attribute.second;
            
            os << " " << name << "=\"" << value << "\"";
        }
        
        os << ">" << endl;
    }
    
    
    void Writer::writeXmlNodeTail(const HElement root, ostream& os, const int depth)
    {
        writeLeadingWhitespace( os, depth );
        
        os << "</" << root->getName() << ">" << endl;
    }
    

    void Writer::writeLeadingWhitespace(ostream& os, const int depth)
    {
        //
        // leading whitespace char (0x20) indentation increases by 2x depth
        //
        string whitespace(  static_cast<size_t>( depth << 1 ), 0x20  );
        
        os << whitespace;
    }
    
    
} // namespace Xml
