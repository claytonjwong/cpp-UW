#include "TestHarness.h"
#include "Bitmap.h"
#include "MandelbrotFractalBitmapIterator.h"
#include "WindowsBitmapDecoder.h"
#include "WindowsBitmapEncoder.h"
#include "BitmapIterator.h"
#include "binary_ostream_iterator.h"
#include <fstream>

using namespace BitmapGraphics;

TEST(createDecoder, WindowsBitmapDecoder)
{
    std::ifstream bitmapStream{"..\\UnitTest\\basic.bmp", std::ios::binary};
    CHECK(bitmapStream.is_open());
    
    WindowsBitmapDecoder decoderPrototype{};
	const auto decoder{decoderPrototype.clone(bitmapStream)};
    CHECK_EQUAL("image/x-ms-bmp", decoder->getMimeType());
}

TEST(BitmapSizeTest, BitmapIterator)
{
    std::ifstream bitmapStream{"..\\UnitTest\\basic.bmp", std::ios::binary};
    CHECK(bitmapStream.is_open());
    
    WindowsBitmapDecoder decoderPrototype{};
	auto decoder {decoderPrototype.clone(bitmapStream)};
	const auto bitmapIter {decoder->createIterator()};
    
    CHECK_EQUAL(100, bitmapIter->getBitmapWidth());
    CHECK_EQUAL(100, bitmapIter->getBitmapHeight());
}

TEST(BitmapScanLinesTest, BitmapIterator)
{
    std::ifstream bitmapStream{"..\\UnitTest\\basic.bmp", std::ios::binary};
    CHECK(bitmapStream.is_open());
    
    WindowsBitmapDecoder decoderPrototype{};
	auto decoder {decoderPrototype.clone(bitmapStream)};
	auto bitmapIter {decoder->createIterator()};

	auto numberOfScanLines{0};
    while (! bitmapIter->isEndOfImage())
    {
	    auto numberOfPixelsInScanLine{0};
        while (! bitmapIter->isEndOfScanLine())
        {
            ++numberOfPixelsInScanLine;
            bitmapIter->nextPixel();
        }
        CHECK_EQUAL(100, numberOfPixelsInScanLine);
        ++numberOfScanLines;
        
        bitmapIter->nextScanLine();
    }
    CHECK_EQUAL(100, numberOfScanLines);
}

TEST(BitmapReadWrite, Bitmap)
{
    // Read in the bitmap
    
    std::ifstream bitmapStream{"..\\UnitTest\\basic.bmp", std::ios::binary};
    CHECK(bitmapStream.is_open());

    WindowsBitmapDecoder decoderPrototype{};
	auto decoder {decoderPrototype.clone(bitmapStream)};
	auto bitmapIter {decoder->createIterator()};
    
    // Write out the bitmap to a different file with its write() method

    std::ofstream outputStream{"..\\UnitTest\\output.bmp", std::ios::binary};
    CHECK(outputStream.is_open());
    
    WindowsBitmapEncoder encoderPrototype{};
	auto encoder {encoderPrototype.clone(std::move(bitmapIter))};
    
    encoder->encodeToStream(outputStream);
    outputStream.close();

    // Read that one back in and check sizes
    
    std::ifstream bitmapStream2{"..\\UnitTest\\output.bmp", std::ios::binary};
    CHECK(bitmapStream2.is_open());

	auto decoder2 {decoderPrototype.clone(bitmapStream2)};
    bitmapIter = decoder2->createIterator();

	auto numberOfScanLines{0};
    while (! bitmapIter->isEndOfImage())
    {
	    auto numberOfPixelsInScanLine{0};
        while (! bitmapIter->isEndOfScanLine())
        {
            ++numberOfPixelsInScanLine;
            bitmapIter->nextPixel();
        }
        CHECK_EQUAL(100, numberOfPixelsInScanLine);
        ++numberOfScanLines;
        
        bitmapIter->nextScanLine();
    }
    CHECK_EQUAL(100, numberOfScanLines);
}


