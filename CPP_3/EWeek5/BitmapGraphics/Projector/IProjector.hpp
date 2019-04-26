//
//  IProjector.hpp
//  EWeek5
//
//  Created by Clayton Wong on 9/16/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "ICanvas.hpp"

namespace BitmapGraphics
{
    class IProjector
    {
    public:
        
        virtual void projectCanvas ( const HCanvas& canvas ) const = 0;
        
    };
    
    
} // namespace BitmapGraphics
