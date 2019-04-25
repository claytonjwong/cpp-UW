#pragma once

#include <iostream>
#include <string>

struct Point {
	double x,y;
	Point(double x,double y) : x{x},y{y} {}
	bool operator==(const Point& rhs) { return x==rhs.x && y==rhs.y; }
	bool operator!=(const Point& rhs) { return !(*this==rhs); }
};

inline std::ostream& operator<<(std::ostream& os,const Point& p){
	os << p.x << "," << p.y;
	return os;
}