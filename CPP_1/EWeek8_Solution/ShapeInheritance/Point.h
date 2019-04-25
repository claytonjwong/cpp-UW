#pragma once

#include <ostream>

// I made the choice to make Point immutable to show what an immutable class in C++ could look like
class Point
{
public:
	Point(double x, double y);

	double getX() const;
	double getY() const;

private:
	double myX;
	double myY;
};

std::ostream& operator<<(std::ostream& os, const Point& p);

