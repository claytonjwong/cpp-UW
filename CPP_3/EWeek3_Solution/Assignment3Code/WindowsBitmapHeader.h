#pragma once

#include "SizedWord.h"

namespace BitmapGraphics
{
    class WindowsBitmapHeader
    {
    public:
        WindowsBitmapHeader() = default;
        explicit WindowsBitmapHeader(std::istream& sourceStream);

		WindowsBitmapHeader(const WindowsBitmapHeader&) = default;
		WindowsBitmapHeader(WindowsBitmapHeader&&) = default;

		WindowsBitmapHeader& operator=(const WindowsBitmapHeader&) = default;
		WindowsBitmapHeader& operator=(WindowsBitmapHeader&&) = default;
        
		~WindowsBitmapHeader() noexcept = default;

        void readFileHeader(std::istream& sourceStream);
        void writeFileHeader(std::ostream& destinationStream) const;
        
        void readInfoHeader(std::istream& sourceStream);
        void writeInfoHeader(std::ostream& destinationStream) const;
        
        void read(std::istream& sourceStream);
        void write(std::ostream& destinationStream) const;
        
        Binary::DoubleWord::data_type getFileSize() const noexcept { return static_cast<uint32_t>(fileSize); }
		Binary::DoubleWord::data_type getBitmapWidth() const noexcept { return static_cast<uint32_t>(bitmapWidth); }
		Binary::DoubleWord::data_type getBitmapHeight() const noexcept { return static_cast<uint32_t>(bitmapHeight); }
        
    private:
        // file header
        const static Binary::Byte firstIdentifier;
        const static Binary::Byte secondIdentifier;
        Binary::DoubleWord fileSize;
        const static Binary::DoubleWord reserved;
        const static Binary::DoubleWord rawImageByteOffset;
        
        // info header
        const static Binary::DoubleWord infoHeaderBytes;
        Binary::DoubleWord bitmapWidth;
        Binary::DoubleWord bitmapHeight;
        const static Binary::Word numberOfPlanes;
        const static Binary::Word bitsPerPixel;
        const static Binary::DoubleWord compressionType;
        const static Binary::DoubleWord compressedImageSize;
        const static Binary::DoubleWord horizontalPixelsPerMeter;
        const static Binary::DoubleWord verticalPixelsPerMeter;
        const static Binary::DoubleWord numberOfColors;
        const static Binary::DoubleWord numberOfImportantColors;
    };
}