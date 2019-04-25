#include "TestHarness.h"

#include "Rectangle.h"

TEST(ctor, Rectangle)
{
	Rectangle t(Point(11.1, 22.2), Point(33.3, 44.4));

	CHECK_DOUBLES_EQUAL(t.getUpperRight().getX(), 11.1, .01);
	CHECK_DOUBLES_EQUAL(t.getUpperRight().getY(), 22.2, .01);

	CHECK_DOUBLES_EQUAL(t.getLowerLeft().getX(), 33.3, .01);
	CHECK_DOUBLES_EQUAL(t.getLowerLeft().getY(), 44.4, .01);
}

TEST(stream, Rectangle)
{
	Rectangle t(Point(11.1, 22.2), Point(33.3, 44.4));

	std::stringstream message;
	t.stream(message);

	CHECK_EQUAL("11.1,22.2,33.3,44.4", message.str());
}

TEST(draw, Rectangle)
{
	Rectangle t(Point(11.1, 22.2), Point(33.3, 44.4));

	std::stringstream message;
	t.draw(message);

	CHECK_EQUAL("draw rectangle: 11.1,22.2,33.3,44.4", message.str());
}