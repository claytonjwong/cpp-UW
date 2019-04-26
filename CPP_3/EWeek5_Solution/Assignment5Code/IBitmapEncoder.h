#pragma once

#include "IBitmapIterator.h"
#include <memory>
#include <string>

namespace BitmapGraphics
{
    class IBitmapEncoder;
    
    using HBitmapEncoder = std::unique_ptr<IBitmapEncoder>;
    
    class IBitmapEncoder
    {
    public:
        virtual ~IBitmapEncoder() = default;

        virtual HBitmapEncoder clone(HBitmapIterator bitmapIterator) = 0;
        
        virtual void encodeToStream(std::ostream& os) = 0;
        
        virtual std::string getMimeType() const = 0;
    };
}