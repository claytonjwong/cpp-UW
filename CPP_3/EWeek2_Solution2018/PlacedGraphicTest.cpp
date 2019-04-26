#include "PlacedGraphic.h"
#include "VectorGraphic.h"
#include "TestHarness.h"

TEST(ctor, PlacedGraphic)
{
    VG::VectorGraphic vg;
	Framework::PlacedGraphic pg({ 44, 55 }, vg);

	VG::Point expected{ 44, 55 };
    CHECK_EQUAL(expected, pg.getPlacementPoint());
    CHECK(vg == pg.getGraphic());
}

TEST(copyCtor, PlacedGrapic)
{
	VG::VectorGraphic vg;
	vg.addPoint(VG::Point{ 1, 1 });

	Framework::PlacedGraphic pg({ 2,2 }, vg);

	Framework::PlacedGraphic pg2{ pg };

	CHECK(pg2 == pg);
	CHECK(pg.getGraphic().getPointCount() == 1);
}

TEST(moveCtor, PlacedGraphic)
{
	VG::VectorGraphic vg;
	vg.addPoint(VG::Point{ 1, 1 });

	Framework::PlacedGraphic pg({ 2,2 }, vg);

	Framework::PlacedGraphic pg2{ std::move(pg) };

	VG::Point expected{ 2,2 };

	CHECK(expected == pg2.getPlacementPoint());
	CHECK(pg2.getGraphic().getPointCount() == 1);
	CHECK(pg.getGraphic().getPointCount() == 0);
}

TEST(copyAssign, PlacedGraphic)
{
	VG::VectorGraphic vg;
	vg.addPoint(VG::Point{ 1, 1 });

	Framework::PlacedGraphic pg({ 2,2 }, vg);

	Framework::PlacedGraphic pg2;
	pg2 = pg;

	CHECK(pg2 == pg);
	CHECK(pg.getGraphic().getPointCount() == 1);
}

TEST(moveAssign, PlacedGraphic)
{
	VG::VectorGraphic vg;
	vg.addPoint(VG::Point{ 1, 1 });

	Framework::PlacedGraphic pg;
	pg = Framework::PlacedGraphic({ 2,2 }, vg);
	
	VG::Point expected{ 2,2 };

	CHECK(expected == pg.getPlacementPoint());
	CHECK(pg.getGraphic().getPointCount() == 1);
}

TEST(setPlacementPointRValue, PlacedGraphic)
{
    Framework::PlacedGraphic graphic;
    graphic.setPlacementPoint(VG::Point(44, 55));

    VG::Point expected(44, 55);
    CHECK_EQUAL(expected, graphic.getPlacementPoint());
}

TEST(setPlacementPointLValue, PlacedGraphic)
{
	Framework::PlacedGraphic graphic;
	VG::Point p{ 44, 55 };
	graphic.setPlacementPoint(p);

	VG::Point expected{ 44, 55 };
	CHECK_EQUAL(expected, graphic.getPlacementPoint());
}

TEST(setGraphicLValue_getGraphic, PlacedGraphic)
{
    Framework::PlacedGraphic pg;
    VG::VectorGraphic vg;
    pg.setGraphic(vg);

    CHECK(vg == pg.getGraphic());
}

TEST(setGraphicRValue_getGraphic, PlacedGraphic)
{
	Framework::PlacedGraphic pg;
	VG::VectorGraphic vg;
	vg.addPoint(VG::Point{ 1,2 });

	VG::VectorGraphic vg2{ vg };

	pg.setGraphic(std::move(vg));

	CHECK(vg2 == pg.getGraphic());
	CHECK(vg.getPointCount() == 0);
}