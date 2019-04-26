//
//  ranged_number_impl.hpp
//  EWeek5
//
//  Created by Clayton Wong on 9/12/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "ranged_number.hpp"

namespace Utility
{
    
    
    template <typename Type, Type lowerBound, Type upperBound>
    ranged_number<Type,lowerBound,upperBound>::ranged_number ( const Type& value ) :
    myValue{ std::clamp( value, lowerBound, upperBound ) }
    {
    }
    
    
    template <typename Type, Type lowerBound, Type upperBound>
    const Type& ranged_number<Type,lowerBound,upperBound>::getValue ( ) const noexcept
    {
        return myValue;
    }
    
    
    template <typename Type, Type lowerBound, Type upperBound>
    ranged_number<Type,lowerBound,upperBound>::operator Type()
    {
        return myValue;
    }
    
    
    template <typename Type, Type lowerBound, Type upperBound>
    const ranged_number<Type,lowerBound,upperBound>&
    ranged_number<Type,lowerBound,upperBound>::operator++ ( ) noexcept
    {
        myValue = std::clamp<Type>( myValue + 1, lowerBound, upperBound );
        return *this;
    }
    
    
    template <typename Type, Type lowerBound, Type upperBound>
    const ranged_number<Type,lowerBound,upperBound>
    ranged_number<Type,lowerBound,upperBound>::operator++ ( int ) noexcept
    {
        auto beforeIncrement = *this;
        operator++();
        return beforeIncrement;
    }
    
    
    template <typename Type, Type lowerBound, Type upperBound>
    const ranged_number<Type,lowerBound,upperBound>&
    ranged_number<Type,lowerBound,upperBound>::operator-- ( ) noexcept
    {
        myValue = std::clamp<Type>( myValue - 1, lowerBound, upperBound );
        return *this;
    }
    
    
    template <typename Type, Type lowerBound, Type upperBound>
    const ranged_number<Type,lowerBound,upperBound>
    ranged_number<Type,lowerBound,upperBound>::operator-- ( int ) noexcept
    {
        auto beforeDecrement = *this;
        operator--();
        return beforeDecrement;
    }
    
    
    template <typename Type, Type lowerBound, Type upperBound>
    const ranged_number<Type,lowerBound,upperBound>&
    ranged_number<Type,lowerBound,upperBound>::operator+= ( const ranged_number& rhs ) noexcept
    {
        myValue = std::clamp<Type>( myValue + rhs.getValue(), lowerBound, upperBound );
        return *this;
    }
    
    
    template <typename Type, Type lowerBound, Type upperBound>
    const ranged_number<Type,lowerBound,upperBound>&
    ranged_number<Type,lowerBound,upperBound>::operator+= ( ranged_number&& rhs ) noexcept
    {
        myValue = std::clamp<Type>( myValue + rhs.getValue(), lowerBound, upperBound );
        return *this;
    }
    
    
    template <typename Type, Type lowerBound, Type upperBound>
    const ranged_number<Type,lowerBound,upperBound>&
    ranged_number<Type,lowerBound,upperBound>::operator-= ( const ranged_number& rhs ) noexcept
    {
        myValue = std::clamp<Type>( myValue - rhs.getValue(), lowerBound, upperBound );
        return *this;
    }
    
    
    template <typename Type, Type lowerBound, Type upperBound>
    const ranged_number<Type,lowerBound,upperBound>&
    ranged_number<Type,lowerBound,upperBound>::operator-= ( ranged_number&& rhs ) noexcept
    {
        myValue = std::clamp<Type>( myValue - rhs.getValue(), lowerBound, upperBound );
        return *this;
    }

    
} // namespace Utility
