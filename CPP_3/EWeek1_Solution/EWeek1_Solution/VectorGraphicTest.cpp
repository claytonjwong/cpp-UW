#include "Parse.h"
#include "VectorGraphic.h"
#include "VectorGraphicStreamer.h"
#include "TestHarness.h"
#include <iostream>
#include <deque>

TEST(ctor, VectorGraphic)
{
	VG::VectorGraphic vg;
	CHECK_EQUAL(0, vg.getPointCount());
	CHECK_EQUAL(true, vg.isClosed());
	CHECK_EQUAL(false, vg.isOpen());
}

TEST(copyCtor, VectorGraphic)
{
	VG::VectorGraphic vg;
	vg.addPoint(VG::Point(1, 1));

	VG::VectorGraphic vg2{ vg };

	CHECK_EQUAL(1, vg.getPointCount());
	CHECK_EQUAL(true, vg.isClosed());
	CHECK_EQUAL(false, vg.isOpen());

	CHECK_EQUAL(1, vg2.getPointCount());
	CHECK_EQUAL(true, vg2.isClosed());
	CHECK_EQUAL(false, vg2.isOpen());
}

TEST(moveCtor, VectorGraphic)
{
	VG::VectorGraphic vg;
	vg.addPoint(VG::Point(1, 1));

	VG::VectorGraphic vg2{ std::move(vg) };

	CHECK_EQUAL(0, vg.getPointCount());

	CHECK_EQUAL(1, vg2.getPointCount());
	CHECK_EQUAL(true, vg2.isClosed());
	CHECK_EQUAL(false, vg2.isOpen());
}

TEST(copyAssign, VectorGraphic)
{
	VG::VectorGraphic vg;
	vg.addPoint(VG::Point(1, 1));

	VG::VectorGraphic vg2;
	vg2 = vg;

	CHECK_EQUAL(1, vg.getPointCount());
	CHECK_EQUAL(true, vg.isClosed());
	CHECK_EQUAL(false, vg.isOpen());

	CHECK_EQUAL(1, vg2.getPointCount());
	CHECK_EQUAL(true, vg2.isClosed());
	CHECK_EQUAL(false, vg2.isOpen());
}

TEST(moveAssign, VectorGraphic)
{
	VG::VectorGraphic vg;
	vg.addPoint(VG::Point(1, 1));

	VG::VectorGraphic vg2;
	vg2 = std::move(vg);

	CHECK_EQUAL(0, vg.getPointCount());

	CHECK_EQUAL(1, vg2.getPointCount());
	CHECK_EQUAL(true, vg2.isClosed());
	CHECK_EQUAL(false, vg2.isOpen());
}

TEST(addPoint, VectorGraphic)
{
	VG::VectorGraphic vg;
	VG::Point p{ 1,1 };
	vg.addPoint(p);
	CHECK_EQUAL(1, vg.getPointCount());

	vg.addPoint(VG::Point{ 2, 2 });
	CHECK_EQUAL(2, vg.getPointCount());
}

TEST(removePoint, VectorGraphic)
{
	VG::VectorGraphic vg;
	vg.addPoint(VG::Point{ 1, 1 });
	vg.addPoint(VG::Point{ 2, 2 });
	vg.removePoint(VG::Point{ 1, 1 });

	CHECK_EQUAL(1, vg.getPointCount());
	CHECK_EQUAL(VG::Point(2, 2), vg.getPoint(0));
}

TEST(removePointNotInVG, VectorGraphic)
{
	VG::VectorGraphic vg;
	vg.addPoint(VG::Point{ 1, 1 });
	vg.addPoint(VG::Point{ 2, 2 });

	try
	{
		vg.removePoint(VG::Point{ 3, 3 });
	}
	catch (std::invalid_argument&)
	{
		CHECK(true);
		return;
	}

	CHECK(false);
}

TEST(erasePoint, VectorGraphic)
{
	VG::VectorGraphic vg;
	vg.addPoint(VG::Point{ 1, 1 });
	vg.addPoint(VG::Point{ 2, 2 });
	vg.addPoint(VG::Point{ 3, 3 });
	vg.erasePoint(1);

	CHECK_EQUAL(2, vg.getPointCount());
	CHECK_EQUAL(VG::Point(1, 1), vg.getPoint(0));
	CHECK_EQUAL(VG::Point(3, 3), vg.getPoint(1));
}

TEST(erasePointOutOfRange, VectorGraphic)
{
	VG::VectorGraphic vg;
	vg.addPoint(VG::Point{ 1, 1 });
	vg.addPoint(VG::Point{ 2, 2 });
	vg.addPoint(VG::Point{ 3, 3 });

	try
	{
		vg.erasePoint(5);
	}
	catch (std::out_of_range&)
	{
		CHECK_EQUAL(3, vg.getPointCount());
		return;
	}
	CHECK(false); // should have caught exception
}

TEST(equality, VectorGraphic)
{
	VG::VectorGraphic vg1;
	vg1.addPoint(VG::Point{ 1, 1 });
	vg1.addPoint(VG::Point{ 2, 2 });
	vg1.addPoint(VG::Point{ 3, 3 });

	VG::VectorGraphic vg2;
	vg2.addPoint(VG::Point{ 1, 1 });
	vg2.addPoint(VG::Point{ 2, 2 });
	vg2.addPoint(VG::Point{ 3, 3 });

	CHECK(vg1 == vg2);
}

