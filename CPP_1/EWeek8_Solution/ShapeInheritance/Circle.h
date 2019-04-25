#pragma once

#include "Shape.h"
#include "Point.h"

class Circle : public Shape
{
public:
	Circle(const Point& origin, const double& radius);

	const Point& getOrigin() const;
	const double& getRadius() const;

	virtual void draw(std::ostream& os) const override;

	virtual void stream(std::ostream& os) const override;

private:
	Point myOrigin;
	double myRadius;
};

