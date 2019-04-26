#pragma once

#include "Color.h"
#include "IBitmapIterator.h"
#include <memory>

namespace VG { class Point; }

namespace BitmapGraphics
{
    class ICanvas
    {
    public:
        virtual ~ICanvas() = default;

        virtual void setPixelColor(const VG::Point& location, Color const& color) = 0;
        virtual Color getPixelColor(const VG::Point& location) const = 0;
        virtual int getWidth() const = 0;
        virtual int getHeight() const = 0;
        virtual HBitmapIterator createBitmapIterator() const = 0;
    };

    using HCanvas = std::unique_ptr<ICanvas>;
}
