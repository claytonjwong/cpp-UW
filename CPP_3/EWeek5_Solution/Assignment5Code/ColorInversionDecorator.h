#pragma once

#include "BitmapIteratorDecorator.h"

namespace BitmapGraphics
{
    class ColorInversionDecorator : public BitmapIteratorDecorator
    {
    public:
        explicit ColorInversionDecorator(HBitmapIterator originalIterator);

        Color getColor() const override;
    };
}