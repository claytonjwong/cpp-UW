//
//  IStroke.hpp
//  EWeek5
//
//  Created by Clayton Wong on 9/13/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "IPen.hpp"
#include "Color.hpp"

namespace BitmapGraphics
{

    class IStroke;
    using HStroke = std::shared_ptr< BitmapGraphics::IStroke >;
    
    namespace StrokeName
    {
        static const std::string SQUARE = "square";
    }
    
    class IStroke
    {
    public:
        
        virtual const std::string& getName ( ) const noexcept = 0;
        
        virtual size_t getSize ( ) const noexcept = 0;
        
        virtual Color getColor ( ) const noexcept = 0;
        
        virtual HPen createPen ( ) const = 0;
                
    };

} // namespace BitmapGraphics
