//
//  Drawing.cpp
//  EWeek5
//
//  Created by Clayton Wong on 9/9/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "Drawing.hpp"

namespace BitmapGraphics
{
    
    Drawing::Drawing ( const Color& background ) :
    myBackground{ background }
    {
    }
    
    
    Color Drawing::getPixelColor ( const VG::Point& point ) const noexcept
    {
        auto it = myDrawing.find( point );
        
        if ( it != myDrawing.end() )
        {
            return it->second;
        }
        else
        {
            return myBackground;
        }
    }
    
    
    void Drawing::setPixelColor ( const VG::Point& point, const Color& color ) noexcept
    {
        myDrawing.insert(  { point, color }  );
    }
        
    
} // namespace BitmapGraphics
