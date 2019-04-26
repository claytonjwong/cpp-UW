//
//  binary_ostream_iterator.hpp
//  EWeek3
//
//  Created by CLAYTON WONG on 8/13/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

namespace Binary
{
    template< class T, class charT = char, class traits = std::char_traits<charT> >
    class binary_ostream_iterator
    {
    public:

        using stream_type = std::basic_ostream< charT, traits >;
        using self_type = binary_ostream_iterator< T, charT, traits >;

        binary_ostream_iterator ( stream_type& stream );

        self_type& operator= (const T& value);
        self_type& operator* ();
        self_type& operator++ ();
        self_type& operator++ (int);

    private:

        stream_type* myStream;

    };
    
} // namespace Binary

#include "binary_ostream_iterator_impl.hpp"

