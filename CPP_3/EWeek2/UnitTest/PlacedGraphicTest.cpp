#include "Element.hpp"
#include "PlacedGraphic.hpp"
#include "VectorGraphic.hpp"
#include "TestHarness.h"
#include <iostream>

TEST(ctor, PlacedGraphic)
{
    VG::HVectorGraphic vg(new VG::VectorGraphic);

    Framework::PlacedGraphic pg(VG::Point(44, 55), vg);

    constexpr VG::Point expected(44, 55);
    CHECK_EQUAL(expected, pg.getPlacementPoint());
    CHECK_EQUAL(vg.get(), &pg.getGraphic());
}

TEST(ctor2, PlacedGraphic)
{
    VG::HVectorGraphic vg(new VG::VectorGraphic);
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
    VG::HVectorGraphic vg(new VG::VectorGraphic);
    pg.setGraphic(vg);

    CHECK_EQUAL(vg.get(), &pg.getGraphic());
}

TEST(setGraphic2, PlacedGraphic)
{
    Framework::PlacedGraphic pg;
    pg.setGraphic(std::make_shared<VG::VectorGraphic>());
}

