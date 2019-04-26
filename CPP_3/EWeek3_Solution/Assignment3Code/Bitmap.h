#pragma once

#include "Color.h"
#include <list>

namespace BitmapGraphics
{
    class Bitmap
    {
    public:
        using ScanLine = std::list<Color>;
        
    private:
        using ScanLineCollection = std::list<ScanLine>;
        
    public:
        using ScanLineIterator = ScanLineCollection::const_iterator;
        
		Bitmap() = delete;
        // Construct Bitmap from current location in sourceStream -- calls read()
        Bitmap(uint32_t width, uint32_t height, std::istream& sourceStream);

		Bitmap(const Bitmap&) noexcept = default;
		Bitmap(Bitmap&&) noexcept = default;

		Bitmap& operator=(const Bitmap&) = default;
		Bitmap& operator=(Bitmap&&) = default;
        
		~Bitmap() noexcept = default;

        ScanLineIterator begin() noexcept { return myScanLines.cbegin(); }
        ScanLineIterator end() noexcept { return myScanLines.cend(); }
        
        int getWidth() const noexcept { return myWidth; }
        int getHeight() const noexcept { return myHeight; }
        int getNumberOfPadBytes() const;
        
        void read(std::istream& sourceStream);
        void write(std::ostream& destinationStream) const;
        
    private:
		uint32_t myWidth{ 0 };
		uint32_t myHeight{ 0 };
        
        ScanLineCollection myScanLines;
    };
}