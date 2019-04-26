#include "TestHarness.h"
#include "Bitmap.hpp"
#include "WindowsBitmapHeader.hpp"
#include "binary_ostream_iterator.hpp"
#include <fstream>
#include <vector>

using namespace BitmapGraphics;
using namespace Binary;

TEST(BitmapSizeTest, Bitmap)
{
    std::ifstream bitmapStream{"basic.bmp", std::ios::binary};
    CHECK(bitmapStream.is_open());

    WindowsBitmapHeader bitmapHeader{bitmapStream};
    Bitmap bitmap{bitmapHeader.getBitmapWidth(), bitmapHeader.getBitmapHeight(), bitmapStream};

    CHECK_EQUAL(100, bitmap.getWidth());
    CHECK_EQUAL(100, bitmap.getHeight());
}

TEST(BitmapSizeTest2, Bitmap)
{
    std::ifstream bitmapStream{"basic_101.bmp", std::ios::binary};
    CHECK(bitmapStream.is_open());

    WindowsBitmapHeader bitmapHeader{bitmapStream};
    Bitmap bitmap{bitmapHeader.getBitmapWidth(), bitmapHeader.getBitmapHeight(), bitmapStream};

    CHECK_EQUAL(101, bitmap.getWidth());
    CHECK_EQUAL(101, bitmap.getHeight());
}

TEST(BitmapSizeTest3, Bitmap)
{
    std::ifstream bitmapStream{"RGB.bmp", std::ios::binary};
    CHECK(bitmapStream.is_open());

    WindowsBitmapHeader bitmapHeader{bitmapStream};
    Bitmap bitmap{bitmapHeader.getBitmapWidth(), bitmapHeader.getBitmapHeight(), bitmapStream};

    CHECK_EQUAL(320, bitmap.getWidth());
    CHECK_EQUAL(240, bitmap.getHeight());
}


TEST(BitmapScanLinesTest, Bitmap)
{
    std::ifstream bitmapStream{"basic.bmp", std::ios::binary};
    CHECK(bitmapStream.is_open());
    
    WindowsBitmapHeader bitmapHeader{bitmapStream};
    Bitmap bitmap{bitmapHeader.getBitmapWidth(), bitmapHeader.getBitmapHeight(), bitmapStream};

    // Before C++11 the loop below looked like this:
    //    for (Bitmap::ScanLineIterator scanLine = bitmap.begin(); scanLine != bitmap.end(); ++scanLine)
    
    int numberOfScanLines{0};
    for (auto& scanLine : bitmap)
    {
        CHECK_EQUAL(100, scanLine.size());
        ++numberOfScanLines;
    }
    CHECK_EQUAL(100, numberOfScanLines);
}

TEST(BitmapScanLinesTest2, Bitmap)
{
    std::ifstream bitmapStream{"RGB.bmp", std::ios::binary};
    CHECK(bitmapStream.is_open());
    
    WindowsBitmapHeader bitmapHeader{bitmapStream};
    Bitmap bitmap{bitmapHeader.getBitmapWidth(), bitmapHeader.getBitmapHeight(), bitmapStream};

    // Before C++11 the loop below looked like this:
    //    for (Bitmap::ScanLineIterator scanLine = bitmap.begin(); scanLine != bitmap.end(); ++scanLine)
    
    int numberOfScanLines{0};
    for (auto& scanLine : bitmap)
    {
        CHECK_EQUAL(320, scanLine.size());
        ++numberOfScanLines;
    }
    CHECK_EQUAL(240, numberOfScanLines);
}

TEST(BitmapReadWrite, Bitmap)
{
    // Read in the bitmap
    
    std::ifstream bitmapStream{"basic.bmp", std::ios::binary};
    CHECK(bitmapStream.is_open());
    
    WindowsBitmapHeader bitmapHeader{bitmapStream};
    
    Bitmap bitmap{bitmapHeader.getBitmapWidth(), bitmapHeader.getBitmapHeight(), bitmapStream};

    // Write out the bitmap to a different file with its write() method
    
    std::ofstream outputStream{"output.bmp", std::ios::binary};
    CHECK(outputStream.is_open());
    
    bitmapHeader.write(outputStream);
    bitmap.write(outputStream);
    outputStream.close();
    
    // Read that one back in and check sizes
    
    std::ifstream bitmapStream2{"output.bmp", std::ios::binary};
    CHECK(bitmapStream2.is_open());
    
    WindowsBitmapHeader bitmapHeader2{bitmapStream2};
    Bitmap bitmap2{bitmapHeader2.getBitmapWidth(), bitmapHeader2.getBitmapHeight(), bitmapStream2};

    int numberOfScanLines{0};
    for (auto& scanLine : bitmap2)
    {
        CHECK_EQUAL(100, scanLine.size());
        ++numberOfScanLines;
    }
    CHECK_EQUAL(100, numberOfScanLines);
    
    auto scanLine1 = *bitmap.begin(), scanLine2 = *bitmap2.begin();
    
    std::vector<Color> v1,v2;
    for (auto& color: scanLine1)
        v1.push_back(color);
    
    for (auto& color: scanLine2)
        v2.push_back(color);

    for ( int i{ 0 }; i < scanLine1.size(); ++i)
        if ( v1[i] != v2[i] )
            CHECK(false);
}