//// --- Repeat the tests with a bitmap that requires pad bytes (101x101)

TEST(BitmapSizeTest_101, BitmapIterator)
{
    std::ifstream bitmapStream{"..\\UnitTest\\basic_101.bmp", std::ios::binary};
    CHECK(bitmapStream.is_open());
    
    WindowsBitmapDecoder decoderPrototype{};
	auto decoder {decoderPrototype.clone(bitmapStream)};
	const auto bitmapIter {decoder->createIterator()};
    
    CHECK_EQUAL(101, bitmapIter->getBitmapWidth());
    CHECK_EQUAL(101, bitmapIter->getBitmapHeight());
}

TEST(BitmapScanLinesTest_101, BitmapIterator)
{
    std::ifstream bitmapStream{"..\\UnitTest\\basic_101.bmp", std::ios::binary};
    CHECK(bitmapStream.is_open());
    
    WindowsBitmapDecoder decoderPrototype{};
	auto decoder {decoderPrototype.clone(bitmapStream)};
	auto bitmapIter {decoder->createIterator()};

	auto numberOfScanLines {0};
    while (! bitmapIter->isEndOfImage())
    {
	    auto numberOfPixelsInScanLine {0};
        while (! bitmapIter->isEndOfScanLine())
        {
            ++numberOfPixelsInScanLine;
            bitmapIter->nextPixel();
        }
        CHECK_EQUAL(101, numberOfPixelsInScanLine);
        ++numberOfScanLines;
        
        bitmapIter->nextScanLine();
    }
    CHECK_EQUAL(101, numberOfScanLines);
}

TEST(BitmapReadWrite_101, Bitmap)
{
    // Read in the bitmap
    
    std::ifstream bitmapStream{"..\\UnitTest\\basic_101.bmp", std::ios::binary};
    CHECK(bitmapStream.is_open());
    
    WindowsBitmapDecoder decoderPrototype{};
	auto decoder {decoderPrototype.clone(bitmapStream)};
	auto bitmapIter {decoder->createIterator()};
    
    // Write out the bitmap to a different file with its write() method
    
    std::ofstream outputStream{"..\\UnitTest\\output_101.bmp", std::ios::binary};
    CHECK(outputStream.is_open());
    
    WindowsBitmapEncoder encoderPrototype{};
	auto encoder {encoderPrototype.clone(std::move(bitmapIter))};

    encoder->encodeToStream(outputStream);
    outputStream.close();
    
    // Read that one back in and check sizes
    
    std::ifstream bitmapStream2{"..\\UnitTest\\output_101.bmp", std::ios::binary};
    CHECK(bitmapStream2.is_open());

	auto decoder2 {decoderPrototype.clone(bitmapStream2)};
    bitmapIter = decoder2->createIterator();

	auto numberOfScanLines {0};
    while (! bitmapIter->isEndOfImage())
    {
	    auto numberOfPixelsInScanLine {0};
        while (! bitmapIter->isEndOfScanLine())
        {
            ++numberOfPixelsInScanLine;
            bitmapIter->nextPixel();
        }
        CHECK_EQUAL(101, numberOfPixelsInScanLine);
        ++numberOfScanLines;
        
        bitmapIter->nextScanLine();
    }

    CHECK_EQUAL(101, numberOfScanLines);
}

TEST(MandelbrotBitmapIteratorTest, BitmapIterator)
{
    auto mfbi = std::make_unique<MandelbrotFractalBitmapIterator>(1000, 1000);

    WindowsBitmapEncoder encoderPrototype{};
    auto encoder{ encoderPrototype.clone(std::move(mfbi)) };

    std::ofstream mandelbrotStream{ "..\\UnitTest\\mandelbrot.bmp", std::ios::binary };
    CHECK(mandelbrotStream.is_open());

    encoder->encodeToStream(mandelbrotStream);
}

