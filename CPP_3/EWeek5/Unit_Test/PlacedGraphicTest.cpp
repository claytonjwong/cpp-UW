#include "Element.hpp"
#include "PlacedGraphic.hpp"
#include "VectorGraphic.hpp"
#include "TestHarness.h"
#include "BasicCanvas.hpp"
#include "StrokeFactory.hpp"
#include <iostream>

TEST(ctor, PlacedGraphic)
{
    VG::HVectorGraphic vg = std::make_shared<VG::VectorGraphic>();

    Framework::PlacedGraphic pg(VG::Point(44, 55), vg);

    constexpr VG::Point expected(44, 55);
    CHECK_EQUAL(expected, pg.getPlacementPoint());
    CHECK_EQUAL(vg.get(), &pg.getGraphic());
}

TEST(ctor2, PlacedGraphic)
{
    VG::HVectorGraphic vg = std::make_shared<VG::VectorGraphic>();
    VG::Point point(44, 55);

    Framework::PlacedGraphic pg(point, vg);

    constexpr VG::Point expected(44, 55);
    CHECK_EQUAL(expected, pg.getPlacementPoint());
    CHECK_EQUAL(vg.get(), &pg.getGraphic());
}


TEST(setPlacementPoint, PlacedGraphic)
{
    Framework::PlacedGraphic graphic;
    graphic.setPlacementPoint(VG::Point(44, 55));

    constexpr VG::Point expected(44, 55);
    CHECK_EQUAL(expected, graphic.getPlacementPoint());
}

TEST(setPlacementPoint2, PlacedGraphic)
{
    Framework::PlacedGraphic graphic;
    VG::Point point{ 44, 55 };
    graphic.setPlacementPoint( point );

    constexpr VG::Point expected(44, 55);
    CHECK_EQUAL(expected, graphic.getPlacementPoint());
}


TEST(setGraphic, PlacedGraphic)
{
    Framework::PlacedGraphic pg;
    VG::HVectorGraphic vg = std::make_shared<VG::VectorGraphic>();
    pg.setGraphic(vg);

    CHECK_EQUAL(vg.get(), &pg.getGraphic());
}

TEST(setGraphic2, PlacedGraphic)
{
    Framework::PlacedGraphic pg;
    pg.setGraphic(std::make_shared<VG::VectorGraphic>());
}

TEST( drawToCanvasNoOffset, PlacedGraphic )
{
    BitmapGraphics::Color backColor{ 255, 255, 255 }, foreColor{ 0, 0, 0 };
    
    auto canvas = std::make_shared< BitmapGraphics::BasicCanvas >( 10, 10, backColor );
    
    VG::HVectorGraphic vg = std::make_shared<VG::VectorGraphic>();
    vg->setStroke(  BitmapGraphics::StrokeFactory::createStroke( "square", 1, foreColor )  );
    vg->addPoint( VG::Point{ 0, 0 } );
    vg->addPoint( VG::Point{ 0, 9 } );
    vg->addPoint( VG::Point{ 9, 9 } );
    vg->addPoint( VG::Point{ 9, 0 } );
    vg->closeShape(); // automatically close shape, no need to add last point equal to first point
    
    VG::Point offset{ 0, 0 };
    Framework::PlacedGraphic placedGraphic{ offset, vg };
    placedGraphic.draw( canvas );
    
    BitmapGraphics::HBitmapIterator bitmapIterator = canvas->createBitmapIterator();
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

TEST( drawToCanvasWithOffset, PlacedGraphic )
{
    BitmapGraphics::Color backColor{ 255, 255, 255 }, foreColor{ 0, 0, 0 };
    
    auto canvas = std::make_shared< BitmapGraphics::BasicCanvas >( 10, 10, backColor );
    
    VG::HVectorGraphic vg = std::make_shared<VG::VectorGraphic>();
    vg->setStroke(  BitmapGraphics::StrokeFactory::createStroke( "square", 1, foreColor )  );
    vg->addPoint( VG::Point{ 0, 0 } );
    vg->addPoint( VG::Point{ 0, 9 } );
    vg->addPoint( VG::Point{ 9, 9 } );
    vg->addPoint( VG::Point{ 9, 0 } );
    vg->closeShape(); // automatically close shape, no need to add last point equal to first point
    
    VG::Point offset{ 1, 1 };
    Framework::PlacedGraphic placedGraphic{ offset, vg };
    placedGraphic.draw( canvas );
    
    BitmapGraphics::HBitmapIterator bitmapIterator = canvas->createBitmapIterator();
    CHECK_EQUAL(10, bitmapIterator->getBitmapWidth());
    CHECK_EQUAL(10, bitmapIterator->getBitmapHeight());
    
    int row = 0;
    while (!bitmapIterator->isEndOfImage())
    {
        int column = 0;
        while (!bitmapIterator->isEndOfScanLine())
        {
            auto color = bitmapIterator->getColor();
            if ( (row == 1 || column == 1 ) && row != 0 && column != 0 )
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

