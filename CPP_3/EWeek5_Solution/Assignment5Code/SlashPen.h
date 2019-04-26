//
//  SlashPen.h
//  Assignment5
//
//  Created by Chris Elderkin on 6/5/13.
//  Copyright (c) 2013 Chris Elderkin. All rights reserved.
//
#pragma once

#include "IPen.h"
#include "ICanvas.h"
#include "Color.h"

namespace BitmapGraphics
{
    class SlashPen : public IPen
    {
    public:
        SlashPen(int size, const Color& color);
        void drawPoint(const HCanvas& canvas, const VG::Point& point) override;
        
    private:
        int mySize;
        Color myColor;
    };
}
