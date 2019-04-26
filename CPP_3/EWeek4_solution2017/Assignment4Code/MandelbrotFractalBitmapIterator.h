#pragma once

#include "IBitmapIterator.h"
#include "Color.h"
#include <vector>

namespace BitmapGraphics
{
    class MandelbrotFractalBitmapIterator: public IBitmapIterator
    {
    public:
        MandelbrotFractalBitmapIterator(int width, int height);

        void nextScanLine() override;
        bool isEndOfImage() const override;
        void nextPixel() override;
        bool isEndOfScanLine() const override;
        Color getColor() const override;
        int getBitmapWidth() const override;
        int getBitmapHeight() const override;
        
    private:
        double myWidth;
        double myHeight;
        
        mutable int myCurrentX;
        mutable int myCurrentY;
        
        std::vector<Color> myColorTable;
        int myMaxIteration;
    };
}
