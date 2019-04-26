#include "TestHarness.h"

#include "BasicCanvas.h"

using namespace BitmapGraphics;

TEST(BackgroundColor, BasicCanvas)
{
    const Color expected(255_byte, 255_byte, 255_byte);
    BasicCanvas canvas(10, 10, expected);

    const auto actual = canvas.getPixelColor(VG::Point(8, 6));

    CHECK_EQUAL(expected, actual);
}

TEST(setPixelColor, BasicCanvas)
{
    const Color background(255_byte, 255_byte, 255_byte);
    BasicCanvas canvas(300, 300, background);

    const Color expected(100_byte, 100_byte, 200_byte);
    canvas.setPixelColor(VG::Point(5, 5), expected);

    const auto actual = canvas.getPixelColor(VG::Point(5, 5));
    CHECK_EQUAL(expected, actual);
}

TEST(setPixelColorGetBackgroundColor, BasicCanvas)
{
    const Color expected(255_byte, 255_byte, 255_byte);
    BasicCanvas canvas(300, 300, expected);

    const Color color(100_byte, 100_byte, 200_byte);
    canvas.setPixelColor(VG::Point(5, 5), color);

    const auto actual = canvas.getPixelColor(VG::Point(7, 5));
    CHECK_EQUAL(expected, actual);
}

TEST(getDimensions, BasicCanvas)
{
    BasicCanvas canvas(99, 100, Color(1_byte, 2_byte, 3_byte));

    CHECK_EQUAL(99, canvas.getWidth());
    CHECK_EQUAL(100, canvas.getHeight());
}

TEST(setPixelOutsideDimensions, BasicCanvas)
{
    BasicCanvas canvas(99, 100, Color(1_byte, 2_byte, 3_byte));

    try
    {
        canvas.setPixelColor(VG::Point(105, 205), Color(1_byte, 2_byte, 3_byte));
        CHECK(false);
    }
    catch (const std::exception& exc)
    {
        CHECK_EQUAL(exc.what(), "Pixel location out of range");
        CHECK(true);
    }
}

TEST(getPixelOutsideDimensions, BasicCanvas)
{
    BasicCanvas canvas(99, 100, Color(1_byte, 2_byte, 3_byte));

    try
    {
        canvas.getPixelColor(VG::Point(105, 205));
    }
    catch (const std::exception& exc)
    {
        CHECK_EQUAL(exc.what(), "Pixel location out of range");
        CHECK(true);
    }
}

TEST(IBitmapIterator, BasicCanvas)
{
    const Color backColor(1_byte, 2_byte, 3_byte);
    BasicCanvas canvas(8, 9, backColor);

    auto bitmapIterator = canvas.createBitmapIterator();

    CHECK_EQUAL(8, bitmapIterator->getBitmapWidth());
    CHECK_EQUAL(9, bitmapIterator->getBitmapHeight());

    auto rows = 0;
    while (!bitmapIterator->isEndOfImage())
    {
        auto columns = 0;
        while (!bitmapIterator->isEndOfScanLine())
        {
            CHECK_EQUAL(backColor, bitmapIterator->getColor());
            bitmapIterator->nextPixel();
            columns++;
        }

        CHECK_EQUAL(8, columns);

        bitmapIterator->nextScanLine();
        rows++;
    }

    CHECK_EQUAL(9, rows);
}