#include "Layer.h"
#include "VectorGraphic.h"
#include "TestHarness.h"

TEST(pushBack, Layer)
{
    Framework::Layer layer{"Mountains"};

    layer.pushBack(Framework::PlacedGraphic(VG::Point(11, 11), VG::VectorGraphic()));
    layer.pushBack(Framework::PlacedGraphic(VG::Point(22, 22), VG::VectorGraphic()));
    layer.pushBack(Framework::PlacedGraphic(VG::Point(33, 33), VG::VectorGraphic()));

    auto numberOfGraphics{0};
    for (const auto& graphic: layer)
    {
        ++numberOfGraphics;
    }

    const auto expectedSize{3};
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

    layer.pushBack(Framework::PlacedGraphic(VG::Point(11, 11), VG::VectorGraphic()));
    layer.pushBack(Framework::PlacedGraphic(VG::Point(22, 22), VG::VectorGraphic()));
    layer.pushBack(Framework::PlacedGraphic(VG::Point(33, 33), VG::VectorGraphic()));

    layer.remove(Framework::PlacedGraphic(VG::Point(33, 33), VG::VectorGraphic()));

    auto numberOfGraphics{0};
    for (const auto& graphic : layer)
    {
        ++numberOfGraphics;
    }

    const auto expectedSize{2};
    CHECK_EQUAL(expectedSize, numberOfGraphics);
}
