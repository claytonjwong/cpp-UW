#pragma once

#include <iostream>
#include "Point.h"
#include "Shape.h"

class Circle : public Shape {
public:
	/* constructors */
	Circle(const Point& origin,double radius)
		: origin{origin},radius{radius} {}

	/* accessors */
	Point getOrigin() const { return origin; }
	double getRadius() const { return radius; }

	/* helpers */
	virtual void draw(std::ostream& os) const;
	virtual void stream(std::ostream& os) const;
private:
	Point origin;
	double radius;
};
