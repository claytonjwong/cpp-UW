//
//  IBitmapDecoder.h
//  EWeek4
//
//  Created by CLAYTON WONG on 8/25/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "IBitmapIterator.hpp"
#include <iostream>
#include <memory>

namespace Codec
{
    class IBitmapDecoder;
    using HBitmapDecoder = std::shared_ptr<IBitmapDecoder>;

    class IBitmapDecoder
    {
    public:
    
        virtual ~IBitmapDecoder ( ) { }
        
        virtual HBitmapDecoder clone ( std::istream& inStream ) = 0;
        
        virtual BitmapGraphics::HBitmapIterator createIterator ( const bool reverse=false ) const = 0;
        
        virtual const std::string& getMimeType ( ) const noexcept = 0;
        
        virtual bool isSupported ( const std::string& firstChunkOfBitmap ) const noexcept = 0;
        
    };
}
