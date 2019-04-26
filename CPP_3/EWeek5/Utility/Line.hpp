//
//  Line.hpp
//  EWeek5
//
//  Created by Clayton Wong on 9/16/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "LineIterator.hpp"
#include "IPen.hpp"
#include "ICanvas.hpp"

namespace Utility
{
    class Line
    {
    public:
        
        Line ( const BitmapGraphics::HCanvas& canvas, const BitmapGraphics::HPen& pen, LineIterator& iterator );
        ~Line ( ) = default;
        
        Line ( ) = delete;
        Line ( const Line& src ) = delete;
        Line ( Line&& src ) = delete;
        Line& operator= ( const Line& rhs ) = delete;
        Line& operator= ( Line&& rhs ) = delete;
        
        void draw ( ) noexcept;
        
    private:
        
        BitmapGraphics::HCanvas myCanvas;
        BitmapGraphics::HPen myPen;
        LineIterator myIterator;
        
    };
    
    
} // namespace Utility
