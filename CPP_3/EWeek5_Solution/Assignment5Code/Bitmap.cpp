#include "Bitmap.h"
#include "BitmapIterator.h"

namespace BitmapGraphics
{
    Bitmap::ScanLineIterator Bitmap::begin()
    {
        return myScanLines.begin();
    }

    Bitmap::ScanLineIterator Bitmap::end()
    {
        return myScanLines.end();
    }

    void Bitmap::addScanLine(const ScanLine &scanLine)
    {
        myScanLines.push_back(scanLine);
    }

    HBitmapIterator Bitmap::createIterator()
    {
        return std::make_unique<BitmapIterator>(*this);
    }
}