TEST(BitmapReadWrite2, Bitmap)
{
    // Read in the bitmap
    
    std::ifstream bitmapStream{"basic.bmp", std::ios::binary};
    CHECK(bitmapStream.is_open());
    
    WindowsBitmapHeader bitmapHeader{bitmapStream};
    
    Bitmap bitmap{bitmapHeader.getBitmapWidth(), bitmapHeader.getBitmapHeight(), bitmapStream};

    // Write out the bitmap to a different file with its write() method
    
    std::ofstream outputStream{"output_basic.bmp", std::ios::binary};
    CHECK(outputStream.is_open());
    
    bitmapHeader.write(outputStream);
    bitmap.write(outputStream);
    outputStream.close();
    
    // Read that one back in and check sizes
    
    std::ifstream bitmapStream2{"output_basic.bmp", std::ios::binary};
    CHECK(bitmapStream2.is_open());
    
    WindowsBitmapHeader bitmapHeader2{bitmapStream2};
    Bitmap bitmap2{bitmapHeader2.getBitmapWidth(), bitmapHeader2.getBitmapHeight(), bitmapStream2};

    int numberOfScanLines{0};
    for (auto& scanLine : bitmap2)
    {
        CHECK_EQUAL(100, scanLine.size());
        ++numberOfScanLines;
    }
    CHECK_EQUAL(100, numberOfScanLines);
    
    auto scanLine1 = *bitmap.begin(), scanLine2 = *bitmap2.begin();
    
    std::vector<Color> v1,v2;
    for (auto& color: scanLine1)
        v1.push_back(color);
    
    for (auto& color: scanLine2)
        v2.push_back(color);

    for ( int i{ 0 }; i < scanLine1.size(); ++i)
        if ( v1[i] != v2[i] )
            CHECK(false);
}

TEST(BitmapReadWrite3,Bitmap)
{
    std::ifstream fin{ "RGB.bmp", std::ios::binary };
    CHECK( fin.is_open() );

    WindowsBitmapHeader header{ fin };
    Bitmap bitmap{ header.getBitmapWidth(), header.getBitmapHeight(), fin };
    
    std::ofstream fout{ "RGB_2.bmp", std::ios::binary };
    CHECK( fout.is_open() );
    header.write( fout );
    bitmap.write( fout );
}

TEST(BinaryOstreamIterator, Bitmap)
{
    // Read in the bitmap
    
    std::ifstream bitmapStream{"basic.bmp", std::ios::binary};
    CHECK(bitmapStream.is_open());
    
    WindowsBitmapHeader bitmapHeader{bitmapStream};
    Bitmap bitmap{bitmapHeader.getBitmapWidth(), bitmapHeader.getBitmapHeight(), bitmapStream};

    // Write out the bitmap to a different file with the binary_ostream_iterator
    
    std::ofstream outputStream{"output_BinaryOstreamIterator.bmp", std::ios::binary};
    CHECK(outputStream.is_open());
    
    bitmapHeader.write(outputStream);
    
    for (auto& scanLine : bitmap)
    {
        std::copy(scanLine.begin(), scanLine.end(), binary_ostream_iterator<Color>(outputStream));
    }
    
    outputStream.close();

    // Read that one back in and check sizes
    
    std::ifstream bitmapStream2{"output_BinaryOstreamIterator.bmp", std::ios::binary};
    CHECK(bitmapStream2.is_open());
    
    WindowsBitmapHeader bitmapHeader2{bitmapStream2};
    Bitmap bitmap2{bitmapHeader2.getBitmapWidth(), bitmapHeader2.getBitmapHeight(), bitmapStream2};

    int numberOfScanLines{0};
    for (auto& scanLine : bitmap2)
    {
        CHECK_EQUAL(100, scanLine.size());
        ++numberOfScanLines;
    }
    CHECK_EQUAL(100, numberOfScanLines);
}

// --- Repeat the tests with a bitmap that requires pad bytes (101x101)

