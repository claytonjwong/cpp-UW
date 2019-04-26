//
//  ExtraRedDecorator.hpp
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
    class ExtraRedDecorator : public BitmapIteratorDecorator
    {
    public:
        
        ExtraRedDecorator ( HBitmapIterator innerDecorator ) :
        BitmapIteratorDecorator{ innerDecorator }
        {
        }
        
        ~ExtraRedDecorator ( ) = default;
        
        ExtraRedDecorator ( const ExtraRedDecorator& src ) = default;
        ExtraRedDecorator ( ExtraRedDecorator&& src ) = default;
        
        ExtraRedDecorator& operator= ( const ExtraRedDecorator& rhs ) = default;
        ExtraRedDecorator& operator= ( ExtraRedDecorator&& rhs ) = default;
        
        virtual Color getColor ( ) const noexcept override
        {
            auto color = BitmapIteratorDecorator::getColor();
            return Color{ static_cast<Color::Component_t>( Color::MAX ), color.getGreen(), color.getBlue() };
        }
    };
}
