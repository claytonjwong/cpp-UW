#include "TestHarness.h"
#include "Color.hpp"
#include "Point.hpp"
#include "BasicCanvas.hpp"
#include "VectorGraphic.hpp"
#include "StrokeFactory.hpp"

using namespace BitmapGraphics;

TEST(BackgroundColor, BasicCanvas)
{
    Color expected(255, 255, 255);
    BasicCanvas canvas(10, 10, expected);

    Color actual = canvas.getPixelColor(VG::Point(8, 6));

    CHECK_EQUAL(expected, actual);
}

TEST(setPixelColor, BasicCanvas)
{
    Color background(255, 255, 255);
    BasicCanvas canvas(300, 300, background);

    Color expected(100, 100, 200);
    canvas.setPixelColor(VG::Point(5, 5), expected);

    Color actual = canvas.getPixelColor(VG::Point(5, 5));
    CHECK_EQUAL(expected, actual);
}

TEST(setPixelColorGetBackgroundColor, BasicCanvas)
{
    Color expected(255, 255, 255);
    BasicCanvas canvas(300, 300, expected);

    Color color(100, 100, 200);
    canvas.setPixelColor(VG::Point(5, 5), color);

    Color actual = canvas.getPixelColor(VG::Point(7, 5));
    CHECK_EQUAL(expected, actual);
}

TEST(getDimensions, BasicCanvas)
{
    BasicCanvas canvas(99, 100, Color(1, 2, 3));

    CHECK_EQUAL(99, canvas.getWidth());
    CHECK_EQUAL(100, canvas.getHeight());
}

TEST(setPixelOutsideDimensions, BasicCanvas)
{
    BasicCanvas canvas(99, 100, Color(1, 2, 3));

    try
    {
        canvas.setPixelColor(VG::Point(105, 205), Color(1, 2, 3));
        CHECK(false);
    }
    catch (const std::exception& exc)
    {
        std::cout << exc.what() << std::endl;
        CHECK(true);
    }
}

TEST(getPixelOutsideDimensions, BasicCanvas)
{
    BasicCanvas canvas(99, 100, Color(1, 2, 3));

    try
    {
        canvas.getPixelColor(VG::Point(105, 205));
    }
    catch (const std::exception& exc)
    {
        std::cout << exc.what() << std::endl;
        CHECK(true);
    }
}

TEST(IBitmapIterator, BasicCanvas)
{
    Color backColor{ 1, 2, 3 };
    BasicCanvas canvas{ 8, 9, backColor };

    HBitmapIterator bitmapIterator = canvas.createBitmapIterator();

    CHECK_EQUAL(8, bitmapIterator->getBitmapWidth());
    CHECK_EQUAL(9, bitmapIterator->getBitmapHeight());

    int rows = 0;
    while (!bitmapIterator->isEndOfImage())
    {
        int columns = 0;
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

TEST( VectorGraphicStrokesManuallyClosedShape, BasicCanvas )
{
    Color backColor{ 255, 255, 255 }, foreColor{ 0, 0, 0 };
    
    auto canvas = std::make_shared< BasicCanvas >( 10, 10, backColor );
    
    VG::VectorGraphic vg;
    vg.setStroke(  StrokeFactory::createStroke( "square", 1, foreColor )  );
    vg.addPoint( VG::Point{ 0, 0 } );
    vg.addPoint( VG::Point{ 0, 9 } );
    vg.addPoint( VG::Point{ 9, 9 } );
    vg.addPoint( VG::Point{ 9, 0 } );
    vg.addPoint( VG::Point{ 0, 0 } ); // manually close shape by creating the last point equal to the first point
    vg.openShape();
    vg.draw( canvas, VG::Point{ 0, 0 } );
    
    HBitmapIterator bitmapIterator = canvas->createBitmapIterator();
    CHECK_EQUAL(10, bitmapIterator->getBitmapWidth());
    CHECK_EQUAL(10, bitmapIterator->getBitmapHeight());
    
    int row = 0;
    while (!bitmapIterator->isEndOfImage())
    {
        int column = 0;
        while (!bitmapIterator->isEndOfScanLine())
        {
            auto color = bitmapIterator->getColor();
            if ( row == 0 || row == 9 || column == 0 || column == 9)
            {
                CHECK_EQUAL(foreColor, color);
            }
            else
            {
                CHECK_EQUAL(backColor, color);
            }
            
            bitmapIterator->nextPixel();
            column++;
        }
        
        CHECK_EQUAL(10, column);
        
        bitmapIterator->nextScanLine();
        row++;
    }
    
    CHECK_EQUAL(10, row);
}


TEST( VectorGraphicStrokesAutomaticallyClosedShape, BasicCanvas )
{
    Color backColor{ 255, 255, 255 }, foreColor{ 0, 0, 0 };
    
    auto canvas = std::make_shared< BasicCanvas >( 10, 10, backColor );
    
    VG::VectorGraphic vg;
    vg.setStroke(  StrokeFactory::createStroke( "square", 1, foreColor )  );
    vg.addPoint( VG::Point{ 0, 0 } );
    vg.addPoint( VG::Point{ 0, 9 } );
    vg.addPoint( VG::Point{ 9, 9 } );
    vg.addPoint( VG::Point{ 9, 0 } );
    vg.closeShape(); // automatically close shape, no need to add last point equal to first point
    vg.draw( canvas, VG::Point{0,0} );
    
    HBitmapIterator bitmapIterator = canvas->createBitmapIterator();
    CHECK_EQUAL(10, bitmapIterator->getBitmapWidth());
    CHECK_EQUAL(10, bitmapIterator->getBitmapHeight());
    
    int row = 0;
    while (!bitmapIterator->isEndOfImage())
    {
        int column = 0;
        while (!bitmapIterator->isEndOfScanLine())
        {
            auto color = bitmapIterator->getColor();
            if ( row == 0 || row == 9 || column == 0 || column == 9)
            {
                CHECK_EQUAL(foreColor, color);
            }
            else
            {
                CHECK_EQUAL(backColor, color);
            }
            
            bitmapIterator->nextPixel();
            column++;
        }
        
        CHECK_EQUAL(10, column);
        
        bitmapIterator->nextScanLine();
        row++;
    }
    
    CHECK_EQUAL(10, row);
}



