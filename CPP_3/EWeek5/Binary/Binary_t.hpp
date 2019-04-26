//
//  Binary_t.hpp
//  EWeek3
//
//  Created by CLAYTON WONG on 8/19/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "Common.hpp"
#include "binary_ostream_iterator.hpp"
#include <iostream>

namespace Binary
{
    using Byte_t = uint8_t;
    using Word_t = uint16_t;
    using DoubleWord_t = uint32_t;

    static constexpr int BITS_PER_BYTE = 8;

    static constexpr Byte_t MASK_ALL_BITS_SET =
        static_cast<Byte_t>(  ( 1 << ( BITS_PER_BYTE + 1 ) )  - 1  );

    template <typename Type>
    class Binary_t
    {
    public:
        
        static constexpr int BYTE_COUNT {  sizeof( Type )  };
        
        static Binary_t read ( std::istream& inStream, const Endianness&& forceEndian = Endianness::Dynamic );
        static Binary_t readLittleEndian ( std::istream& inStream );
        static Binary_t readBigEndian ( std::istream& inStream );
        
        Binary_t() = default;
        ~Binary_t() = default;
        explicit Binary_t ( Type value );

        Binary_t ( const Binary_t& src ) = default;
        Binary_t ( Binary_t&& src ) = default;
        
        Binary_t& operator= ( const Binary_t& rhs ) = default;
        Binary_t& operator= ( Binary_t&& rhs ) = default;

        Binary_t& operator= ( const Type& value );
        Binary_t& operator= ( Type&& value );

        const Type& getValue() const noexcept;
        
        void write ( std::ostream& outStream, const Endianness&& forceEndian = Endianness::Dynamic ) const;
        void writeLittleEndian ( std::ostream& outStream ) const;
        void writeBigEndian ( std::ostream& outStream ) const;
        
        operator Type() const noexcept;
        
        bool operator== ( const Binary_t& rhs ) const noexcept;
        
    private:
    
        Type myValue{ 0 };
    
    };
    
} // namespace Binary

#include "Binary_t_impl.hpp"
    
