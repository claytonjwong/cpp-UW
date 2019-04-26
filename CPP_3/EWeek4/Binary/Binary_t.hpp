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
    
    
    template <typename Type>
    Binary_t<Type> Binary_t<Type>::read ( std::istream& inStream, const Endianness&& forceEndian )
    {
        Type result = 0;
        for ( int index = 0, shift = 0; index < Binary_t<Type>::BYTE_COUNT; ++index )
        {
            char buffer;
            inStream.get( buffer );
            if ( ! inStream )
            {
                throw std::runtime_error{ "unable to read from stream" };
            }
            auto value = static_cast<Byte_t>( buffer );

            if (  ( forceEndian == Endianness::Little ) ||
                  ( forceEndian == Endianness::Dynamic && SYSTEM_ENDIANNESSS() == Endianness::Little )  )
            {
                shift = index * BITS_PER_BYTE;
            }
            else
            {
                shift = ( Binary_t<Type>::BYTE_COUNT - 1 - index ) * BITS_PER_BYTE;
            }
            
            result |= value << shift;
        }

        return Binary_t<Type>{ result };
    }
    
    
    template <typename Type>
    Binary_t<Type> Binary_t<Type>::readLittleEndian ( std::istream& inStream )
    {
        return read( inStream, Endianness::Little );
    }
    

    template <typename Type>
    Binary_t<Type> Binary_t<Type>::readBigEndian ( std::istream& inStream )
    {
        return read( inStream, Endianness::Big );
    }
    
    
    template <typename Type>
    Binary_t<Type>::Binary_t ( Type value ) :
    myValue{ value }
    {
    }
    
    
    template <typename Type>
    Binary_t<Type>& Binary_t<Type>::operator= ( const Type& value )
    {
        myValue = static_cast<Type>( value );
        return *this;
    }


    template <typename Type>
    Binary_t<Type>& Binary_t<Type>::operator= ( Type&& value )
    {
        myValue = static_cast<Type>( value );
        return *this;
    }
    
    
    template <typename Type>
    const Type& Binary_t<Type>::getValue() const noexcept
    {
        return myValue;
    }
    

    template <typename Type>
    void Binary_t<Type>::write ( std::ostream& outStream, const Endianness&& forceEndian ) const
    {
        for ( auto index = 0, shift = 0; index < Binary_t<Type>::BYTE_COUNT; ++index )
        {
            if (  ( forceEndian == Endianness::Little ) ||
                  ( forceEndian == Endianness::Dynamic && SYSTEM_ENDIANNESSS() == Endianness::Little ) )
            {
                shift = index * BITS_PER_BYTE;
            }
            else
            {
                shift = ( Binary_t<Type>::BYTE_COUNT - 1 - index ) * BITS_PER_BYTE;
            }
            
            Byte_t value = ( myValue & MASK_ALL_BITS_SET << shift ) >> shift;
            outStream << value;
            if ( ! outStream )
            {
                throw std::runtime_error{ "unable to write to stream" };
            }
        }
    }
    
    
    template <typename Type>
    void Binary_t<Type>::writeLittleEndian ( std::ostream& outStream ) const
    {
        write( outStream, Endianness::Little );
    }
    
    
    template <typename Type>
    void Binary_t<Type>::writeBigEndian ( std::ostream& outStream ) const
    {
        write( outStream, Endianness::Big );
    }
    
    
    template <typename Type>
    Binary_t<Type>::operator Type() const noexcept
    {
        return myValue;
    }


    template <typename Type>
    bool Binary_t<Type>::operator== ( const Binary_t<Type>& rhs ) const noexcept
    {
        return myValue == rhs.myValue;
    }
    
    
    template <typename Type>
    std::ostream& operator<< ( std::ostream& outStream, const Binary_t<Type>& rhs )
    {
        rhs.write( outStream );
        return outStream;
    }
    

}
