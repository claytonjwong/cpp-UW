#pragma once

#include <ostream>

class Shape
{
public:
	Shape() {};

	Shape(const Shape& src) = delete;
	Shape& operator=(const Shape& rhs) = delete;

	virtual ~Shape() {}

	virtual void draw(std::ostream& os) const = 0;

	virtual void stream(std::ostream& os) const = 0;
};

inline std::ostream& operator<<(std::ostream& os,const Shape& shape)
{
	shape.stream(os);
	return os;
}
