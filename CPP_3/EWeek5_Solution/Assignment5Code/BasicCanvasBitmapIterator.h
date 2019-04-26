#pragma once

#include "IBitmapIterator.h"
#include "ICanvas.h"
#include "Point.h"

namespace BitmapGraphics
{
    class BasicCanvasBitmapIterator : public IBitmapIterator
    {
    public:
        explicit BasicCanvasBitmapIterator(const ICanvas& canvas);

        void nextScanLine() override;
        bool isEndOfImage() const override;
        void nextPixel() override;
        bool isEndOfScanLine() const override;
        Color getColor() const override;

        int getBitmapWidth() const override;
        int getBitmapHeight() const override;
        
    private:
        const ICanvas& myCanvas;
        VG::Point myCurrentPoint;
    };
}