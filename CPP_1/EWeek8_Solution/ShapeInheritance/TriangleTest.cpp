#include "TestHarness.h"

#include "Triangle.h"

TEST(ctor, Triangle)
{
	Triangle t(Point(11.1, 22.2), Point(33.3, 44.4), Point(55.5, 66.6));

	CHECK_DOUBLES_EQUAL(t.getV1().getX(), 11.1, .01);
	CHECK_DOUBLES_EQUAL(t.getV1().getY(), 22.2, .01);

	CHECK_DOUBLES_EQUAL(t.getV2().getX(), 33.3, .01);
	CHECK_DOUBLES_EQUAL(t.getV2().getY(), 44.4, .01);

	CHECK_DOUBLES_EQUAL(t.getV3().getX(), 55.5, .01);
	CHECK_DOUBLES_EQUAL(t.getV3().getY(), 66.6, .01);
}

TEST(stream, Triangle)
{
	Triangle t(Point(11.1, 22.2), Point(33.3, 44.4), Point(55.5, 66.6));

	std::stringstream message;
	t.stream(message);

	CHECK_EQUAL("11.1,22.2,33.3,44.4,55.5,66.6", message.str());
}

TEST(draw, Triangle)
{
	Triangle t(Point(11.1, 22.2), Point(33.3, 44.4), Point(55.5, 66.6));

	std::stringstream message;
	t.draw(message);

	CHECK_EQUAL("draw triangle: 11.1,22.2,33.3,44.4,55.5,66.6", message.str());
}