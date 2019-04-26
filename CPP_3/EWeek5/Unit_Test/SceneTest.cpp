
#include "Scene.hpp"
#include "StrokeFactory.hpp"
#include "BasicCanvas.hpp"
#include "TestHarness.h"
#include <algorithm>

struct LayerMatcher
{
    LayerMatcher() :
    myMountainsFound(false),
    mySeaFound(false),
    mySkyFound(false)
    {
    }
    
    void operator()(const Framework::Layer& layer)
    {
        if (layer.getAlias() == "Mountains")
        {
            myMountainsFound = true;
        }
        else if (layer.getAlias() == "Sea")
        {
            mySeaFound = true;
        }
        else if (layer.getAlias() == "Sky")
        {
            mySkyFound = true;
        }
    }
    
    bool allLayersFound()
    {
        return myMountainsFound && mySeaFound && mySkyFound;
    }
    
    bool onlyMountainsSkyFound()
    {
        return myMountainsFound && !mySeaFound && mySkyFound;
    }
    
private:
    bool myMountainsFound;
    bool mySeaFound;
    bool mySkyFound;
};

TEST(pushBack, Scene)
{
    Framework::Scene scene(800, 600);
    scene.pushBack(Framework::Layer("Mountains"));
    scene.pushBack(Framework::Layer("Sea"));
    scene.pushBack(Framework::Layer("Sky"));
    
    LayerMatcher matcher = std::for_each(scene.begin(), scene.end(), LayerMatcher());
    CHECK(matcher.allLayersFound());
}

TEST(pushBack2, Scene)
{
    Framework::Scene scene(800, 600);
    auto mtn = Framework::Layer("Mountains");
    auto sea = Framework::Layer("Sea");
    auto sky = Framework::Layer("Sky");
    scene.pushBack( mtn );
    scene.pushBack( sea );
    scene.pushBack( sky );
    
    LayerMatcher matcher = std::for_each(scene.begin(), scene.end(), LayerMatcher());
    CHECK(matcher.allLayersFound());
}

TEST(remove, Scene)
{
    Framework::Scene scene(800, 600);
	scene.pushBack(Framework::Layer("Mountains"));
	scene.pushBack(Framework::Layer("Sea"));
	scene.pushBack(Framework::Layer("Sky"));
    
    scene.remove(Framework::Layer("Sea"));
    
    LayerMatcher matcher = std::for_each(scene.begin(), scene.end(), LayerMatcher());
    CHECK(matcher.onlyMountainsSkyFound());
}

TEST(remove2, Scene)
{
    Framework::Scene scene(800, 600);
    scene.pushBack(Framework::Layer("Mountains"));
    scene.pushBack(Framework::Layer("Sea"));
    scene.pushBack(Framework::Layer("Sky"));
    
    auto target = Framework::Layer( "Sea" );
    scene.remove( target );
    
    LayerMatcher matcher = std::for_each(scene.begin(), scene.end(), LayerMatcher());
    CHECK(matcher.onlyMountainsSkyFound());
}

TEST( drawSceneToCanvas, Scene )
{
    BitmapGraphics::Color backColor{ 255, 255, 255 }, foreColor1{ 0, 0, 1 }, foreColor2{ 0, 1, 0}, foreColor3{ 0, 1, 1}, foreColor4 = { 1, 0, 0 };
    
    auto singlePoint1 = std::make_shared< VG::VectorGraphic >();
    singlePoint1->addPoint( VG::Point{ 0, 0 } );
    singlePoint1->setStroke(  BitmapGraphics::StrokeFactory::createStroke( "square", 1, foreColor1 )  );
    
    auto singlePoint2 = std::make_shared< VG::VectorGraphic >();
    singlePoint2->addPoint( VG::Point{ 0, 0 } );
    singlePoint2->setStroke(  BitmapGraphics::StrokeFactory::createStroke( "square", 1, foreColor2 )  );
    
    auto singlePoint3 = std::make_shared< VG::VectorGraphic >();
    singlePoint3->addPoint( VG::Point{ 0, 0 } );
    singlePoint3->setStroke(  BitmapGraphics::StrokeFactory::createStroke( "square", 1, foreColor3 )  );

    auto singlePoint4 = std::make_shared< VG::VectorGraphic >();
    singlePoint4->addPoint( VG::Point{ 0, 0 } );
    singlePoint4->setStroke(  BitmapGraphics::StrokeFactory::createStroke( "square", 1, foreColor4 )  );

    Framework::PlacedGraphic placedGraphic1{  VG::Point{ 0, 0 }, singlePoint1  };
    Framework::PlacedGraphic placedGraphic2{  VG::Point{ 0, 1 }, singlePoint2  };
    Framework::PlacedGraphic placedGraphic3{  VG::Point{ 1, 0 }, singlePoint3  };
    Framework::PlacedGraphic placedGraphic4{  VG::Point{ 1, 1 }, singlePoint4  };
    
    Framework::Layer layer1{ "layer1" }, layer2{ "layer2" }, layer3{ "layer3" }, layer4{ "layer4" };
    layer1.pushBack( placedGraphic1 );
    layer2.pushBack( placedGraphic2 );
    layer3.pushBack( placedGraphic3 );
    layer4.pushBack( placedGraphic4 );
    
    Framework::Scene scene{ 2, 2 };
    scene.pushBack( layer1 );
    scene.pushBack( layer2 );
    scene.pushBack( layer3 );
    scene.pushBack( layer4 );
    
    auto canvas = std::make_shared< BitmapGraphics::BasicCanvas >( 10, 10, backColor );

    scene.draw( canvas );
    
    CHECK_EQUAL(  canvas->getPixelColor( VG::Point(0, 0)  ), foreColor1  );
    CHECK_EQUAL(  canvas->getPixelColor( VG::Point(0, 1)  ), foreColor2  );
    CHECK_EQUAL(  canvas->getPixelColor( VG::Point(1, 0)  ), foreColor3  );
    CHECK_EQUAL(  canvas->getPixelColor( VG::Point(1, 1)  ), foreColor4  );
}
