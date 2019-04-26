#include "SquarePen.h"
#include "Point.h"


// TODO: move this to a collection of common utility functions
namespace
{
    bool inRect(const VG::Point& p,
        int left,
        int upper,
        int right,
        int lower)
    {
        if (p.getX() < left || p.getX() >= right)
        {
            return false;
        }

        if (p.getY() < upper || p.getY() >= lower)
        {
            return false;
        }

        return true;
    }
}

namespace BitmapGraphics
{
    SquarePen::SquarePen(int size, const Color& color) :
        mySize(size),
        myColor(color)
    {
    }

    void SquarePen::drawPoint(const HCanvas& canvas, const VG::Point& point)
    {
        const VG::Point upperLeft(point.getX() - (mySize / 2), point.getY() - (mySize / 2));

        for (auto i = 0; i < mySize; ++i)
        {
            auto p = upperLeft + VG::Point(0, i);

            for (auto j = 0; j < mySize; ++j)
            {
                p += VG::Point(1, 0);

                if (inRect(p, 0, 0, canvas->getWidth(), canvas->getHeight()))
                {
                    canvas->setPixelColor(p, myColor);
                }
            }
        }
    }
}