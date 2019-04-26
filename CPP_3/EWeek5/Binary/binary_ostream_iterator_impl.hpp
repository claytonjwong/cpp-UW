//
//  binary_ostream_iterator_impl.hpp
//  EWeek5
//
//  Created by Clayton Wong on 9/12/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "binary_ostream_iterator.hpp"

namespace Binary
{
    
    template< class T, class charT, class traits >
    binary_ostream_iterator< T, charT, traits >::binary_ostream_iterator ( stream_type& stream ) :
    myStream{ &stream }
    {
    }
    
    
    template< class T, class charT, class traits >
    typename binary_ostream_iterator< T, charT, traits >::self_type&
    binary_ostream_iterator< T, charT, traits >::operator= (const T& value)
    {
        value.write( *myStream );
        
        if ( ! *myStream )
        {
            throw std::runtime_error{ "unable to write to stream" };
        }
        
        return *this;
    }
    
    
    template< class T, class charT, class traits >
    typename binary_ostream_iterator< T, charT, traits >::self_type&
    binary_ostream_iterator< T, charT, traits >::operator* ()
    {
        return *this;
        
    }
    
    
    template< class T, class charT, class traits >
    typename binary_ostream_iterator< T, charT, traits >::self_type&
    binary_ostream_iterator< T, charT, traits >::operator++ ()
    {
        return *this;
    }
    
    
    template< class T, class charT, class traits >
    typename binary_ostream_iterator< T, charT, traits >::self_type&
    binary_ostream_iterator< T, charT, traits >::operator++ (int)
    {
        return *this;
    }
    
    
} // namespace Binary
