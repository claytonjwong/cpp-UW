//
//  WindowsBitmapEncoder.cpp
//  EWeek4
//
//  Created by CLAYTON WONG on 8/26/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "WindowsBitmapEncoder.hpp"


namespace Codec
{
    
    
    HBitmapEncoder WindowsBitmapEncoder::clone ( BitmapGraphics::HBitmapIterator it ) noexcept
    {
        auto result = std::make_shared<WindowsBitmapEncoder>();
        result->myIt = it;
        return result;
    }
    

    void WindowsBitmapEncoder::encodeToStream ( std::ostream& outStream ) const
    {
        if ( myIt == nullptr )
        {
            throw std::runtime_error{ "myIt is null" };
        }
        
        encodeHeader( outStream );
        encodePayload( outStream );
    }
    

    void WindowsBitmapEncoder::encodeHeader ( std::ostream& outStream ) const
    {
        BitmapGraphics::WindowsBitmapHeader
            header{ myIt->getBitmapWidth(), myIt->getBitmapHeight() };
        header.write( outStream );
    }
    

    void WindowsBitmapEncoder::encodePayload ( std::ostream& outStream ) const
    {
        for ( auto it{ myIt }; ! it->isEndOfImage(); it->nextScanLine() )
        {
            for ( ; ! it->isEndOfScanLine(); it->nextPixel() )
            {
                outStream << it->getColor();
            }
            
            Binary::Byte padByte{ 0 };
            for ( int pad{ 0 };  pad < it->getBitmapNumberOfPadBytes();  ++pad )
            {
                outStream << padByte;
            }
        }
    }
    
    
} // namespace Codec
