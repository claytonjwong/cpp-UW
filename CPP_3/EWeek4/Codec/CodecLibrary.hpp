//
//  CodecLibrary.hpp
//  EWeek4
//
//  Created by CLAYTON WONG on 8/31/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "IBitmapEncoder.hpp"
#include "IBitmapDecoder.hpp"
#include <unordered_set>
#include <string>

namespace Codec
{
    static constexpr int FIRST_CHUNK_SIZE = 100; // used to determine if the stream is supported
                                                 // by looking at the first chunk of the bitmap header

    struct MimeType
    {
        static constexpr std::string_view WINDOWS_BITMAP = "image/x-ms-bmp";
    };

    class CodecLibrary
    {
    public:
        
        CodecLibrary ( );
        
        CodecLibrary ( const CodecLibrary& src ) = default;
        CodecLibrary ( CodecLibrary&& src ) = default;
        
        CodecLibrary& operator= ( const CodecLibrary& rhs ) = default;
        CodecLibrary& operator= ( CodecLibrary&& rhs ) = default;
        
        void registerEncoder ( const HBitmapEncoder& encoder ) noexcept;
        void registerDecoder ( const HBitmapDecoder& decoder ) noexcept;
        
        HBitmapEncoder createEncoder ( const std::string& mimeType, const BitmapGraphics::HBitmapIterator& iter );
        HBitmapDecoder createDecoder ( std::istream& inStream );
        HBitmapDecoder createDecoder ( const std::string& mimeType, std::istream& inStream );
        
        
    private:
    
        HBitmapEncoder myEncoder;
        HBitmapDecoder myDecoder;
        std::unordered_set<std::string_view> mySupportedMimeTypes;
    };
}
