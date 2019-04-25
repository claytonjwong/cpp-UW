#include <iostream>
#include "Point.h"
#include "Shape.h"
#include "Rectangle.h"

using namespace std;

void Rectangle::draw(ostream& os) const {
	os << "draw rectangle: ";
	stream(os);
}

void Rectangle::stream(ostream& os) const {
	os << upperLeft << "," << lowerRight;
}
