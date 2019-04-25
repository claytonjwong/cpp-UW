#include <iostream>
#include "Point.h"
#include "Triangle.h"

using namespace std;

void Triangle::draw(ostream& os) const {
	os << "draw triangle: ";
	stream(os);
}

void Triangle::stream(std::ostream& os) const {
	os << p1 << "," << p2 << "," << p3;
}
