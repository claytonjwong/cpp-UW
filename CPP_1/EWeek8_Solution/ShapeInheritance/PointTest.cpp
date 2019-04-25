#include "TestHarness.h"
#include "Point.h"
#include <sstream>

TEST(ctor, Point)
{
	Point p(22.22, 33.33);

	CHECK_DOUBLES_EQUAL(22.22, p.getX(), 0.001);
}

TEST(ostream, Point)
{
	Point p(51.2, 101.9);

	std::stringstream message;

	message << p;

	CHECK_EQUAL("51.2,101.9", message.str())
}
