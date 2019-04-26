//
//  BasicCanvasBitmapIterator.cpp
//  EWeek5
//
//  Created by Clayton Wong on 9/9/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "BasicCanvasBitmapIterator.hpp"

namespace BitmapGraphics
{
    

    BasicCanvasBitmapIterator::BasicCanvasBitmapIterator ( const Drawing& drawing, const VG::Point& minimum, const VG::Point& maximum ) :
    myDrawing{ drawing },
    myMin{ minimum },
    myMax{ maximum },
    myCurrPosition{ }
    {
    }
    
    
    Color BasicCanvasBitmapIterator::getColor ( ) const
    {
        if (  ! myCurrPosition.isInBounds( myMin, myMax )  )
        {
            throw std::out_of_range{ "unable to get color, the current position is out-of-bounds of the canvas" };
        }
        
        return myDrawing.getPixelColor( myCurrPosition );
    }
    
    
    int BasicCanvasBitmapIterator::getBitmapWidth ( ) const noexcept
    {
        return myMax.getX();
    }
    
    
    int BasicCanvasBitmapIterator::getBitmapHeight ( ) const noexcept
    {
        return myMax.getY();
    }
    
    
    int BasicCanvasBitmapIterator::getBitmapNumberOfPadBytes ( ) const noexcept
    {
        return 0; // irrelevant for this type of iterator, since there is no specific file format
    }
    
    
    bool BasicCanvasBitmapIterator::isEndOfImage ( ) const noexcept
    {
        return myCurrPosition.getY() >= myMax.getY();
    }
    
    
    bool BasicCanvasBitmapIterator::isEndOfScanLine ( ) const noexcept
    {
        return myCurrPosition.getX() >= myMax.getX();
    }
    
    
    void BasicCanvasBitmapIterator::nextScanLine ( )
    {
        const auto x = 0,  y = myCurrPosition.getY() + 1;
        
        VG::Point nextPosition{ x, y };
        
        std::swap( myCurrPosition, nextPosition );
    }
    
    
    void BasicCanvasBitmapIterator::nextPixel ( )
    {
        const auto x = myCurrPosition.getX() + 1,  y = myCurrPosition.getY();
        
        VG::Point nextPosition{ x, y };
        
        std::swap( myCurrPosition, nextPosition );
    }
    
    
} // namespace BitmapGraphics
