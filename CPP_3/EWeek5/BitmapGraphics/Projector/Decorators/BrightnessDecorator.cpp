//
//  BrightnessDecorator.cpp
//  EWeek5
//
//  Created by Clayton Wong on 9/12/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "BrightnessDecorator.hpp"

namespace BitmapGraphics
{
    
    
    BrightnessDecorator::BrightnessDecorator ( HBitmapIterator innerDecorator, const int adjustment ) :
    BitmapIteratorDecorator{ innerDecorator },
    myAdjustment{ adjustment }
    {
    }

    
    Color BrightnessDecorator::getColor ( ) const noexcept
    {
        auto color = BitmapIteratorDecorator::getColor();
        
        Utility::ranged_number<int, Color::MIN, Color::MAX> red {
            color.getRed() + myAdjustment
        };
        Utility::ranged_number<int, Color::MIN, Color::MAX> green {
            color.getGreen() + myAdjustment
        };
        Utility::ranged_number<int, Color::MIN, Color::MAX> blue {
            color.getBlue() + myAdjustment
        };
        return Color{
            static_cast<int>(red),
            static_cast<int>(green),
            static_cast<int>(blue)
        };
    }
    
    
} // namespace BitmapGraphics
