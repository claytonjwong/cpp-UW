#include "Layer.h"
#include "VectorGraphic.h"
#include "TestHarness.h"

TEST(ctor, Layer)
{
	Framework::Layer layer{ "Sea" };

	const std::string expected{ "Sea" };
	CHECK_EQUAL(expected, layer.getAlias());
}

TEST(copyCtor, Layer)
{
	Framework::Layer layer{ "Sea" };
	Framework::Layer layer2{ layer };

	const std::string expected{ "Sea" };
	CHECK_EQUAL(expected, layer.getAlias());
	CHECK_EQUAL(expected, layer2.getAlias());
}

TEST(moveCtor, Layer)
{
	Framework::Layer layer{ "Sea" };
	Framework::Layer layer2{ std::move(layer) };

	const std::string expected{ "" };
	const std::string expected2{ "Sea" };

	CHECK_EQUAL(expected, layer.getAlias());
	CHECK_EQUAL(expected2, layer2.getAlias());
}

TEST(copyAssign, Layer)
{
	Framework::Layer layer{ "Sea" };
	Framework::Layer layer2{ "" };
	layer2 = layer;

	const std::string expected{ "Sea" };
	CHECK_EQUAL(expected, layer.getAlias());
	CHECK_EQUAL(expected, layer2.getAlias());
}

TEST(moveAssign, Layer)
{
	Framework::Layer layer{ "Sea" };
	Framework::Layer layer2{ "" };
	layer2 = std::move(layer);

	const std::string expected{ "" };
	const std::string expected2{ "Sea" };

	CHECK_EQUAL(expected, layer.getAlias());
	CHECK_EQUAL(expected2, layer2.getAlias());
}

TEST(pushBack, Layer)
{
    Framework::Layer layer{"Mountains"};

	Framework::PlacedGraphic pg({ 11, 11 }, VG::VectorGraphic());

    layer.pushBack(pg);
    layer.pushBack(Framework::PlacedGraphic(VG::Point(22, 22), VG::VectorGraphic()));
    layer.pushBack(Framework::PlacedGraphic(VG::Point(33, 33), VG::VectorGraphic()));

    int numberOfGraphics{0};
    for (auto pos = layer.begin(); pos != layer.end(); ++pos)
    {
        ++numberOfGraphics;
    }

    int expectedSize{3};
    CHECK_EQUAL(expectedSize, numberOfGraphics);
}

TEST(remove, Layer)
{
    Framework::Layer layer{"Air"};

    layer.pushBack(Framework::PlacedGraphic(VG::Point(11, 11), VG::VectorGraphic()));
    layer.pushBack(Framework::PlacedGraphic(VG::Point(22, 22), VG::VectorGraphic()));
    layer.pushBack(Framework::PlacedGraphic(VG::Point(33, 33), VG::VectorGraphic()));

    layer.remove(Framework::PlacedGraphic(VG::Point(33, 33), VG::VectorGraphic()));

    int numberOfGraphics{0};
    for (auto pos = layer.begin(); pos != layer.end(); ++pos)
    {
        ++numberOfGraphics;
    }

    int expectedSize{2};
    CHECK_EQUAL(expectedSize, numberOfGraphics);
}
