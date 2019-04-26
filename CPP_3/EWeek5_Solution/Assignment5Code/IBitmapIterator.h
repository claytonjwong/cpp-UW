#pragma once

#include <memory>

namespace BitmapGraphics
{
    class Color;
    
    class IBitmapIterator
    {
    public:
        virtual ~IBitmapIterator() = default;

        virtual void nextScanLine() = 0;
        virtual bool isEndOfImage() const = 0;
        virtual void nextPixel() = 0;
        virtual bool isEndOfScanLine() const = 0;
        virtual Color getColor() const = 0;
        
        virtual int getBitmapWidth() const = 0;
        virtual int getBitmapHeight() const = 0;
    };
    
    using HBitmapIterator = std::unique_ptr<IBitmapIterator>;
}