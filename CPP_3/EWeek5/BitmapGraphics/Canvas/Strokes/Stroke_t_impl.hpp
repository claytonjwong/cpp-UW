//
//  Stroke_t_impl.hpp
//  EWeek5
//
//  Created by Clayton Wong on 9/16/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "Stroke_t.hpp"

namespace BitmapGraphics
{
    
    template< typename PenType >
    Stroke_t< PenType >::Stroke_t ( const std::string& name, const size_t size, const Color& color ) :
    myName{ name },
    mySize{ size },
    myColor{ color }
    {
    }
    
    
    template< typename PenType >
    const std::string& Stroke_t< PenType >::getName ( ) const noexcept
    {
        return myName;
    }
    
    
    template< typename PenType >
    size_t Stroke_t< PenType >::getSize ( ) const noexcept
    {
        return mySize;
    }
    
    
    template< typename PenType >
    Color Stroke_t< PenType >::getColor ( ) const noexcept
    {
        return myColor;
    }
    
    
    template< typename PenType >
    HPen Stroke_t< PenType >::createPen ( ) const noexcept
    {
        return std::make_shared< PenType >( myName, mySize, myColor );
    }
    
    
} // namespace BitmapGraphics
