//
//  BasicCanvas.cpp
//  EWeek5
//
//  Created by Clayton Wong on 9/9/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "BasicCanvas.hpp"

namespace BitmapGraphics
{
    
    
    BasicCanvas::BasicCanvas ( int width, int height, const Color& background ) :
    myMin{ VG::Point{0,0} },
    myMax{ VG::Point{ width, height } },
    myDrawing{ background }
    {
    }


    int BasicCanvas::getWidth ( ) const noexcept
    {
        return myMax.getX();
    }


    int BasicCanvas::getHeight ( ) const noexcept
    {
        return myMax.getY();
    }


    Color BasicCanvas::getPixelColor ( const VG::Point& point ) const
    {
        if (  ! point.isInBounds( myMin, myMax )  )
        {
            throw std::out_of_range{ "cannot get pixel color since the point is out-of-bounds" };
        }
        
        return myDrawing.getPixelColor( point );
    }

    
    void BasicCanvas::setPixelColor ( const VG::Point& point, const Color& color )
    {
        if (  ! point.isInBounds( myMin, myMax )  )
        {
            throw std::out_of_range{ "cannot set pixel color since the point is out-of-bounds" };
        }
        
        myDrawing.setPixelColor( point, color );
    }
    
    
    HBitmapIterator BasicCanvas::createBitmapIterator ( ) const noexcept
    {
        return std::make_shared< BasicCanvasBitmapIterator >( myDrawing, myMin, myMax );
    }
    
    
} // namespace BitmapGraphics
