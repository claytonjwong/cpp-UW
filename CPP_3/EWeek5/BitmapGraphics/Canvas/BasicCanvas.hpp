//
//  BasicCanvas.hpp
//  EWeek5
//
//  Created by Clayton Wong on 9/9/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "Drawing.hpp"
#include "IBitmapIterator.hpp"
#include "ICanvas.hpp"
#include "BasicCanvasBitmapIterator.hpp"

namespace BitmapGraphics
{

    
    class BasicCanvas : public ICanvas
    {
    public:

        BasicCanvas ( int width, int height, const Color& background );
        ~BasicCanvas ( ) = default;
        
        BasicCanvas ( const BasicCanvas& src ) = default;
        BasicCanvas ( BasicCanvas&& src ) = default;
        
        BasicCanvas& operator= ( const BasicCanvas& rhs ) = default;
        BasicCanvas& operator= ( BasicCanvas&& rhs ) = default;

        int getWidth ( ) const noexcept;
        int getHeight ( ) const noexcept;

        Color getPixelColor ( const VG::Point& point ) const;
        void setPixelColor ( const VG::Point& point, const Color& color );

        HBitmapIterator createBitmapIterator ( ) const noexcept;

    private:

        const VG::Point myMin, myMax;
        Drawing myDrawing;

    };


} // namespace BitmapGraphics
