//
//  ExtraBlueDecorator.cpp
//  EWeek5
//
//  Created by Clayton Wong on 9/12/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "ExtraBlueDecorator.hpp"

namespace BitmapGraphics
{
    
    ExtraBlueDecorator::ExtraBlueDecorator ( HBitmapIterator innerDecorator ) :
    BitmapIteratorDecorator{ innerDecorator }
    {
    }
    
    
    Color ExtraBlueDecorator::getColor ( ) const noexcept
    {
        auto color = BitmapIteratorDecorator::getColor();
        return Color{ color.getRed(), color.getGreen(), static_cast<Color::Component_t>( Color::MAX ) };
    }

    
} //namespace BitmapGraphics