TEST(inequality, VectorGraphic)
{
	VG::VectorGraphic vg1;
	vg1.addPoint(VG::Point{ 1, 1 });
	vg1.addPoint(VG::Point{ 1, 2 });
	vg1.addPoint(VG::Point{ 1, 3 });

	VG::VectorGraphic vg2;
	vg2.addPoint(VG::Point{ 2, 1 });
	vg2.addPoint(VG::Point{ 2, 2 });
	vg2.addPoint(VG::Point{ 2, 3 });

	CHECK(vg1 != vg2);

	VG::VectorGraphic vg3;
	vg3.addPoint(VG::Point{ 1, 1 });
	vg3.addPoint(VG::Point{ 1, 2 });
	vg3.addPoint(VG::Point{ 1, 3 });
	vg3.openShape();

	CHECK(vg3 != vg1);
}

TEST(closeShape, VectorGraphic)
{
	VG::VectorGraphic vg;
	vg.closeShape();
	CHECK_EQUAL(true, vg.isClosed());
	CHECK_EQUAL(false, vg.isOpen());
}

TEST(openShape, VectorGraphic)
{
	VG::VectorGraphic vg;
	vg.openShape();
	CHECK_EQUAL(false, vg.isClosed());
	CHECK_EQUAL(true, vg.isOpen());
}

TEST(widthHeight, VectorGraphic)
{
	VG::VectorGraphic vectorGraphic;
	vectorGraphic.addPoint(VG::Point{ 0, 2 });
	vectorGraphic.addPoint(VG::Point{ 4, 3 });
	vectorGraphic.addPoint(VG::Point{ 5, 8 });
	vectorGraphic.addPoint(VG::Point{ 2, 1 });
	CHECK_EQUAL(5, vectorGraphic.getWidth());
	CHECK_EQUAL(7, vectorGraphic.getHeight());

	vectorGraphic.erasePoint(2);
	CHECK_EQUAL(4, vectorGraphic.getWidth());
	CHECK_EQUAL(2, vectorGraphic.getHeight());
}

// C++11 has a new "raw string literal" that is useful for
// embedding long strings in a file for testing. Previously
// this would have to be done with a "stringification" macro:
//   #define STR(a) #a

const std::string VectorGraphicXml = R"(
<VectorGraphic closed="true">
<Point x="0" y="0"/>
<Point x="10" y="0">
</Point>
<Point x="10" y="10"/>
<Point x="0" y="10"/>
</VectorGraphic>
)";

const std::string VectorGraphicXmlBadPointCoord = R"(
<VectorGraphic closed="true">
<Point x="0" z="0"/>
<Point x="10" y="0">
</Point>
<Point x="10" y="10"/>
<Point x="0" y="10"/>
</VectorGraphic>
)";

const std::string VectorGraphicXmlMisspelledPoint = R"(
<VectorGraphic closed="true">
<Pont x="0" z="0"/>
<Point x="10" y="0">
</Point>
<Point x="10" y="10"/>
<Point x="0" y="10"/>
</VectorGraphic>
)";

const std::string VectorGraphicXmlMisspelledVG = R"(
<VectorGraphic closed="true">
<Point x="0" z="0"/>
<Point x="10" y="0">
</Point>
<Point x="10" y="10"/>
<Point x="0" y="10"/>
</VectrGraphic>
)";

TEST(fromXml, VectorGraphic)
{
	std::stringstream sstr(VectorGraphicXml);

	auto vg = VG::VectorGraphicStreamer::fromXml(sstr);

	CHECK_EQUAL(true, vg.isClosed());
	CHECK_EQUAL(4, vg.getPointCount());
	CHECK_EQUAL(10, vg.getPoint(2).getX());
	CHECK_EQUAL(10, vg.getPoint(2).getY());
}

TEST(toXml, VectorGraphic)
{
	VG::VectorGraphic vg1;
	vg1.addPoint(VG::Point(1, 1));
	vg1.addPoint(VG::Point(2, 2));
	vg1.addPoint(VG::Point(3, 3));

	std::stringstream sstr;
	VG::VectorGraphicStreamer::toXml(vg1, sstr);

	auto vg2 = VG::VectorGraphicStreamer::fromXml(sstr);

	CHECK(vg1 == vg2);
}

TEST(fromXmlBadPoint, VectorGraphic)
{
	try
	{
		std::stringstream sstr(VectorGraphicXmlBadPointCoord);

		auto vg = VG::VectorGraphicStreamer::fromXml(sstr);
	}
	catch (std::exception&)
	{
		return;
	}
	CHECK(false);
}

TEST(fromXmlMisspelledPoint, VectorGraphic)
{
	try
	{
		std::stringstream sstr(VectorGraphicXmlMisspelledPoint);

		auto vg = VG::VectorGraphicStreamer::fromXml(sstr);
	}
	catch (std::runtime_error&)
	{
		return;
	}
	CHECK(false);
}

TEST(fromXmlMisspelledVG, VectorGraphic)
{
	try
	{
		std::stringstream sstr(VectorGraphicXmlMisspelledVG);

		auto vg = VG::VectorGraphicStreamer::fromXml(sstr);
	}
	catch (std::runtime_error&)
	{
		return;
	}
	CHECK(false);
}