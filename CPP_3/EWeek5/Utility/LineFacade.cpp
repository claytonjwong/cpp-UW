//
//  LineFacade.cpp
//  EWeek5
//
//  Created by Clayton Wong on 9/16/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "LineFacade.hpp"

namespace Utility
{
    void LineFacade::drawLine ( const BitmapGraphics::HCanvas& canvas, const BitmapGraphics::HPen& pen,
                                const VG::Point& begin, const VG::Point& end )
    {
        Utility::LineIterator iterator{ begin, end };
        Utility::Line line{ canvas, pen, iterator };
        line.draw();
    }
}
