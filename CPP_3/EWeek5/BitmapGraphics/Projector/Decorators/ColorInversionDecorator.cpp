//
//  ColorInversionDecorator.cpp
//  EWeek5
//
//  Created by Clayton Wong on 9/12/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "ColorInversionDecorator.hpp"

namespace BitmapGraphics
{
    
    
    ColorInversionDecorator::ColorInversionDecorator ( HBitmapIterator innerDecorator ) :
    BitmapIteratorDecorator{ innerDecorator }
    {
    }

    
    Color ColorInversionDecorator::getColor ( ) const noexcept
    {
        auto color = BitmapIteratorDecorator::getColor();
        
        auto red = Color::MAX - color.getRed();
        auto green = Color::MAX - color.getGreen();
        auto blue = Color::MAX - color.getBlue();
        
        return Color{ red, green, blue };
    }
    
    
} // namespace BitmapGraphics
