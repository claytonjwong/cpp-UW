//
//  SquareStroke.hpp
//  EWeek5
//
//  Created by Clayton Wong on 9/13/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "IStroke.hpp"
#include "Stroke_t.hpp"
#include "SquarePen.hpp"

namespace BitmapGraphics
{
    using SquareStroke = Stroke_t< SquarePen >;
    
} // namespace BitmapGraphics
