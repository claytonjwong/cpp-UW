#pragma once

#include <iosfwd>

namespace VG
{
    class Point
    {
    public:
        constexpr Point() = default;

        constexpr Point(int x, int y) : myX{ x }, myY{ y } { }

        constexpr int getX() const { return myX; }
        constexpr int getY() const { return myY; }

        bool operator<(const Point& rhs) const;
        Point operator+(const Point& rhs) const;
        Point& operator+=(const Point& rhs);

    private:
        int myX{ 0 };
        int myY{ 0 };
    };

    bool operator==(const Point& lhs, const Point& rhs);
    bool operator!=(const Point& lhs, const Point& rhs);

    std::ostream& operator<<(std::ostream& os, const Point& p);
}
