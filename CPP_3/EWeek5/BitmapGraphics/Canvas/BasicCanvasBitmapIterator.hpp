//
//  BasicCanvasBitmapIterator.hpp
//  EWeek5
//
//  Created by Clayton Wong on 9/9/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "Drawing.hpp"
#include "Bitmap.hpp"
#include "IBitmapIterator.hpp"

namespace BitmapGraphics
{
    
    
    class BasicCanvasBitmapIterator : public IBitmapIterator
    {
    public:
        
        BasicCanvasBitmapIterator ( const Drawing& drawing, const VG::Point& minimum, const VG::Point& maximum );
        ~BasicCanvasBitmapIterator ( ) = default;
        
        BasicCanvasBitmapIterator ( const BasicCanvasBitmapIterator& src ) = default;
        BasicCanvasBitmapIterator ( BasicCanvasBitmapIterator&& src ) = default;
        
        BasicCanvasBitmapIterator& operator= ( const BasicCanvasBitmapIterator& rhs ) = default;
        BasicCanvasBitmapIterator& operator= ( BasicCanvasBitmapIterator&& rhs ) = default;
        
        virtual Color getColor ( ) const override;
        virtual int getBitmapWidth ( ) const noexcept override;
        virtual int getBitmapHeight ( ) const noexcept override;
        virtual int getBitmapNumberOfPadBytes ( ) const noexcept override;
        
        virtual bool isEndOfImage ( ) const noexcept override;
        virtual bool isEndOfScanLine ( ) const noexcept override;
        
        virtual void nextScanLine ( ) override;
        virtual void nextPixel ( ) override;
        
    private:
        
        const Drawing& myDrawing;
        const VG::Point myMin, myMax;
        VG::Point myCurrPosition;
    };

    
} // namespace BitmapGraphics
