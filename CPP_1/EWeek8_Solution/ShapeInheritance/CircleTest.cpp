#include "TestHarness.h"

#include "Circle.h"

TEST(ctor, Circle)
{
	Circle c(Point(11.1, 22.2), 33.3);

	CHECK_DOUBLES_EQUAL(c.getOrigin().getX(), 11.1, .01);
	CHECK_DOUBLES_EQUAL(c.getOrigin().getY(), 22.2, .01);

	CHECK_DOUBLES_EQUAL(c.getRadius(), 33.3, .01);
}

TEST(stream, Circle)
{
	Circle c(Point(11.1, 22.2), 33.3);

	std::stringstream message;
	c.stream(message);

	CHECK_EQUAL("11.1,22.2,33.3", message.str());
}

TEST(draw, Circle)
{
	Circle c(Point(11.1, 22.2), 33.3);

	std::stringstream message;
	c.draw(message);

	CHECK_EQUAL("draw circle: 11.1,22.2,33.3", message.str());
}