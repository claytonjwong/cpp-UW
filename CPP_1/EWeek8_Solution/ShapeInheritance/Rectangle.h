#pragma once

#include "Shape.h"
#include "Point.h"

class Rectangle : public Shape
{
public:
	Rectangle(const Point& upperRight, const Point& lowerLeft);

	const Point& getUpperRight() const;
	const Point& getLowerLeft() const;

	virtual void draw(std::ostream& os) const override;

	virtual void stream(std::ostream& os) const override;

private:
	Point myUpperRight;
	Point myLowerLeft;
};

