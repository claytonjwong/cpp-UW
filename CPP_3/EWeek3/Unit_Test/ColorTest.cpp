
//
//  ColorTest.cpp
//  Week6
//
//  Created by Chris Elderkin on 5/6/14.
//  Copyright (c) 2014 Chris Elderkin. All rights reserved.
//

#include "TestHarness.h"
#include "Color.hpp"
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;
using namespace BitmapGraphics;

TEST(createColor, Color)
{
    int r=0xAA, g=0xBB, b=0xCC;
    Color color{ r, g, b };
    
    CHECK_EQUAL(r, color.getRed());
    CHECK_EQUAL(g, color.getGreen());
    CHECK_EQUAL(b, color.getBlue());

}

TEST(createColor2, Color)
{
    char r=0x01, g=0x02, b=0x03;
    Color color{ r, g, b };
    
    CHECK_EQUAL(r, color.getRed());
    CHECK_EQUAL(g, color.getGreen());
    CHECK_EQUAL(b, color.getBlue());

}

TEST(createColor3, Color)
{
    long r=0x69, g=0x69, b=0x69;
    Color color{ r, g, b };
    
    CHECK_EQUAL(r, color.getRed());
    CHECK_EQUAL(g, color.getGreen());
    CHECK_EQUAL(b, color.getBlue());

}

TEST(createColor4, Color)
{
    Color color(0x69, 0x69, 0x69);
    
    CHECK_EQUAL(0x69, color.getRed());
    CHECK_EQUAL(0x69, color.getGreen());
    CHECK_EQUAL(0x69, color.getBlue());

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

TEST(readColor2, Color)
{
    unsigned char colorData[]{ 0x1F, 0x2F, 0x3F, 0 };
    std::istringstream colorStream{reinterpret_cast<char*>(colorData)};
    
    Color color{Color::read(colorStream)};
    
    CHECK_EQUAL(0x1F, color.getBlue());
    CHECK_EQUAL(0x2F, color.getGreen());
    CHECK_EQUAL(0x3F, color.getRed());
}

TEST(readColor3, Color)
{
    unsigned char colorData[]{ 0x01, 0x02, 0x03, 0 };
    std::istringstream colorStream{reinterpret_cast<char*>(colorData)};
    
    Color color{Color::read(colorStream)};
    
    CHECK_EQUAL(0x01, color.getBlue());
    CHECK_EQUAL(0x02, color.getGreen());
    CHECK_EQUAL(0x03, color.getRed());
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


TEST(readScanLines2, Color)
{
    unsigned char colorData[]{
        0xAA, 0xBB, 0xCC, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28,
        0x11, 0x22, 0x33, 0xDD, 0xEE, 0xFF, 0x1F, 0x2F, 0x3F,
        0, 0, 0
    };
    std::istringstream colorStream{reinterpret_cast<char*>(colorData)};
    
    typedef std::vector<Color> ScanLine;
    typedef std::vector<ScanLine> ScanLineContainer;
    
    const int Width{3};
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
