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
        
        BitmapIteratorDecorator ( HBitmapIterator iterator ) :
        myIterator{ iterator }
        {
        }
        
        ~BitmapIteratorDecorator ( ) = default;
        
        BitmapIteratorDecorator ( const BitmapIteratorDecorator& src ) = default;
        BitmapIteratorDecorator ( BitmapIteratorDecorator&& src ) = default;
        
        BitmapIteratorDecorator& operator= ( const BitmapIteratorDecorator& rhs ) = default;
        BitmapIteratorDecorator& operator= ( BitmapIteratorDecorator&& rhs ) = default;
        
        virtual Color getColor ( ) const noexcept override
        {
            return myIterator->getColor();
        }
        
        virtual int getBitmapWidth ( ) const noexcept override
        {
            return myIterator->getBitmapWidth();
        }
        
        virtual int getBitmapHeight ( ) const noexcept override
        {
            return myIterator->getBitmapHeight();
        }
        
        virtual int getBitmapNumberOfPadBytes ( ) const noexcept override
        {
            return myIterator->getBitmapNumberOfPadBytes();
        }
        
        virtual bool isEndOfImage ( ) const noexcept override
        {
            return myIterator->isEndOfImage();
        }
        
        virtual bool isEndOfScanLine ( ) const noexcept override
        {
            return myIterator->isEndOfScanLine();
        }
        
        virtual void nextScanLine ( ) override
        {
            myIterator->nextScanLine();
        }
        
        virtual void nextPixel ( ) override
        {
            myIterator->nextPixel();
        }
    
    
    private:
    
        HBitmapIterator myIterator;
        
    };
}
