#pragma once

#include "ICanvas.h"
#include <memory>

namespace VG { class Point; }

namespace BitmapGraphics
{
    class IPen
    {
    public:
        virtual ~IPen() = default;

        virtual void drawPoint(const HCanvas& canvas, const VG::Point& point) = 0;
    };

    using HPen = std::unique_ptr<IPen>;
}
