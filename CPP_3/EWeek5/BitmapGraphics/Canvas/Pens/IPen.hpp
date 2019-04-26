//
//  IPen.hpp
//  EWeek5
//
//  Created by Clayton Wong on 9/11/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "ICanvas.hpp"
#include "Point.hpp"

namespace BitmapGraphics
{
    class IPen;
    using HPen = std::shared_ptr< IPen >;
    
    class IPen
    {
    public:
        
        virtual const std::string& getName ( ) const noexcept = 0;
        
        virtual size_t getSize ( ) const noexcept = 0;
        
        virtual Color getColor ( ) const noexcept = 0;
        
        virtual void drawPoint ( const HCanvas& canvas, const VG::Point& point ) const noexcept = 0;

    };
    
    
} // namespace BitmapGraphics
