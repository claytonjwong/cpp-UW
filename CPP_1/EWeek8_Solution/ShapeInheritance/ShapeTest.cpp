#include "TestHarness.h"

#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"

#include <memory>
#include <sstream>

TEST(draw, Shape)
{
	std::vector<Shape*> shapes;

	shapes.push_back(new Triangle(Point(11.1, 22.2), Point(33.3, 44.4), Point(55.5, 66.6)));
	shapes.push_back(new Rectangle(Point(11.1, 22.2), Point(33.3, 44.4)));
	shapes.push_back(new Circle(Point(111.1, 222.2), 333.3));

	std::stringstream message;

	for (auto& shape : shapes)
	{
		shape->draw(message);
	}

	CHECK_EQUAL("draw triangle: 11.1,22.2,33.3,44.4,55.5,66.6draw rectangle: 11.1,22.2,33.3,44.4draw circle: 111.1,222.2,333.3", message.str());

	for (auto& shape : shapes)
	{
		delete shape;
	}
}

TEST(drawUnique, Shape)
{
	std::vector<std::unique_ptr<Shape>> shapes;

	shapes.push_back(std::make_unique<Triangle>(Point(11.1, 22.2), Point(33.3, 44.4), Point(55.5, 66.6)));
	shapes.push_back(std::make_unique<Rectangle>(Point(11.1, 22.2), Point(33.3, 44.4)));
	shapes.push_back(std::make_unique<Circle>(Point(111.1, 222.2), 333.3));

	std::stringstream message;

	for (auto& shape: shapes)
	{
		shape->draw(message);
	}

	CHECK_EQUAL("draw triangle: 11.1,22.2,33.3,44.4,55.5,66.6draw rectangle: 11.1,22.2,33.3,44.4draw circle: 111.1,222.2,333.3", message.str());
}
