#include "Point.h"
#include <iostream>

namespace VG
{
    bool Point::operator<(const Point& rhs) const
    {
        if (getY() < rhs.getY())
        {
            return true;
        }

        if (getY() == rhs.getY())
        {
            return getX() < rhs.getX();
        }

        return false;
    }

    Point Point::operator+(const Point& rhs) const
    {
        return { getX() + rhs.getX(), getY() + rhs.getY() };
    }

    Point& Point::operator+=(const Point& rhs)
    {
        myX += rhs.getX();
        myY += rhs.getY();
        return *this;
    }

    std::ostream& operator<<(std::ostream& os, const Point& p)
    {
        os << "(" << p.getX() << ", " << p.getY() << ")";
        return os;
    }

    bool operator==(const Point& lhs, const Point& rhs)
    {
        return rhs.getX() == lhs.getX() && rhs.getY() == lhs.getY();
    }

    bool operator!=(const Point& lhs, const Point& rhs)
    {
        return !(lhs == rhs);
    }
}
