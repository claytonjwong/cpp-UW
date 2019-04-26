//
//  WindowsBitmapFileProjector.hpp
//  EWeek5
//
//  Created by Clayton Wong on 9/16/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "CodecLibrary.hpp"
#include "IProjector.hpp"

namespace BitmapGraphics
{
    class WindowsBitmapFileProjector : public IProjector
    {
    public:
        
        void projectCanvas ( const HCanvas& canvas ) const;
        
    };
    
    
} // namespace BitmapGraphics
