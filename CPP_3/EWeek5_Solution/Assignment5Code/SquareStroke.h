#pragma once

#include "IStroke.h"

namespace BitmapGraphics
{
    class SquareStroke : public IStroke
    {
    public:
        SquareStroke(const int& size, const Color& color);

        void setSize(int size) override;
        int getSize() const override;
        void setColor(const Color& color) override;
        Color getColor() const override;
        HPen createPen() const override;
        
    protected:
        int mySize;
        Color myColor;
    };
}
