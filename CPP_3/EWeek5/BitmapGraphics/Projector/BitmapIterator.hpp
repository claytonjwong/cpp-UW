//
//  BitmapIterator.hpp
//  EWeek4
//
//  Created by CLAYTON WONG on 8/25/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "Bitmap.hpp"
#include "IBitmapIterator.hpp"

namespace BitmapGraphics
{
    class BitmapIterator : public IBitmapIterator
    {
    public:
    
        BitmapIterator ( const BitmapGraphics::Bitmap& bitmap, bool reverse=false );
        
        virtual ~BitmapIterator ( ) = default;
        
        BitmapIterator ( const BitmapIterator& src ) = default;
        BitmapIterator ( BitmapIterator&& src ) = default;
        
        BitmapIterator& operator= ( const BitmapIterator& rhs ) = default;
        BitmapIterator& operator= ( BitmapIterator&& rhs ) = default;
    
        virtual Color getColor ( ) const override;
        
        virtual int getBitmapWidth ( ) const noexcept override;
        virtual int getBitmapHeight ( ) const noexcept override;
        virtual int getBitmapNumberOfPadBytes ( ) const noexcept override;
        
        virtual bool isEndOfImage ( ) const noexcept override;
        virtual bool isEndOfScanLine ( ) const noexcept override;
        
        virtual void nextScanLine ( ) override;
        virtual void nextPixel ( ) override;
    
    
    private:
    
        const int myWidth, myHeight, myNumberOfPadBytes;
        Bitmap::ScanLineIterator myCurrScanLine;
        Bitmap::ScanLineIterator myEndOfScanLines;
        Bitmap::PixelIterator myCurrPixel;
        Bitmap::ReversePixelIterator myCurrReversePixel;
        const bool myReverse{ false };
    };
    
} // namespace BitmapGraphics
