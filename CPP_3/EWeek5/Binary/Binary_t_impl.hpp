//
//  Binary_t_impl.hpp
//  EWeek5
//
//  Created by Clayton Wong on 9/12/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "Binary_t.hpp"

namespace Binary
{
    
    
    template <typename Type>
    Binary_t<Type> Binary_t<Type>::read ( std::istream& inStream, const Endianness&& forceEndian )
    {
        Type result{ 0 };
        for ( int index{ 0 }, shift{ 0 };  index < Binary_t<Type>::BYTE_COUNT;  ++index )
        {
            char buffer;
            inStream.get( buffer );
            if ( ! inStream )
            {
                throw std::runtime_error{ "unable to read DoubleWord from istream" };
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
        for ( auto index{ 0 }, shift{ 0 };  index < Binary_t<Type>::BYTE_COUNT;  ++index )
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
    
    
} // namespace Binary
