//
//  ColorTest.cpp
//  Week6
//
//  Created by Chris Elderkin on 5/6/14.
//  Copyright (c) 2014 Chris Elderkin. All rights reserved.
//

#include "TestHarness.h"
#include "Color.h"
#include <vector>
#include <sstream>

using namespace BitmapGraphics;

TEST(createColor, Color)
{
    Color color{0xAA, 0xBB, 0xCC};
    
    CHECK_EQUAL(0xAA, color.getRed());
    CHECK_EQUAL(0xBB, color.getGreen());
    CHECK_EQUAL(0xCC, color.getBlue());
}

TEST(readColor, Color)
{
    unsigned char colorData[]{ 0x23, 0x24, 0x25, 0 };
    std::istringstream colorStream{reinterpret_cast<char*>(colorData)};
    
    Color color{Color::read(colorStream)};
    
    CHECK_EQUAL(0x23, color.getBlue());
    CHECK_EQUAL(0x24, color.getGreen());
    CHECK_EQUAL(0x25, color.getRed());
}

TEST(readScanLines, Color)
{
    unsigned char colorData[]{
        0xAA, 0xBB, 0xCC, 0x23, 0x24, 0x25,
        0x11, 0x22, 0x33, 0xDD, 0xEE, 0xFF,
        0
    };
    std::istringstream colorStream{reinterpret_cast<char*>(colorData)};
    
    typedef std::vector<Color> ScanLine;
    typedef std::vector<ScanLine> ScanLineContainer;
    
    const int Width{2};
    const int Height{2};
    
    ScanLineContainer scanLines;
    
    for (auto row = 0; row < Height; ++row)
    {
        ScanLine scanLine;
        
        for (auto column = 0; column < Width; ++column)
        {
            scanLine.push_back(Color::read(colorStream));
        }
        
        scanLines.push_back(scanLine);
    }
    
    const Color expected{ 0x33, 0x22, 0x11 };
    Color actual{ scanLines[1][0] };

    CHECK_EQUAL(expected, actual);
}
