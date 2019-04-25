#pragma once

#include "Shape.h"
#include "Point.h"

class Triangle : public Shape
{
public:
	Triangle(const Point& v1, const Point& v2, const Point& v3);

	const Point& getV1() const;
	const Point& getV2() const;
	const Point& getV3() const;

	virtual void draw(std::ostream& os) const override;

	virtual void stream(std::ostream& os) const override;

private:
	Point myV1;
	Point myV2;
	Point myV3;
};

