//
//  StrokeFactory.cpp
//  EWeek5
//
//  Created by Clayton Wong on 9/13/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "StrokeFactory.hpp"

namespace BitmapGraphics
{
    
    HStroke StrokeFactory::createStroke ( const std::string& name, size_t size, Color color )
    {
        if ( name == StrokeName::SQUARE )
        {
            return std::make_shared< SquareStroke >( name, size, color );
        }
        
        return nullptr;
    }
    
    
}
