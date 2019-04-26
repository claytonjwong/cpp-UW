#pragma once

#include "ICanvas.h"
#include "IPen.h"

namespace BitmapGraphics
{
    class Color;

    class IStroke
    {
    public:
        virtual ~IStroke() = default;

        virtual void setSize(int size) = 0;
        virtual int getSize() const = 0;
        virtual void setColor(const Color& color) = 0;
        virtual Color getColor() const = 0;
        virtual HPen createPen() const = 0;
    };

    using HStroke = std::unique_ptr<IStroke>;
}
