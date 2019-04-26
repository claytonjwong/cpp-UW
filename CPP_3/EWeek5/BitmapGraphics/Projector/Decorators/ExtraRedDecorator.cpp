//
//  ExtraRedDecorator.cpp
//  EWeek5
//
//  Created by Clayton Wong on 9/12/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "ExtraRedDecorator.hpp"

namespace BitmapGraphics
{
    
    ExtraRedDecorator::ExtraRedDecorator ( HBitmapIterator innerDecorator ) :
    BitmapIteratorDecorator{ innerDecorator }
    {
    }
    
    
    Color ExtraRedDecorator::getColor ( ) const noexcept
    {
        auto color = BitmapIteratorDecorator::getColor();
        return Color{ static_cast<Color::Component_t>( Color::MAX ), color.getGreen(), color.getBlue() };
    }
    
    
} // namespace BitmapGraphics
