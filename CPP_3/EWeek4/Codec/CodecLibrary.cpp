//
//  CodecLibrary.cpp
//  EWeek4
//
//  Created by CLAYTON WONG on 8/31/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "CodecLibrary.hpp"

namespace Codec
{
    static const std::unordered_set<std::string_view> SUPPORTED {
        MimeType::WINDOWS_BITMAP
    };
    
    CodecLibrary::CodecLibrary ( ) :
    mySupportedMimeTypes{ MimeType::WINDOWS_BITMAP }
    {
    }
    
    void CodecLibrary::registerEncoder ( const HBitmapEncoder& encoder ) noexcept
    {
        myEncoder = encoder; // TODO: determine how to register multiple encoders
    }

    void CodecLibrary::registerDecoder ( const HBitmapDecoder& decoder ) noexcept
    {
        myDecoder = decoder; // TODO: determine how to register multiple decoders
    }

    HBitmapEncoder CodecLibrary::createEncoder ( const std::string& mimeType, const BitmapGraphics::HBitmapIterator& iter )
    {
        if ( mySupportedMimeTypes.find( mimeType ) == mySupportedMimeTypes.end() )
        {
            throw std::runtime_error{ "unsupported mimeType" };
        }
        
        return myEncoder->clone( iter );
    }
    
    HBitmapDecoder CodecLibrary::createDecoder ( std::istream& inStream )
    {
        return myDecoder->clone( inStream );
    }
    
    HBitmapDecoder CodecLibrary::createDecoder ( const std::string& mimeType, std::istream& inStream )
    {
        if ( mySupportedMimeTypes.find( mimeType ) == mySupportedMimeTypes.end() )
        {
            throw std::runtime_error{ "unsupported mimeType" };
        }
        
        return myDecoder->clone( inStream );
    }
}
