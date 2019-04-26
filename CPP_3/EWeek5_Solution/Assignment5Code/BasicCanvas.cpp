#include "BasicCanvas.h"
#include "BasicCanvasBitmapIterator.h"

namespace BitmapGraphics
{
    BasicCanvas::BasicCanvas(int width, int height, const Color& backgroundColor)
        : myWidth(width),
        myHeight(height),
        myBackgroundColor(backgroundColor)
    {
    }

    void BasicCanvas::setPixelColor(
        const VG::Point& location,
        const Color& color)
    {
        if (outOfRange(location))
        {
            throw std::runtime_error("Pixel location out of range");
        }

        myPixelMap[location] = color;
    }

    Color BasicCanvas::getPixelColor(const VG::Point& location) const
    {
        if (outOfRange(location))
        {
            throw std::runtime_error("Pixel location out of range");
        }

        const auto pos = myPixelMap.find(location);

        if (pos == myPixelMap.end())
        {
            return myBackgroundColor;
        }

        return pos->second;
    }

    int BasicCanvas::getWidth() const
    {
        return myWidth;
    }

    int BasicCanvas::getHeight() const
    {
        return myHeight;
    }

    HBitmapIterator BasicCanvas::createBitmapIterator() const
    {
        return std::make_unique<BasicCanvasBitmapIterator>(*this);
    }

    bool BasicCanvas::outOfRange(const VG::Point& point) const
    {
        if (point.getX() < 0 || point.getX() >= myWidth)
        {
            return true;
        }

        if (point.getY() < 0 || point.getY() >= myHeight)
        {
            return true;
        }

        return false;
    }
}
