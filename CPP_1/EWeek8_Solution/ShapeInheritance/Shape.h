#pragma once

#include <ostream>

class Shape
{
public:
	Shape() = default;

	Shape(const Shape& src) = delete;
	Shape& operator=(const Shape& rhs) = delete;

    virtual ~Shape() = default;

    // In a real graphics application, draw would be prototyped as:
    // virtual void draw() const = 0;
    // and would draw the shape on the computer screen.
    //
    // C++ does not have a standard graphics library. Thus for class
    // we will implement draw by streaming the coordinates to the passed in 
    // ostream for easy validation in our unit test.

	virtual void draw(std::ostream& os) const = 0;

	virtual void stream(std::ostream& os) const = 0;
};

// Use the virtual stream operator of the shape. This way a single override of operator<<() for shape
// correctly streams all subclasses
inline std::ostream& operator<<(std::ostream& os, const Shape& shape)
{
	shape.stream(os);
	return os;
}