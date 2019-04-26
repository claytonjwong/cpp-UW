//
//  ExtraGreenDecorator.hpp
//  EWeek4
//
//  Created by CLAYTON WONG on 8/31/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "BitmapIteratorDecorator.hpp"
#include "ranged_number.hpp"

namespace BitmapGraphics
{
    class ExtraGreenDecorator : public BitmapIteratorDecorator
    {
    public:
        
        ExtraGreenDecorator ( HBitmapIterator innerDecorator ) :
        BitmapIteratorDecorator{ innerDecorator }
        {
        }
        
        ~ExtraGreenDecorator ( ) = default;
        
        ExtraGreenDecorator ( const ExtraGreenDecorator& src ) = default;
        ExtraGreenDecorator ( ExtraGreenDecorator&& src ) = default;
        
        ExtraGreenDecorator& operator= ( const ExtraGreenDecorator& rhs ) = default;
        ExtraGreenDecorator& operator= ( ExtraGreenDecorator&& rhs ) = default;
        
        virtual Color getColor ( ) const noexcept override
        {
            auto color = BitmapIteratorDecorator::getColor();
            return Color{ color.getRed(), static_cast<Color::Component_t>( Color::MAX ), color.getBlue() };
        }
    };
}
