#pragma once

#include <iostream>
#include "Shape.h"
#include "Point.h"

class Rectangle : public Shape {
public:
	/* constructor */
	Rectangle(const Point& upperLeft,const Point& lowerRight)
		: upperLeft{upperLeft},lowerRight{lowerRight} {}

	/* accessors */
	Point getUpperLeft() const { return upperLeft; }
	Point getLowerRight() const { return lowerRight; }

	/* helpers */
	virtual void draw(std::ostream& os) const;
	virtual void stream(std::ostream& os) const;


private:
	Point upperLeft,lowerRight;
};
