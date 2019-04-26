//
//  BrightnessDecorator.hpp
//  EWeek4
//
//  Created by CLAYTON WONG on 8/31/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "BitmapIteratorDecorator.hpp"
#include "ranged_number.hpp"

namespace BitmapGraphics
{
    class BrightnessDecorator : public BitmapIteratorDecorator
    {
    public:
        
        BrightnessDecorator ( HBitmapIterator innerDecorator, const int adjustment );
        ~BrightnessDecorator ( ) = default;
        
        BrightnessDecorator ( const BrightnessDecorator& src ) = default;
        BrightnessDecorator ( BrightnessDecorator&& src ) = default;
        
        BrightnessDecorator& operator= ( const BrightnessDecorator& rhs ) = default;
        BrightnessDecorator& operator= ( BrightnessDecorator&& rhs ) = default;
        
        virtual Color getColor ( ) const noexcept override;
        
    private:
        const int myAdjustment;
    };
    
} // namespace BitmapGraphics
