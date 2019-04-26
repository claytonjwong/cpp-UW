//
//  BitmapIteratorDecorator.hpp
//  EWeek4
//
//  Created by CLAYTON WONG on 8/31/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "IBitmapIterator.hpp"

namespace BitmapGraphics
{
    class BitmapIteratorDecorator : public IBitmapIterator
    {
    public:
        
        BitmapIteratorDecorator ( HBitmapIterator iterator );
        ~BitmapIteratorDecorator ( ) = default;
        
        BitmapIteratorDecorator ( const BitmapIteratorDecorator& src ) = default;
        BitmapIteratorDecorator ( BitmapIteratorDecorator&& src ) = default;
        
        BitmapIteratorDecorator& operator= ( const BitmapIteratorDecorator& rhs ) = default;
        BitmapIteratorDecorator& operator= ( BitmapIteratorDecorator&& rhs ) = default;
        
        virtual Color getColor ( ) const noexcept override;
        
        virtual int getBitmapWidth ( ) const noexcept override;
        virtual int getBitmapHeight ( ) const noexcept override;
        virtual int getBitmapNumberOfPadBytes ( ) const noexcept override;
        
        virtual bool isEndOfImage ( ) const noexcept override;
        virtual bool isEndOfScanLine ( ) const noexcept override;
        
        virtual void nextScanLine ( ) override;
        virtual void nextPixel ( ) override;
        
    private:
    
        HBitmapIterator myIterator;
        
    };
    
} // namespace BitmapGraphics
