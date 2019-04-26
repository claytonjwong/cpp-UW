#include "MandelbrotFractalBitmapIterator.h"

namespace BitmapGraphics
{
    MandelbrotFractalBitmapIterator::MandelbrotFractalBitmapIterator(int width, int height) :
        myWidth(static_cast<double>(width)),
        myHeight(static_cast<double>(height)),
        myCurrentX(0),
        myCurrentY(0),
        myMaxIteration(1000)
    {
        for (auto i = 0; i < myMaxIteration; ++i)
        {
            myColorTable.emplace_back(Binary::Byte(rand() % 255), Binary::Byte(rand() % 255), Binary::Byte(rand() % 255));
        }
    }

    void MandelbrotFractalBitmapIterator::nextScanLine()
    {
        ++myCurrentY;
        myCurrentX = 0;
    }

    bool MandelbrotFractalBitmapIterator::isEndOfImage() const
    {
        return myCurrentY > myHeight;
    }

    void MandelbrotFractalBitmapIterator::nextPixel()
    {
        ++myCurrentX;
    }

    bool MandelbrotFractalBitmapIterator::isEndOfScanLine() const
    {
        return myCurrentX == myWidth;
    }

    Color MandelbrotFractalBitmapIterator::getColor() const
    {
        const double currentX = myCurrentX;
        const auto x0 = (currentX / myWidth) * 3.5 + -2.5;

        const double currentY = myCurrentY;
        const auto y0 = (currentY / myHeight) * 2.0 + -1.0;

        double x = 0;
        double y = 0;
        auto iteration = 0;

        while (x * x + y * y <= 2 * 2 && iteration < myMaxIteration)
        {
            const auto xTemp = x * x - y * y + x0;
            y = 2 * x*y + y0;
            x = xTemp;

            iteration++;
        }

        if (iteration != myMaxIteration)
        {
            return myColorTable[iteration];
        }

        return Color(0_byte, 0_byte, 0_byte);
    }

    int MandelbrotFractalBitmapIterator::getBitmapWidth() const
    {
        return static_cast<int>(myWidth);
    }

    int MandelbrotFractalBitmapIterator::getBitmapHeight() const
    {
        return static_cast<int>(myHeight);
    }

}
