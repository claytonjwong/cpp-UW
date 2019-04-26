#include "PlacedGraphic.h"
#include "VectorGraphic.h"
#include "TestHarness.h"

TEST(ctor, PlacedGraphic)
{
    VG::VectorGraphic vg;
    vg.addPoint(VG::Point(45, 55));
    Framework::PlacedGraphic pg(VG::Point(44, 55), std::move(vg));

    const VG::Point expected(44, 55);
    CHECK_EQUAL(expected, pg.getPlacementPoint());

    VG::VectorGraphic expectedVg;
    expectedVg.addPoint(VG::Point(45, 55));

    CHECK_EQUAL_REF(expectedVg, pg.getGraphic());
}

TEST(setPlacementPoint, PlacedGraphic)
{
    Framework::PlacedGraphic graphic;
    graphic.setPlacementPoint(VG::Point(44, 55));

    const VG::Point expected(44, 55);
    CHECK_EQUAL(expected, graphic.getPlacementPoint());
}

TEST(setGraphic, PlacedGraphic)
{
    Framework::PlacedGraphic pg;
    VG::VectorGraphic vg;
    vg.addPoint(VG::Point(45, 55));
    pg.setGraphic(std::move(vg));

    VG::VectorGraphic expectedVg;
    expectedVg.addPoint(VG::Point(45, 55));

    CHECK_EQUAL_REF(expectedVg, pg.getGraphic());
}
