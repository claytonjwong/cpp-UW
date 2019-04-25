#include "Rectangle.h"

Rectangle::Rectangle(const Point& upperRight, const Point& lowerLeft)
    : myUpperRight(upperRight), myLowerLeft(lowerLeft)
{
}

const Point& Rectangle::getUpperRight() const
{
    return myUpperRight;
}

const Point& Rectangle::getLowerLeft() const
{
    return myLowerLeft;
}

void Rectangle::draw(std::ostream& os) const
{
    os << "draw rectangle: " << *this;
}

void Rectangle::stream(std::ostream& os) const
{
    os << myUpperRight << "," << myLowerLeft;
}