#pragma once

#include "IBitmapDecoder.h"
#include "Bitmap.h"

namespace BitmapGraphics
{
    class WindowsBitmapDecoder: public IBitmapDecoder
    {
    public:
        explicit WindowsBitmapDecoder(std::istream& sourceStream);
        
        WindowsBitmapDecoder();

        HBitmapDecoder clone(std::istream& sourceStream) override;

        HBitmapIterator createIterator() override;

        std::string getMimeType() const override;

        bool isSupported(const std::string& firstChunk) const override;
        
    private:
        std::istream& mySourceStream;
        HBitmap myBitmap;
        
        // Decodes mySourceStream into myBitmap
        void decodeIntoBitmap();
    };
}