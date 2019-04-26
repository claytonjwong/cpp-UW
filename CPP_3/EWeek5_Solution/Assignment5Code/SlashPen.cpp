//
//  SlashPen.cpp
//  Assignment5
//
//  Created by Chris Elderkin on 6/5/13.
//  Copyright (c) 2013 Chris Elderkin. All rights reserved.
//

#include "SlashPen.h"
#include "Point.h"

// TODO: move this to a collection of common utility functions
namespace
{
    bool inRect(
        const VG::Point& p,
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
    SlashPen::SlashPen(int size, const Color& color) :
        mySize(size),
        myColor(color)
    {
    }

    void SlashPen::drawPoint(const HCanvas& canvas, const VG::Point& point)
    {
        const auto centerPoint = point;

        for (auto i = 0; i < mySize / 2; ++i)
        {
            const auto nextUpperPoint = centerPoint + VG::Point(i, -2 * i);

            if (inRect(nextUpperPoint, 0, 0, canvas->getWidth(), canvas->getHeight()))
            {
                canvas->setPixelColor(nextUpperPoint, myColor);
            }

            const auto nextLowerPoint = centerPoint + VG::Point(-i, 2 * i);

            if (inRect(nextLowerPoint, 0, 0, canvas->getWidth(), canvas->getHeight()))
            {
                canvas->setPixelColor(nextLowerPoint, myColor);
            }
        }
    }
}
