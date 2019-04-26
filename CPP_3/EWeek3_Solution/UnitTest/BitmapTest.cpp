#include "TestHarness.h"
#include "Bitmap.h"
#include "WindowsBitmapHeader.h"
#include "binary_ostream_iterator.h"
#include <fstream>

using namespace BitmapGraphics;

TEST(BitmapSizeTest, Bitmap)
{
	std::ifstream bitmapStream{ "..\\UnitTest\\basic.bmp", std::ios::binary };
	CHECK(bitmapStream.is_open());

	WindowsBitmapHeader bitmapHeader{ bitmapStream };
	Bitmap bitmap{ bitmapHeader.getBitmapWidth(), bitmapHeader.getBitmapHeight(), bitmapStream };

	CHECK_EQUAL(100, bitmap.getWidth());
	CHECK_EQUAL(100, bitmap.getHeight());
}

TEST(BitmapScanLinesTest, Bitmap)
{
	std::ifstream bitmapStream{ "..\\UnitTest\\basic.bmp", std::ios::binary };
	CHECK(bitmapStream.is_open());

	WindowsBitmapHeader bitmapHeader{ bitmapStream };
	Bitmap bitmap{ bitmapHeader.getBitmapWidth(), bitmapHeader.getBitmapHeight(), bitmapStream };

	// Before C++11 the loop below looked like this:
	//    for (Bitmap::ScanLineIterator scanLine = bitmap.begin(); scanLine != bitmap.end(); ++scanLine)

	auto numberOfScanLines{ 0 };
	for (const auto& scanLine : bitmap)
	{
		CHECK_EQUAL(100, scanLine.size());
		++numberOfScanLines;
	}

	CHECK_EQUAL(100, numberOfScanLines);
}

TEST(BitmapReadWrite, Bitmap)
{
	// Read in the bitmap

	std::ifstream bitmapStream{ "..\\UnitTest\\basic.bmp", std::ios::binary };
	CHECK(bitmapStream.is_open());

	WindowsBitmapHeader bitmapHeader{ bitmapStream };

	Bitmap bitmap{ bitmapHeader.getBitmapWidth(), bitmapHeader.getBitmapHeight(), bitmapStream };

	// Write out the bitmap to a different file with its write() method
	{
		std::ofstream outputStream{ "..\\UnitTest\\output.bmp", std::ios::binary };
		CHECK(outputStream.is_open());

		bitmapHeader.write(outputStream);
		bitmap.write(outputStream);
	}//outputstream goes out of scope and closes the file.
	// Read that one back in and check sizes

	std::ifstream bitmapStream2{ "..\\UnitTest\\output.bmp", std::ios::binary };
	CHECK(bitmapStream2.is_open());

	WindowsBitmapHeader bitmapHeader2{ bitmapStream2 };
	Bitmap bitmap2{ bitmapHeader2.getBitmapWidth(), bitmapHeader2.getBitmapHeight(), bitmapStream2 };

	auto numberOfScanLines{ 0 };
	for (const auto& scanLine : bitmap2)
	{
		CHECK_EQUAL(100, scanLine.size());
		++numberOfScanLines;
	}

	CHECK_EQUAL(100, numberOfScanLines);
}

TEST(BinaryOstreamIterator, Bitmap)
{
	// Read in the bitmap

	std::ifstream bitmapStream{ "..\\UnitTest\\basic.bmp", std::ios::binary };
	CHECK(bitmapStream.is_open());

	WindowsBitmapHeader bitmapHeader{ bitmapStream };
	Bitmap bitmap{ bitmapHeader.getBitmapWidth(), bitmapHeader.getBitmapHeight(), bitmapStream };

	// Write out the bitmap to a different file with the binary_ostream_iterator
	{
		std::ofstream outputStream{ "..\\UnitTest\\output2.bmp", std::ios::binary };
		CHECK(outputStream.is_open());

		bitmapHeader.write(outputStream);

		for (const auto& scanLine : bitmap)
		{
			std::copy(scanLine.begin(), scanLine.end(), binary_ostream_iterator<Color>(outputStream));
		}
	}

	// Read that one back in and check sizes
	std::ifstream bitmapStream2{ "..\\UnitTest\\output2.bmp", std::ios::binary };
	CHECK(bitmapStream2.is_open());

	WindowsBitmapHeader bitmapHeader2{ bitmapStream2 };
	Bitmap bitmap2{ bitmapHeader2.getBitmapWidth(), bitmapHeader2.getBitmapHeight(), bitmapStream2 };

	auto numberOfScanLines{ 0 };
	for (const auto& scanLine : bitmap2)
	{
		CHECK_EQUAL(100, scanLine.size());
		++numberOfScanLines;
	}
	CHECK_EQUAL(100, numberOfScanLines);
}

