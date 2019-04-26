#include "BasicCanvasBitmapIterator.h"

namespace BitmapGraphics
{
    BasicCanvasBitmapIterator::BasicCanvasBitmapIterator(const ICanvas& canvas) :
        myCanvas(canvas),
        myCurrentPoint(VG::Point(0, 0))
    {
    }

    void BasicCanvasBitmapIterator::nextScanLine()
    {
        myCurrentPoint = VG::Point(0, myCurrentPoint.getY() + 1);
    }

    bool BasicCanvasBitmapIterator::isEndOfImage() const
    {
        return myCurrentPoint.getY() >= getBitmapHeight();
    }

    void BasicCanvasBitmapIterator::nextPixel()
    {
        myCurrentPoint += VG::Point(1, 0);
    }

    bool BasicCanvasBitmapIterator::isEndOfScanLine() const
    {
        return myCurrentPoint.getX() >= getBitmapWidth();
    }

    Color BasicCanvasBitmapIterator::getColor() const
    {
        return myCanvas.getPixelColor(myCurrentPoint);
    }

    int BasicCanvasBitmapIterator::getBitmapWidth() const
    {
        return myCanvas.getWidth();
    }

    int BasicCanvasBitmapIterator::getBitmapHeight() const
    {
        return myCanvas.getHeight();
    }
}
