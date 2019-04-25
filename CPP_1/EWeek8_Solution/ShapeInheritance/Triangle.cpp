#include "Triangle.h"

Triangle::Triangle(const Point& v1, const Point& v2, const Point& v3)
    : myV1(v1), myV2(v2), myV3(v3)
{
}

const Point& Triangle::getV1() const
{
    return myV1;
}

const Point& Triangle::getV2() const
{
    return myV2;
}

const Point& Triangle::getV3() const
{
    return myV3;
}

void Triangle::draw(std::ostream& os) const
{
    os << "draw triangle: " << *this;
}

void Triangle::stream(std::ostream& os) const
{
    os << myV1 << "," << myV2 << "," << myV3;
}