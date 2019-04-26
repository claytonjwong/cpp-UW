//
//  VerticalLineDecorator.hpp
//  EWeek4
//
//  Created by CLAYTON WONG on 8/31/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "BitmapIteratorDecorator.hpp"
#include "ranged_number.hpp"

namespace BitmapGraphics
{
    class VerticalLineDecorator : public BitmapIteratorDecorator
    {
    public:
        
        VerticalLineDecorator ( HBitmapIterator innerDecorator, const unsigned int lineSpace ) :
        BitmapIteratorDecorator{ innerDecorator },
        myLineSpace{ lineSpace },
        myCurrentSpace{ 0 }
        {
        }
        
        ~VerticalLineDecorator ( ) = default;
        
        VerticalLineDecorator ( const VerticalLineDecorator& src ) = default;
        VerticalLineDecorator ( VerticalLineDecorator&& src ) = default;
        
        VerticalLineDecorator& operator= ( const VerticalLineDecorator& rhs ) = default;
        VerticalLineDecorator& operator= ( VerticalLineDecorator&& rhs ) = default;
        
        virtual Color getColor ( ) const noexcept override
        {
            auto color = BitmapIteratorDecorator::getColor();
            
            if ( ++myCurrentSpace >= myLineSpace )
            {
                myCurrentSpace = 0;
                color = Color{ 0, 0, 0 };
            }
            
            return color;
        }
        
    private:
        const unsigned int myLineSpace;
        mutable int myCurrentSpace{ 0 };
    };
    
} // namespace BitmapGraphics