TEST(BitmapSizeTest_101, Bitmap)
{
    std::ifstream bitmapStream{"basic_101.bmp", std::ios::binary};
    CHECK(bitmapStream.is_open());
    
    WindowsBitmapHeader bitmapHeader{bitmapStream};
    Bitmap bitmap{bitmapHeader.getBitmapWidth(), bitmapHeader.getBitmapHeight(), bitmapStream};
    
    CHECK_EQUAL(101, bitmap.getWidth());
    CHECK_EQUAL(101, bitmap.getHeight());
}


TEST(BitmapScanLinesTest_101, Bitmap)
{
    std::ifstream bitmapStream{"basic_101.bmp", std::ios::binary};
    CHECK(bitmapStream.is_open());
    
    WindowsBitmapHeader bitmapHeader{bitmapStream};
    Bitmap bitmap{bitmapHeader.getBitmapWidth(), bitmapHeader.getBitmapHeight(), bitmapStream};
    
    int numberOfScanLines{0};
    for (auto scanLine : bitmap)
    {
        CHECK_EQUAL(101, scanLine.size());
        ++numberOfScanLines;
    }
    CHECK_EQUAL(101, numberOfScanLines);
}

TEST(BitmapReadWrite_101, Bitmap)
{
    // Read in the bitmap
    
    std::ifstream bitmapStream{"basic_101.bmp", std::ios::binary};
    CHECK(bitmapStream.is_open());
    
    WindowsBitmapHeader bitmapHeader{bitmapStream};
    Bitmap bitmap{bitmapHeader.getBitmapWidth(), bitmapHeader.getBitmapHeight(), bitmapStream};
    
    // Write out the bitmap to a different file with its write() method
    
    std::ofstream outputStream{"output_101.bmp", std::ios::binary};
    CHECK(outputStream.is_open());
    
    bitmapHeader.write(outputStream);
    bitmap.write(outputStream);
    outputStream.close();
    
    // Read that one back in and check sizes
    
    std::ifstream bitmapStream2{"output_101.bmp", std::ios::binary};
    CHECK(bitmapStream2.is_open());
    
    WindowsBitmapHeader bitmapHeader2{bitmapStream2};
    Bitmap bitmap2{bitmapHeader2.getBitmapWidth(), bitmapHeader2.getBitmapHeight(), bitmapStream2};
    
    int numberOfScanLines{0};
    for (auto& scanLine : bitmap2)
    {
        CHECK_EQUAL(101, scanLine.size());
        ++numberOfScanLines;
    }
    CHECK_EQUAL(101, numberOfScanLines);
    
    auto scanLine1=*bitmap.begin(),scanLine2=*bitmap2.begin();
    
    std::vector<Color> v1,v2;
    for (auto& color: scanLine1)
        v1.push_back(color);
    
    for (auto& color: scanLine2)
        v2.push_back(color);

    for ( int i{ 0 }; i < scanLine1.size(); ++i)
        if ( v1[i] != v2[i] )
            CHECK(false);
}

TEST(BinaryOstreamIterator_101, Bitmap)
{
    // Read in the bitmap
    
    std::ifstream bitmapStream{"basic_101.bmp", std::ios::binary};
    CHECK(bitmapStream.is_open());
    
    WindowsBitmapHeader bitmapHeader{bitmapStream};
    Bitmap bitmap{bitmapHeader.getBitmapWidth(), bitmapHeader.getBitmapHeight(), bitmapStream};
    
    // Write out the bitmap to a different file with the binary_ostream_iterator
    
    std::ofstream outputStream{"output2_101.bmp", std::ios::binary};
    CHECK(outputStream.is_open());
    
    bitmapHeader.write(outputStream);
    
    for (auto& scanLine : bitmap)
    {
        std::copy(scanLine.begin(), scanLine.end(), binary_ostream_iterator<Color>(outputStream));
        
        // Write pad bytes
        for (auto pad{ 0 };  pad < bitmap.getNumberOfPadBytes();  ++pad)
        {
            Binary::Byte(0).write(outputStream);
        }
    }
    outputStream.close();
    
    // Read that one back in and check sizes
    
    std::ifstream bitmapStream2{"output2_101.bmp", std::ios::binary};
    CHECK(bitmapStream2.is_open());
    
    WindowsBitmapHeader bitmapHeader2{bitmapStream2};
    Bitmap bitmap2{bitmapHeader2.getBitmapWidth(), bitmapHeader2.getBitmapHeight(), bitmapStream2};
    
    int numberOfScanLines{0};
    for (auto& scanLine : bitmap2)
    {
        CHECK_EQUAL(101, scanLine.size());
        ++numberOfScanLines;
    }
    CHECK_EQUAL(101, numberOfScanLines);
}

