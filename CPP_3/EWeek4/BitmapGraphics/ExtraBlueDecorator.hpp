//
//  ExtraBlueDecorator.hpp
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
    class ExtraBlueDecorator : public BitmapIteratorDecorator
    {
    public:
        
        ExtraBlueDecorator ( HBitmapIterator innerDecorator ) :
        BitmapIteratorDecorator{ innerDecorator }
        {
        }
        
        ~ExtraBlueDecorator ( ) = default;
        
        ExtraBlueDecorator ( const ExtraBlueDecorator& src ) = default;
        ExtraBlueDecorator ( ExtraBlueDecorator&& src ) = default;
        
        ExtraBlueDecorator& operator= ( const ExtraBlueDecorator& rhs ) = default;
        ExtraBlueDecorator& operator= ( ExtraBlueDecorator&& rhs ) = default;
        
        virtual Color getColor ( ) const noexcept override
        {
            auto color = BitmapIteratorDecorator::getColor();
            return Color{ color.getRed(), color.getGreen(), static_cast<Color::Component_t>( Color::MAX ) };
        }
    };
}
