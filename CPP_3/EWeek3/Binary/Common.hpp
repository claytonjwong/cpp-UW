//
//  Common.hpp
//  EWeek3
//
//  Created by CLAYTON WONG on 8/9/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include <stdexcept>

namespace Binary
{

    template <typename Type1, typename Type2>
    void verifyEquality ( Type1&& expected, Type2&& actual, const char* failure )
    {
        if (  !( expected == actual )  )
        {
            throw std::runtime_error{ failure };
        }
    }
    
    
    enum class Endianness
    {
        Dynamic,
        Little,
        Big
    };
    

    static constexpr Endianness SYSTEM_ENDIANNESSS () noexcept
    {
        return ( uint16_t{ 0x0001 } == uint16_t{ 0x01 } ) ? Endianness::Little : Endianness::Big;
    }
    
}
