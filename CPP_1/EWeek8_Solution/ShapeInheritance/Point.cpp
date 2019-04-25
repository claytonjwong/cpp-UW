#include "Point.h"

Point::Point(double x, double y)
    : myX(x), myY(y)
{
}

double Point::getX() const
{
    return myX;
}

double Point::getY() const
{
    return myY;
}

std::ostream& operator<<(std::ostream& os, const Point& p)
{
    os << p.getX() << "," << p.getY();
    return os;
}
