#pragma once

#include "ICanvas.h"

namespace BitmapGraphics
{
    class IProjector
    {
    public:
        virtual ~IProjector() = default;
        virtual void projectCanvas(const HCanvas& canvas) = 0;
    };
}