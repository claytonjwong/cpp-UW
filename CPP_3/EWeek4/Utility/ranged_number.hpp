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
    return std::move( beforeIncrement );
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
    return std::move( beforeDecrement );
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



