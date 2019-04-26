//
//  ranged_number.hpp
//  EWeek4
//
//  Created by CLAYTON WONG on 8/24/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "Color.hpp"
#include <algorithm>

namespace Utility
{
    template <typename Type, Type lowerBound, Type upperBound>
    class ranged_number
    {
    public:
        
        ranged_number ( ) = default;
        ranged_number ( const Type& value );
        ~ranged_number ( ) = default;
        
        ranged_number ( const ranged_number& src ) = default;
        ranged_number ( ranged_number&& src ) = default;
        
        ranged_number& operator= ( const ranged_number& rhs ) = default;
        ranged_number& operator= ( ranged_number&& rhs ) = default;
        
        const Type& getValue ( ) const noexcept;
        
        operator Type ( );
        
        const ranged_number& operator++ ( ) noexcept;
        const ranged_number operator++ ( int ) noexcept;
        
        const ranged_number& operator-- ( ) noexcept;
        const ranged_number operator-- ( int ) noexcept;
        
        const ranged_number& operator+= ( const ranged_number& rhs ) noexcept;
        const ranged_number& operator+= ( ranged_number&& rhs ) noexcept;

        const ranged_number& operator-= ( const ranged_number& rhs ) noexcept;
        const ranged_number& operator-= ( ranged_number&& rhs ) noexcept;

    private:
        
        Type myValue;
        
    };
    
} // namespace Utility

#include "ranged_number_impl.hpp"

