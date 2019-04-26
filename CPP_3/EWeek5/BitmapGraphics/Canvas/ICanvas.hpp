//
//  ICanvas.hpp
//  EWeek5
//
//  Created by Clayton Wong on 9/9/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "IBitmapIterator.hpp"
#include "Point.hpp"

namespace BitmapGraphics
{
    class ICanvas;
    using HCanvas = std::shared_ptr< ICanvas >;
    
    class ICanvas
    {
    public:
        
        virtual ~ICanvas ( ) {}
        
        virtual int getWidth ( ) const noexcept = 0;
        virtual int getHeight ( ) const noexcept = 0;
        
        virtual Color getPixelColor ( const VG::Point& point ) const = 0;
        virtual void setPixelColor ( const VG::Point& point, const Color& color ) = 0;
        
        virtual HBitmapIterator createBitmapIterator ( ) const noexcept = 0;
    };
    
} // namespace BitmapGraphics
