#pragma once

#include "IBitmapIterator.h"
#include <memory>
#include <string>

namespace BitmapGraphics
{
    class IBitmapDecoder;
    using HBitmapDecoder = std::unique_ptr<IBitmapDecoder>;
    
    class IBitmapDecoder
    {
    public:
        virtual ~IBitmapDecoder() = default;

        virtual HBitmapDecoder clone(std::istream& sourceStream) = 0;
        
        virtual HBitmapIterator createIterator() = 0;
        
        virtual std::string getMimeType() const = 0;
        
        virtual bool isSupported(const std::string& firstChunk) const = 0;
    };
}