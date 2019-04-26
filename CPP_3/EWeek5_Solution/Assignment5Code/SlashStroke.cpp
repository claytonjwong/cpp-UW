//
//  SlashStroke.cpp
//  Assignment5
//
//  Created by Chris Elderkin on 6/5/13.
//  Copyright (c) 2013 Chris Elderkin. All rights reserved.
//

#include "SlashStroke.h"
#include "SlashPen.h"

namespace BitmapGraphics
{
    SlashStroke::SlashStroke(const int& size, const Color& color)
        : mySize(size),
        myColor(color)
    {
    }

    void SlashStroke::setSize(int size)
    {
        mySize = size;
    }

    int SlashStroke::getSize() const
    {
        return mySize;
    }

    void SlashStroke::setColor(const Color& color)
    {
        myColor = color;
    }

    Color SlashStroke::getColor() const
    {
        return myColor;
    }

    HPen SlashStroke::createPen() const
    {
        return std::make_unique<SlashPen>(getSize(), getColor());
    }
}
