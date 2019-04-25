#include <iostream>
#include "Point.h"
#include "Shape.h"
#include "Circle.h"

using namespace std;

void Circle::draw(ostream& os) const {
	os << "draw circle: ";
	stream(os);
}

void Circle::stream(ostream& os) const {
	os << origin << "," << radius;
}
