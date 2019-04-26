//
//  IBitmapIterator.hpp
//  EWeek4
//
//  Created by CLAYTON WONG on 8/25/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "Color.hpp"
#include <memory>

namespace BitmapGraphics
{
    class IBitmapIterator;
    using HBitmapIterator = std::shared_ptr<IBitmapIterator>;

    class IBitmapIterator
    {
    public:
        
        virtual ~IBitmapIterator ( ) {};
        
        virtual Color getColor ( ) const = 0;
        
        virtual int getBitmapWidth ( ) const noexcept = 0;
        
        virtual int getBitmapHeight ( ) const noexcept = 0;
        
        virtual int getBitmapNumberOfPadBytes ( ) const noexcept = 0;
        
        virtual bool isEndOfImage ( ) const noexcept = 0;
        
        virtual bool isEndOfScanLine ( ) const noexcept = 0;
        
        virtual void nextScanLine ( ) = 0;
        
        virtual void nextPixel ( ) = 0;
        
    };
    
} // namespace BitmapGraphics
