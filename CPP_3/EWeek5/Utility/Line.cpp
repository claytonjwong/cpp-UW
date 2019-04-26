//
//  Line.cpp
//  EWeek5
//
//  Created by Clayton Wong on 9/16/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "Line.hpp"

namespace Utility
{
    Line::Line ( const BitmapGraphics::HCanvas& canvas, const BitmapGraphics::HPen& pen, LineIterator& iterator ) :
    myCanvas{ canvas },
    myPen{ pen },
    myIterator{ iterator }
    {
    }
    
    void Line::draw ( ) noexcept
    {
        myPen->drawPoint( myCanvas, myIterator.getCurrentPoint() );
        while ( ! myIterator.isEnd() )
        {
            myIterator.nextPoint();
            myPen->drawPoint( myCanvas, myIterator.getCurrentPoint() );
        }
    }
    
} // namespace Utility
