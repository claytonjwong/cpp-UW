#pragma once

#include "IBitmapIterator.h"
#include "Color.h"
#include <list>

namespace BitmapGraphics
{
    class Bitmap
    {
    public:
        using ScanLine = std::list<Color>;
        using PixelIterator = ScanLine::iterator;
        
    private:
        using ScanLineCollection = std::list<ScanLine>;
        
    public:
        using ScanLineIterator = ScanLineCollection::iterator;
        
        // Construct empty bitmap -- will be filled by decoder
		Bitmap() = default;
        Bitmap(int width, int height) : myWidth{width}, myHeight{height} { }
        
		Bitmap(const Bitmap&) = default;
		Bitmap(Bitmap&&) = default;

		Bitmap& operator=(const Bitmap&) = default;
		Bitmap& operator=(Bitmap&&) = default;

        void addScanLine(const ScanLine& scanLine);

		template<class SL> void addScanLine(SL&& scanLine)
		{
			myScanLines.push_back(std::forward<SL>(scanLine));
		}

        ScanLineIterator begin();
        ScanLineIterator end();
        
        int getWidth() const { return myWidth; }
        int getHeight() const { return myHeight; }
        
        HBitmapIterator createIterator();
        
    private:
		int myWidth{ 0 };
        int myHeight{ 0 };
        
        ScanLineCollection myScanLines;
    };
    
    using HBitmap = std::unique_ptr<Bitmap>;
}
