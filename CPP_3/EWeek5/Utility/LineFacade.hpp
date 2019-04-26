//
//  LineFacade.hpp
//  EWeek5
//
//  Created by Clayton Wong on 9/16/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "Line.hpp"
#include "LineIterator.hpp"
#include "ICanvas.hpp"
#include "IPen.hpp"
#include "Point.hpp"

namespace Utility
{
    class LineFacade
    {
    public:
        
        static void drawLine ( const BitmapGraphics::HCanvas& canvas, const BitmapGraphics::HPen& pen,
                              const VG::Point& begin, const VG::Point& end );
        
        LineFacade ( ) = delete;
        ~LineFacade ( ) = delete;
        LineFacade ( const LineFacade& src ) = delete;
        LineFacade ( LineFacade&& src ) = delete;
        LineFacade& operator= ( const LineFacade& rhs ) = delete;
        LineFacade& operator= ( LineFacade&& rhs ) = delete;
    };
    
} // namespace Utility
