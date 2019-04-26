//
//  SlashStroke.h
//  Assignment5
//
//  Created by Chris Elderkin on 6/5/13.
//  Copyright (c) 2013 Chris Elderkin. All rights reserved.
//
#pragma once

#include "IStroke.h"

namespace BitmapGraphics
{
    class SlashStroke : public IStroke
    {
    public:
        SlashStroke(const int& size, const Color& color);

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
