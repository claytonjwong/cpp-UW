#include "TestHarness.h"
#include "Color.h"
#include <vector>
#include <sstream>

using namespace BitmapGraphics;

TEST(createColor, Color)
{
    Color color{ 0xAA_byte, 0xBB_byte, 0xCC_byte };

    CHECK_EQUAL(0xAA_byte, color.getRed());
    CHECK_EQUAL(0xBB_byte, color.getGreen());
    CHECK_EQUAL(0xCC_byte, color.getBlue());
}

TEST(readColor, Color)
{
    unsigned char colorData[]{ 0x23, 0x24, 0x25, 0 };
    std::istringstream colorStream{ reinterpret_cast<char*>(colorData) };

    auto color{ Color::read(colorStream) };

    CHECK_EQUAL(0x23_byte, color.getBlue());
    CHECK_EQUAL(0x24_byte, color.getGreen());
    CHECK_EQUAL(0x25_byte, color.getRed());
}

TEST(readScanLines, Color)
{
    unsigned char colorData[]{
        0xAA, 0xBB, 0xCC, 0x23, 0x24, 0x25,
        0x11, 0x22, 0x33, 0xDD, 0xEE, 0xFF,
        0
    };

    std::istringstream colorStream{ reinterpret_cast<char*>(colorData) };

    using ScanLine = std::vector<Color>;
    using ScanLineContainer = std::vector<ScanLine>;

    const auto Width{ 2 };
    const auto Height{ 2 };

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

    const Color expected{ 0x33_byte, 0x22_byte, 0x11_byte };
    const auto actual{ scanLines[1][0] };

    CHECK_EQUAL(expected, actual);
}