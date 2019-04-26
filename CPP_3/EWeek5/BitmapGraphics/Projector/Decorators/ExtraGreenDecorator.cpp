//
//  ExtraGreenDecorator.cpp
//  EWeek5
//
//  Created by Clayton Wong on 9/12/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "ExtraGreenDecorator.hpp"

namespace BitmapGraphics
{
    
    
    ExtraGreenDecorator::ExtraGreenDecorator ( HBitmapIterator innerDecorator ) :
    BitmapIteratorDecorator{ innerDecorator }
    {
    }
    
    
    Color ExtraGreenDecorator::getColor ( ) const noexcept
    {
        auto color = BitmapIteratorDecorator::getColor();
        return Color{ color.getRed(), static_cast<Color::Component_t>( Color::MAX ), color.getBlue() };
    }
    
    
} // namespace BitmapGraphics
