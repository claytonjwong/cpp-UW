//
//  SquarePen.hpp
//  EWeek5
//
//  Created by Clayton Wong on 9/11/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "ICanvas.hpp"
#include "IPen.hpp"
#include "Point.hpp"
#include "Color.hpp"

namespace BitmapGraphics
{
    class SquarePen : public IPen
    {
    public:
        
        SquarePen ( ) = delete;
        
        SquarePen ( const std::string& name, size_t size, Color color );
        
        SquarePen ( const SquarePen& src ) = default;
        SquarePen ( SquarePen&& src ) = default;
        
        SquarePen& operator= ( const SquarePen& src ) = default;
        SquarePen& operator= ( SquarePen&& src ) = default;
        
        virtual const std::string& getName ( ) const noexcept override;
        
        virtual size_t getSize ( ) const noexcept override;
        
        virtual Color getColor ( ) const noexcept override;
        
        virtual void drawPoint ( const HCanvas& canvas, const VG::Point& topLeftPoint ) const noexcept override;
        
    private:
        
        std::string myName;
        size_t mySize;
        Color myColor;
    };
    
} // namespace BitmapGraphics

