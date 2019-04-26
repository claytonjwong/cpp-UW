//
//  WindowsBitmapDecoder.hpp
//  EWeek4
//
//  Created by CLAYTON WONG on 8/25/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "IBitmapDecoder.hpp"
#include "IBitmapIterator.hpp"
#include "BitmapIterator.hpp"
#include "WindowsBitmapHeader.hpp"
#include "Bitmap.hpp"
#include <iostream>
#include <sstream>

namespace Codec
{
    class WindowsBitmapDecoder : public IBitmapDecoder
    {
        public:
        
            WindowsBitmapDecoder ( );
        
            virtual ~WindowsBitmapDecoder ( ) = default;
        
            WindowsBitmapDecoder ( const WindowsBitmapDecoder& src ) = delete;
            WindowsBitmapDecoder ( WindowsBitmapDecoder&& src ) = delete;
        
            WindowsBitmapDecoder& operator= ( const WindowsBitmapDecoder& rhs ) = delete;
            WindowsBitmapDecoder& operator= ( WindowsBitmapDecoder&& rhs ) = delete;
        
            virtual HBitmapDecoder clone ( std::istream& inStream ) override;
        
            virtual BitmapGraphics::HBitmapIterator createIterator ( const bool reverse=false ) const override;
        
            virtual const std::string& getMimeType ( ) const noexcept override;
        
            virtual bool isSupported ( const std::string& firstChunkOfBitmap ) const noexcept override;
        
        private:
        
            std::stringstream myStream;
            const std::string myMimeType;
            std::unique_ptr<BitmapGraphics::Bitmap> myBitmap;
    };
    
}  // namespace Codec
