//
//  BitmapIterator.cpp
//  EWeek4
//
//  Created by CLAYTON WONG on 8/25/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "BitmapIterator.hpp"

namespace BitmapGraphics
{
    BitmapIterator::BitmapIterator ( const BitmapGraphics::Bitmap& bitmap, bool reverse ) :
    myWidth{ bitmap.getWidth() },
    myHeight{ bitmap.getHeight() },
    myNumberOfPadBytes{ bitmap.getNumberOfPadBytes() },
    myCurrScanLine{ bitmap.begin() },
    myEndOfScanLines{ bitmap.end() },
    myCurrPixel{ myCurrScanLine->begin() },
    myCurrReversePixel{ myCurrScanLine->rbegin() },
    myReverse{ reverse }
    {
    }
    

    Color BitmapIterator::getColor ( ) const noexcept
    {
        if ( myReverse )
        {
            return *myCurrReversePixel;
        }
        else
        {
            return *myCurrPixel;
        }
    }


    int BitmapIterator::getBitmapWidth ( ) const noexcept
    {
        return myWidth;
    }


    int BitmapIterator::getBitmapHeight ( ) const noexcept
    {
        return myHeight;
    }
    

    int BitmapIterator::getBitmapNumberOfPadBytes ( ) const noexcept
    {
        return myNumberOfPadBytes;
    }


    bool BitmapIterator::isEndOfImage ( ) const noexcept
    {
        return myCurrScanLine == myEndOfScanLines;
    }
    

    bool BitmapIterator::isEndOfScanLine ( ) const noexcept
    {
        if ( myReverse )
        {
            return myCurrReversePixel == myCurrScanLine->rend();
        }
        else
        {
            return myCurrPixel == myCurrScanLine->end();
        }
    }
    

    void BitmapIterator::nextScanLine ( )
    {
        if ( isEndOfImage() )
        {
            throw std::runtime_error{ "cannot retrieve next scan line, currently at end of image" };
        }
        
        ++myCurrScanLine;
        myCurrPixel = myCurrScanLine->begin();
        myCurrReversePixel = myCurrScanLine->rbegin();
    }
    

    void BitmapIterator::nextPixel ( )
    {
        if ( isEndOfScanLine() )
        {
            throw std::runtime_error{ "cannot retrieve next pixel, current at end of scan line" };
        }
        
        ++myCurrPixel;
        ++myCurrReversePixel;
    }
    
}
