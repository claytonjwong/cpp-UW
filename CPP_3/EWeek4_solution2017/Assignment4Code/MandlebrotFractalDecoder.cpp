//
//  MandlebrotFractalDecoder.cpp
//  Assignment4
//
//  Created by Chris Elderkin on 9/8/15.
//  Copyright (c) 2015 Chris Elderkin. All rights reserved.
//

#include "MandelbrotFractalDecoder.h"
#include "MandelbrotFractalBitmapIterator.h"
#include <sstream>

namespace
{
    std::istringstream nullStream{};
    const std::string MandelbrotIdentifier = "mandelbrot";
}

namespace BitmapGraphics
{

    // This constructor is used to create the prototype.
    // Initialize mySourceStream to an empty stringstream,
    // and set its state to "bad".
    // If a client attempts to use a decoder with bad stream,
    // we'll throw an exception.
    //
    MandelbrotFractalDecoder::MandelbrotFractalDecoder()
        : mySourceStream{ nullStream }
    {
        mySourceStream.setstate(std::ios::badbit);
    }

    MandelbrotFractalDecoder::MandelbrotFractalDecoder(std::istream& sourceStream)
        : mySourceStream{ sourceStream }
    {
    }

    HBitmapDecoder MandelbrotFractalDecoder::clone(std::istream& sourceStream)
    {
        return HBitmapDecoder{ new MandelbrotFractalDecoder{sourceStream} };
    }

    HBitmapIterator MandelbrotFractalDecoder::createIterator()
    {
        if (mySourceStream.bad())
        {
            throw std::runtime_error{ "Invalid decoder: bad source stream" };
        }

        std::string identifier;
        mySourceStream >> identifier;
        if (identifier != MandelbrotIdentifier)
        {
            throw std::runtime_error("Stream identifier not for mandelbrot");
        }

        int width;
        mySourceStream >> width;
        if (width <= 0)
        {
            throw std::runtime_error("Mandelbrot width must be > 0");
        }

        int height;
        mySourceStream >> height;
        if (height <= 0)
        {
            throw std::runtime_error("Mandelbrot height must be > 0");
        }

        return std::make_unique<MandelbrotFractalBitmapIterator>(width, height);
    }


    std::string MandelbrotFractalDecoder::getMimeType() const
    {
        return MandelbrotIdentifier;
    }

    bool MandelbrotFractalDecoder::isSupported(const std::string& firstChunk) const
    {
        const auto pos = firstChunk.find(MandelbrotIdentifier);

        return pos == 0;
    }


}