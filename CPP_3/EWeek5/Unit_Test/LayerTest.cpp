#include "Layer.hpp"
#include "VectorGraphic.hpp"
#include "TestHarness.h"
#include "BasicCanvas.hpp"
#include "StrokeFactory.hpp"

TEST(pushBack, Layer)
{
    Framework::Layer layer{"Mountains"};

    layer.pushBack(Framework::PlacedGraphic(VG::Point(11, 11), VG::HVectorGraphic(new VG::VectorGraphic)));
    layer.pushBack(Framework::PlacedGraphic(VG::Point(22, 22), VG::HVectorGraphic(new VG::VectorGraphic)));
    layer.pushBack(Framework::PlacedGraphic(VG::Point(33, 33), VG::HVectorGraphic(new VG::VectorGraphic)));

    int numberOfGraphics{0};
    for ( auto pos{ layer.begin() };  pos != layer.end();  ++pos )
    {
        ++numberOfGraphics;
    }

    constexpr int expectedSize{3};
    CHECK_EQUAL(expectedSize, numberOfGraphics);
}

TEST(getAlias, Layer)
{
    Framework::Layer layer{"Sea"};

    const std::string expected{"Sea"};
    CHECK_EQUAL(expected, layer.getAlias());
}

TEST(remove, Layer)
{
    Framework::Layer layer{"Air"};

    layer.pushBack(Framework::PlacedGraphic(VG::Point(11, 11), VG::HVectorGraphic(new VG::VectorGraphic)));
    layer.pushBack(Framework::PlacedGraphic(VG::Point(22, 22), VG::HVectorGraphic(new VG::VectorGraphic)));
    layer.pushBack(Framework::PlacedGraphic(VG::Point(33, 33), VG::HVectorGraphic(new VG::VectorGraphic)));

    layer.remove(Framework::PlacedGraphic(VG::Point(33, 33), VG::HVectorGraphic(new VG::VectorGraphic)));

    int numberOfGraphics{0};
    for ( auto pos{ layer.begin() };  pos != layer.end();  ++pos )
    {
        ++numberOfGraphics;
    }

    constexpr int expectedSize{2};
    CHECK_EQUAL(expectedSize, numberOfGraphics);
}


TEST( drawToCanvas, Layer )
{
    BitmapGraphics::Color backColor{ 255, 255, 255 }, foreColor{ 0, 0, 0 };
    
    auto singlePoint1 = std::make_shared< VG::VectorGraphic >();
    singlePoint1->addPoint( VG::Point{ 0, 0 } );
    singlePoint1->setStroke(  BitmapGraphics::StrokeFactory::createStroke( "square", 1, foreColor )  );

    auto singlePoint2 = std::make_shared< VG::VectorGraphic >();
    singlePoint2->addPoint( VG::Point{ 0, 0 } );
    singlePoint2->setStroke(  BitmapGraphics::StrokeFactory::createStroke( "square", 1, foreColor )  );
    
    auto singlePoint3 = std::make_shared< VG::VectorGraphic >();
    singlePoint3->addPoint( VG::Point{ 0, 0 } );
    singlePoint3->setStroke(  BitmapGraphics::StrokeFactory::createStroke( "square", 1, foreColor )  );
    
    Framework::Layer layer{ "Mountains" };
    layer.pushBack( Framework::PlacedGraphic(  VG::Point(1, 0), singlePoint1 )  );
    layer.pushBack( Framework::PlacedGraphic(  VG::Point(2, 1), singlePoint2 )  );
    layer.pushBack( Framework::PlacedGraphic(  VG::Point(4, 3), singlePoint3 )  );
    
    auto canvas = std::make_shared< BitmapGraphics::BasicCanvas >( 5, 5, backColor );
    layer.draw( canvas );
    
    int numberOfGraphics{ 0 };
    for ( const auto& placedGraphic: layer )
    {
        ++numberOfGraphics;
    }
    CHECK_EQUAL(  canvas->getPixelColor( VG::Point(1, 0)  ), foreColor  );
    CHECK_EQUAL(  canvas->getPixelColor( VG::Point(2, 1)  ), foreColor  );
    CHECK_EQUAL(  canvas->getPixelColor( VG::Point(4, 3)  ), foreColor  );
    
    
    constexpr int expectedSize{ 3 };
    CHECK_EQUAL(expectedSize, numberOfGraphics);
}
