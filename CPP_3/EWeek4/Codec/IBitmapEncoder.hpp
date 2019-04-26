//
//  IBitmapEncoder.hpp
//  EWeek4
//
//  Created by CLAYTON WONG on 8/26/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "BitmapIterator.hpp"
#include <iostream>

namespace Codec
{
    class IBitmapEncoder;
    using HBitmapEncoder = std::shared_ptr<IBitmapEncoder>;

    class IBitmapEncoder
    {
    public:
    
        virtual ~IBitmapEncoder ( ) { }
        
        virtual HBitmapEncoder clone ( BitmapGraphics::HBitmapIterator it ) noexcept = 0;
        
        virtual void encodeToStream ( std::ostream& outStream ) const = 0;
    };
}

