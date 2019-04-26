//
//  Color.cpp
//  EWeek3
//
//  Created by CLAYTON WONG on 8/7/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "Common.hpp"
#include "Byte.hpp"
#include "Color.hpp"
#include "Conversion.hpp"
#include <sstream>
#include <iomanip>

using namespace std;
using namespace Binary;
using namespace Utility;

namespace BitmapGraphics
{
    
    
    //
    // Note: significant stream read/write order: ( blue, green, red )
    //
    Color Color::read ( istream& inStream ) noexcept
    {
        auto blue = Byte::read( inStream );
        auto green = Byte::read( inStream );
        auto red = Byte::read( inStream );
        return Color{ red, green, blue }; // user order: ( red, green, blue )
    }
    
    
    Color::Color ( const string& color ) :
    myRed{ 0 },
    myGreen{ 0 },
    myBlue{ 0 }
    {
        //
        // 6 == ( 3 * 2 )
        //
        // ( 3 components per color ) * ( 1 byte per component, two nibbles per byte )
        //
        // Example: 112233 ( red = 11, green = 22, blue = 33 )
        //
        if ( color.size() != BYTE_COUNT * NIBBLES_PER_BYTE )
        {
            throw runtime_error{ "unable to create color from string, expected the string to be 6 chars in length" };
        }
        
        stringstream stream;
        int components[ BYTE_COUNT ];
        for ( int index = 0;  index < BYTE_COUNT;  ++index )
        {
            string byte = color.substr( NIBBLES_PER_BYTE * index, NIBBLES_PER_BYTE );
            stream << std::hex << byte;
            stream >> components[ index ];
            stream.clear();
        }
        
        myRed   = static_cast< Color::Component >( components[ 0 ] );
        myGreen = static_cast< Color::Component >( components[ 1 ] );
        myBlue  = static_cast< Color::Component >( components[ 2 ] );
    }
    
    
    const Color::Component_t& Color::getBlue() const noexcept
    {
        return myBlue.getValue();
    }
    
    
    const Color::Component_t& Color::getGreen() const noexcept
    {
        return myGreen.getValue();
    }
    
    
    const Color::Component_t& Color::getRed() const noexcept
    {
        return myRed.getValue();
    }
    
    
    //
    // Note: significant stream read/write order: ( blue, green, red )
    //
    void Color::write ( ostream& outStream ) const
    {
        myBlue.write( outStream );
        myGreen.write( outStream );
        myRed.write( outStream );
    }
    
            
    std::string Color::toString ( ) const noexcept
    {
        stringstream stream;
        
        stream << std::setfill( '0' ) << std::setw( 2 ) << std::hex
               << static_cast< int >( myRed )
               << static_cast< int >( myGreen )
               << static_cast< int >( myBlue );
        
        return stream.str();
    }
    
    
    bool Color::operator== ( const Color& rhs ) const noexcept
    {
        return myRed.getValue()   ==  rhs.getRed()
            && myGreen.getValue() ==  rhs.getGreen()
            && myBlue.getValue()  ==  rhs.getBlue();
    }
    
    
    bool Color::operator!= ( const Color& rhs ) const noexcept
    {
        return ! ( *this == rhs );
    }
    
        
    ostream& operator<< ( ostream& outStream, const Color& rhs ) noexcept
    {
        rhs.write( outStream );
        
        return outStream;
    }
    
    
} // namespace BitmapGraphics

