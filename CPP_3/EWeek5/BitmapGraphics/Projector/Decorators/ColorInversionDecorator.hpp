//
//  ColorInversionDecorator.hpp
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
    class ColorInversionDecorator : public BitmapIteratorDecorator
    {
    public:
        
        ColorInversionDecorator ( HBitmapIterator innerDecorator );
        ~ColorInversionDecorator ( ) = default;
        
        ColorInversionDecorator ( const ColorInversionDecorator& src ) = default;
        ColorInversionDecorator ( ColorInversionDecorator&& src ) = default;
        
        ColorInversionDecorator& operator= ( const ColorInversionDecorator& rhs ) = default;
        ColorInversionDecorator& operator= ( ColorInversionDecorator&& rhs ) = default;
        
        virtual Color getColor ( ) const noexcept override;
        
    };
    
} // namespace BitmapGraphics
