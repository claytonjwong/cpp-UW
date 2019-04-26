#pragma once

#include "IPen.h"
#include "ICanvas.h"
#include "Color.h"

namespace BitmapGraphics
{
    class SquarePen : public IPen
    {
    public:
        SquarePen(int size, const Color& color);
        void drawPoint(const HCanvas& canvas, const VG::Point& point) override;
        
    private:
        int mySize;
        Color myColor;
    };
}
