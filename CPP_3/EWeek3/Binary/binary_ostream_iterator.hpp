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
      
      binary_ostream_iterator ( stream_type& stream ) :
      myStream{ &stream }
      {
      }

      self_type& operator= (const T& value)
      {
        value.write( *myStream );
        
        if ( ! *myStream )
        {
            throw std::runtime_error{ "unable to write to stream" };
        }
        
        return *this;
      }

      self_type& operator* () { return *this; }
      self_type& operator++ () { return *this; }
      self_type& operator++ (int) { return *this; }

    private:
    
      stream_type* myStream;

    };
}
