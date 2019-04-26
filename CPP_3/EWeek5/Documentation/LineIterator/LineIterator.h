#pragma once

#include "Point.h"

class LineIterator
{
public:
    LineIterator(const VG::Point& beginPoint, const VG::Point& endPoint);
    bool isEnd() const;
    VG::Point getBeginPoint() const;
    VG::Point getEndPoint() const;
    VG::Point getCurrentPoint() const;
    void nextPoint();

private:
    VG::Point myBeginPoint;
    VG::Point myEndPoint;
    VG::Point myCurrentPoint;

    int myDeltaX;
    int myDeltaY;
    int myStepX;
    int myStepY;
	int myFraction;
};
