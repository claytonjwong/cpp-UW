#include "Circle.h"

Circle::Circle(const Point& origin, const double& radius)
    : myOrigin(origin), myRadius(radius)
{
}

const Point& Circle::getOrigin() const
{
    return myOrigin;
}

const double& Circle::getRadius() const
{
    return myRadius;
}

void Circle::draw(std::ostream& os) const
{
    os << "draw circle: " << *this;
}

void Circle::stream(std::ostream& os) const
{
    os << myOrigin << "," << myRadius;
}