#include "TestHarness.h"

#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"

#include <memory>
#include <sstream>

using namespace std;

TEST(draw,Shape)
{
	std::vector<Shape*> shapes;

	shapes.push_back(new Triangle(Point(11.1,22.2),Point(33.3,44.4),Point(55.5,66.6)));
	shapes.push_back(new Rectangle(Point(11.1,22.2),Point(33.3,44.4)));
	shapes.push_back(new Circle(Point(111.1,222.2),333.3));

	std::stringstream message;

	for (auto& shape : shapes)
	{
		shape->draw(message);
	}

	CHECK_EQUAL("draw triangle: 11.1,22.2,33.3,44.4,55.5,66.6draw rectangle: 11.1,22.2,33.3,44.4draw circle: 111.1,222.2,333.3",message.str());

	for (auto& shape : shapes)
	{
		delete shape;
	}
}

TEST(drawUnique,Shape)
{
	std::vector<std::unique_ptr<Shape>> shapes;

	shapes.push_back(std::make_unique<Triangle>(Point(11.1,22.2),Point(33.3,44.4),Point(55.5,66.6)));
	shapes.push_back(std::make_unique<Rectangle>(Point(11.1,22.2),Point(33.3,44.4)));
	shapes.push_back(std::make_unique<Circle>(Point(111.1,222.2),333.3));

	std::stringstream message;

	for (auto& shape: shapes)
	{
		shape->draw(message);
	}

	CHECK_EQUAL("draw triangle: 11.1,22.2,33.3,44.4,55.5,66.6draw rectangle: 11.1,22.2,33.3,44.4draw circle: 111.1,222.2,333.3",message.str());
}

TEST(get,Circle){
	double r=5.5;
	Point p(3.4,6.2);
	Circle c(p,r);
	CHECK_EQUAL(c.getOrigin(),p);
	CHECK_EQUAL(c.getRadius(),r);
}

TEST(get,Rectangle){
	Point ul(2.2,3.6),lr(7.5,-3.9);
	Rectangle r(ul,lr);
	CHECK_EQUAL(r.getUpperLeft(),ul);
	CHECK_EQUAL(r.getLowerRight(),lr);
}

TEST(get,Triangle){
	Point a(0.1,0.2),b(-3.3,4.6),c(9.3,10.1);
	Triangle t(a,b,c);
	CHECK_EQUAL(t.getPoint1(),a);
	CHECK_EQUAL(t.getPoint2(),b);
	CHECK_EQUAL(t.getPoint3(),c);
}
