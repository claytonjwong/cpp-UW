//
//  WindowsBitmapEncoder.hpp
//  EWeek4
//
//  Created by CLAYTON WONG on 8/26/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "IBitmapEncoder.hpp"
#include "IBitmapIterator.hpp"
#include "Byte.hpp"
#include "WindowsBitmapHeader.hpp"
#include <iostream>
#include <sstream>

namespace Codec
{
    class WindowsBitmapEncoder : public IBitmapEncoder
    {
    public:
        
        WindowsBitmapEncoder ( ) = default;
        virtual ~WindowsBitmapEncoder ( ) = default;
        
        WindowsBitmapEncoder ( const WindowsBitmapEncoder& src ) = delete;
        WindowsBitmapEncoder ( WindowsBitmapEncoder&& src ) = delete;
        
        WindowsBitmapEncoder& operator= ( const WindowsBitmapEncoder& rhs ) = delete;
        WindowsBitmapEncoder& operator= ( WindowsBitmapEncoder&& rhs ) = delete;
                
        virtual HBitmapEncoder clone ( BitmapGraphics::HBitmapIterator it ) noexcept;
        
        virtual void encodeToStream ( std::ostream& outStream ) const;
        
    private:
    
        void encodeHeader ( std::ostream& outStream ) const;
        void encodePayload ( std::ostream& outStream ) const;
    
        BitmapGraphics::HBitmapIterator myIt;
    };
}
