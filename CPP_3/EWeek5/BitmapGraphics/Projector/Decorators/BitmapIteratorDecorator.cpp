//
//  BitmapIteratorDecorator.cpp
//  EWeek5
//
//  Created by Clayton Wong on 9/12/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "BitmapIteratorDecorator.hpp"

namespace BitmapGraphics
{
    
    
    BitmapIteratorDecorator::BitmapIteratorDecorator ( HBitmapIterator iterator ) :
    myIterator{ iterator }
    {
    }
    
    
    Color BitmapIteratorDecorator::getColor ( ) const noexcept
    {
        return myIterator->getColor();
    }
    
    
    int BitmapIteratorDecorator::getBitmapWidth ( ) const noexcept
    {
        return myIterator->getBitmapWidth();
    }
    
    
    int BitmapIteratorDecorator::getBitmapHeight ( ) const noexcept
    {
        return myIterator->getBitmapHeight();
    }
    
    
    int BitmapIteratorDecorator::getBitmapNumberOfPadBytes ( ) const noexcept
    {
        return myIterator->getBitmapNumberOfPadBytes();
    }
    
    
    bool BitmapIteratorDecorator::isEndOfImage ( ) const noexcept
    {
        return myIterator->isEndOfImage();
    }
    
    
    bool BitmapIteratorDecorator::isEndOfScanLine ( ) const noexcept
    {
        return myIterator->isEndOfScanLine();
    }
    
    
    void BitmapIteratorDecorator::nextScanLine ( )
    {
        myIterator->nextScanLine();
    }
    
    
    void BitmapIteratorDecorator::nextPixel ( )
    {
        myIterator->nextPixel();
    }
    
    
} // namespace BitmapGraphics
