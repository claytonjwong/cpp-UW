#pragma once

#include "IBitmapIterator.h"
#include "Color.h"
#include <list>
#include <memory>

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
        Bitmap(int width, int height) : myWidth{width}, myHeight{height} { }
        
        void addScanLine(const ScanLine& scanLine);
        
        ScanLineIterator begin();
        ScanLineIterator end();
        
        int getWidth() const { return myWidth; }
        int getHeight() const { return myHeight; }
        
        HBitmapIterator createIterator();
        
    private:
        int myWidth = 0;
        int myHeight = 0;
        
        ScanLineCollection myScanLines;
    };
    
    using HBitmap = std::unique_ptr<Bitmap>;
}
