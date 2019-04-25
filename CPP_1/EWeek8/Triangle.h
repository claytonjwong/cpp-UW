#pragma once

#include <iostream>
#include "Point.h"
#include "Shape.h"

class Triangle : public Shape {
public:
	
	/* constructors */
	Triangle(const Point& p1,const Point& p2,const Point& p3)
		: p1{p1},p2{p2},p3{p3} {}

	/* accessors */
	Point getPoint1() const { return p1; }
	Point getPoint2() const { return p2; }
	Point getPoint3() const { return p3; }

	/* helpers */
	virtual void draw(std::ostream& os) const;
	virtual void stream(std::ostream& os) const;

private:
	Point p1,p2,p3;
};
