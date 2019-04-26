#pragma once

#include "ICanvas.h"
#include "Point.h"
#include "Color.h"
#include <map>

namespace BitmapGraphics
{
    class BasicCanvas : public ICanvas
    {
        using PixelMap = std::map<VG::Point, Color>;
        
    public:
        BasicCanvas(int width, int height, const Color& backgroundColor = Color(0_byte, 0_byte, 0_byte));

        void setPixelColor(const VG::Point& location, const Color& color) override;
        Color getPixelColor(const VG::Point& location) const override;
        int getWidth() const override;
        int getHeight() const override;
        HBitmapIterator createBitmapIterator() const override;
        
    private:
        int myWidth;
        int myHeight;
        Color myBackgroundColor;
        PixelMap myPixelMap;
        
        bool outOfRange(const VG::Point& point) const;
    };
}
