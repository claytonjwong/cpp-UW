#include "Scene.h"
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

	bool noLayersFound()
	{
		return !myMountainsFound && !mySeaFound && !mySkyFound;
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

TEST(ctor, Scene)
{
	Framework::Scene scene{ 10, 10 };

	CHECK(scene.getWidth() == 10);
	CHECK(scene.getHeight() == 10);
}

TEST(copyCtor, Scene)
{
	Framework::Scene scene{ 10, 10 };
	Framework::Scene scene2{ scene };

	CHECK(scene2.getWidth() == 10);
	CHECK(scene2.getHeight() == 10);
}

TEST(moveCtor, Scene)
{
	Framework::Scene scene{ 10, 10 };
	scene.pushBack(Framework::Layer("Mountains"));

	Framework::Scene scene2{ std::move(scene) };

	CHECK(scene2.getWidth() == 10);
	CHECK(scene2.getHeight() == 10);

	LayerMatcher matcher = std::for_each(scene.begin(), scene.end(), LayerMatcher());
	CHECK(matcher.noLayersFound());
}

TEST(copyAssign, Scene)
{
	Framework::Scene scene{ 10, 10 };
	auto scene2 = scene;

	CHECK(scene2.getWidth() == 10);
	CHECK(scene2.getHeight() == 10);
}

TEST(moveAssign, Scene)
{
	Framework::Scene scene{ 10, 10 };
	scene.pushBack(Framework::Layer("Mountains"));

	Framework::Scene scene2 = std::move(scene);

	CHECK(scene2.getWidth() == 10);
	CHECK(scene2.getHeight() == 10);

	LayerMatcher matcher = std::for_each(scene.begin(), scene.end(), LayerMatcher());
	CHECK(matcher.noLayersFound());
}

TEST(pushBackRValue, Scene)
{
    Framework::Scene scene(800, 600);
	Framework::Layer l("Mountains");

	scene.pushBack(std::move(l));
	scene.pushBack(Framework::Layer("Sea"));
	scene.pushBack(Framework::Layer("Sky"));
    
    LayerMatcher matcher = std::for_each(scene.begin(), scene.end(), LayerMatcher());
    CHECK(matcher.allLayersFound());

	CHECK(l.getAlias() == "");
}

TEST(pushBackLValue, Scene)
{
	Framework::Scene scene(800, 600);
	Framework::Layer l("Mountains");
	scene.pushBack(l);
	scene.pushBack(Framework::Layer("Sea"));
	scene.pushBack(Framework::Layer("Sky"));

	LayerMatcher matcher = std::for_each(scene.begin(), scene.end(), LayerMatcher());
	CHECK(matcher.allLayersFound());

	CHECK(l.getAlias() == "Mountains");

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