// --- Repeat the tests with a bitmap that requires pad bytes (101x101)

TEST(BitmapSizeTest_101, Bitmap)
{
	std::ifstream bitmapStream{ "..\\UnitTest\\basic_101.bmp", std::ios::binary };
	CHECK(bitmapStream.is_open());

	WindowsBitmapHeader bitmapHeader{ bitmapStream };
	Bitmap bitmap{ bitmapHeader.getBitmapWidth(), bitmapHeader.getBitmapHeight(), bitmapStream };

	CHECK_EQUAL(101, bitmap.getWidth());
	CHECK_EQUAL(101, bitmap.getHeight());
}

TEST(BitmapScanLinesTest_101, Bitmap)
{
	std::ifstream bitmapStream{ "..\\UnitTest\\basic_101.bmp", std::ios::binary };
	CHECK(bitmapStream.is_open());

	WindowsBitmapHeader bitmapHeader{ bitmapStream };
	Bitmap bitmap{ bitmapHeader.getBitmapWidth(), bitmapHeader.getBitmapHeight(), bitmapStream };

	auto numberOfScanLines{ 0 };
	for (const auto& scanLine : bitmap)
	{
		CHECK_EQUAL(101, scanLine.size());
		++numberOfScanLines;
	}

	CHECK_EQUAL(101, numberOfScanLines);
}

TEST(BitmapReadWrite_101, Bitmap)
{
	// Read in the bitmap

	std::ifstream bitmapStream{ "..\\UnitTest\\basic_101.bmp", std::ios::binary };
	CHECK(bitmapStream.is_open());

	WindowsBitmapHeader bitmapHeader{ bitmapStream };
	Bitmap bitmap{ bitmapHeader.getBitmapWidth(), bitmapHeader.getBitmapHeight(), bitmapStream };

	// Write out the bitmap to a different file with its write() method
	{
		std::ofstream outputStream{ "..\\UnitTest\\output_101.bmp", std::ios::binary };
		CHECK(outputStream.is_open());

		bitmapHeader.write(outputStream);
		bitmap.write(outputStream);
	}

	// Read that one back in and check sizes

	std::ifstream bitmapStream2{ "..\\UnitTest\\output_101.bmp", std::ios::binary };
	CHECK(bitmapStream2.is_open());

	WindowsBitmapHeader bitmapHeader2{ bitmapStream2 };
	Bitmap bitmap2{ bitmapHeader2.getBitmapWidth(), bitmapHeader2.getBitmapHeight(), bitmapStream2 };

	auto numberOfScanLines{ 0 };
	for (const auto& scanLine : bitmap2)
	{
		CHECK_EQUAL(101, scanLine.size());
		++numberOfScanLines;
	}

	CHECK_EQUAL(101, numberOfScanLines);
}

TEST(BinaryOstreamIterator_101, Bitmap)
{
	// Read in the bitmap

	std::ifstream bitmapStream{ "..\\UnitTest\\basic_101.bmp", std::ios::binary };
	CHECK(bitmapStream.is_open());

	WindowsBitmapHeader bitmapHeader{ bitmapStream };
	Bitmap bitmap{ bitmapHeader.getBitmapWidth(), bitmapHeader.getBitmapHeight(), bitmapStream };

	// Write out the bitmap to a different file with the binary_ostream_iterator
	{
		std::ofstream outputStream{ "..\\UnitTest\\output2_101.bmp", std::ios::binary };
		CHECK(outputStream.is_open());

		bitmapHeader.write(outputStream);

		for (const auto& scanLine : bitmap)
		{
			std::copy(scanLine.begin(), scanLine.end(), binary_ostream_iterator<Color>(outputStream));

			// Write pad bytes
			for (auto pad = 0; pad < bitmap.getNumberOfPadBytes(); ++pad)
			{
				Binary::Byte(0).write(outputStream);
			}
		}

	}

	// Read that one back in and check sizes

	std::ifstream bitmapStream2{ "..\\UnitTest\\output2_101.bmp", std::ios::binary };
	CHECK(bitmapStream2.is_open());

	WindowsBitmapHeader bitmapHeader2{ bitmapStream2 };
	Bitmap bitmap2{ bitmapHeader2.getBitmapWidth(), bitmapHeader2.getBitmapHeight(), bitmapStream2 };

	auto numberOfScanLines{ 0 };
	for (const auto& scanLine : bitmap2)
	{
		CHECK_EQUAL(101, scanLine.size());
		++numberOfScanLines;
	}

	CHECK_EQUAL(101, numberOfScanLines);
}
