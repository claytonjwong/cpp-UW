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
	Color color{ Binary::Byte(0xAA), Binary::Byte(0xBB), Binary::Byte(0xCC) };

	CHECK_EQUAL(Binary::Byte(0xAA), color.getRed());
	CHECK_EQUAL(Binary::Byte(0xBB), color.getGreen());
	CHECK_EQUAL(Binary::Byte(0xCC), color.getBlue());
}

TEST(readColor, Color)
{
	unsigned char colorData[]{ 0x23, 0x24, 0x25, 0 };
	std::istringstream colorStream{ reinterpret_cast<char*>(colorData) };

	auto color{ Color::read(colorStream) };

	CHECK_EQUAL(Binary::Byte(0x23), color.getBlue());
	CHECK_EQUAL(Binary::Byte(0x24), color.getGreen());
	CHECK_EQUAL(Binary::Byte(0x25), color.getRed());
}

TEST(readScanLines, Color)
{
	unsigned char colorData[]
	{
		0xAA, 0xBB, 0xCC, 0x23, 0x24, 0x25,
		0x11, 0x22, 0x33, 0xDD, 0xEE, 0xFF,
		0
	};

	std::istringstream colorStream{ reinterpret_cast<char*>(colorData) };

	using ScanLine = std::vector<Color>;
	using ScanLineContainer = std::vector<ScanLine>;

	const auto width{ 2 };
	const auto height{ 2 };

	ScanLineContainer scanLines;

	for (auto row = 0; row < height; ++row)
	{
		ScanLine scanLine;

		for (auto column = 0; column < width; ++column)
		{
			scanLine.push_back(Color::read(colorStream));
		}

		scanLines.push_back(std::move(scanLine));
	}

	const Color expected{ Binary::Byte(0x33), Binary::Byte(0x22), Binary::Byte(0x11) };
	const auto actual{ scanLines[1][0] };

	CHECK_EQUAL(expected, actual);
}