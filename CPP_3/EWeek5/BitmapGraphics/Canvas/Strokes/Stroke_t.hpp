//
//  Stroke_t.hpp
//  EWeek5
//
//  Created by Clayton Wong on 9/16/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

namespace BitmapGraphics
{
    template< typename PenType >
    class Stroke_t : public IStroke
    {
    public:
        
        Stroke_t ( ) = delete;
        
        Stroke_t ( const std::string& name, const size_t size, const Color& color );
        
        Stroke_t ( const Stroke_t& src ) = default;
        Stroke_t ( Stroke_t&& src ) = default;
        
        Stroke_t& operator= ( const Stroke_t& rhs ) = default;
        Stroke_t& operator= ( Stroke_t&& rhs ) = default;
        
        virtual const std::string& getName ( ) const noexcept override;
        
        virtual size_t getSize ( ) const noexcept override;
        
        virtual Color getColor ( ) const noexcept override;
        
        virtual HPen createPen ( ) const noexcept override;
        
    private:
        
        std::string myName;
        size_t mySize;
        Color myColor;
    };
    
} // namespace BitmapGraphics

#include "Stroke_t_impl.hpp"
