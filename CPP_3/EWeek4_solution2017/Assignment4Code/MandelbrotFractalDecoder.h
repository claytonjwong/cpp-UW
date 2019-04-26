//
//  MandelbrotFractalDecoder.h
//  Assignment4
//
//  Created by Chris Elderkin on 9/8/15.
//  Copyright (c) 2015 Chris Elderkin. All rights reserved.
//
#pragma once

#include "IBitmapDecoder.h"

namespace BitmapGraphics
{
    class MandelbrotFractalDecoder : public IBitmapDecoder
    {
    public:
        MandelbrotFractalDecoder();

        HBitmapDecoder clone(std::istream& sourceStream) override;

        HBitmapIterator createIterator() override;

        std::string getMimeType() const override;

        bool isSupported(const std::string& firstChunk) const override;
        
    private:
        explicit MandelbrotFractalDecoder(std::istream& sourceStream);
        
        std::istream& mySourceStream;
    };
}