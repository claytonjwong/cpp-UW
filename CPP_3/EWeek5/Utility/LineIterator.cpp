//
//  LineIterator.hpp
//  EWeek5
//
//  Created by Clayton Wong on 9/12/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "LineIterator.hpp"

namespace Utility
{
    

    LineIterator::LineIterator(VG::Point const& beginPoint, VG::Point const& endPoint)
        : myBeginPoint(beginPoint),
        myEndPoint(endPoint),
        myCurrentPoint(beginPoint)
    {
        myDeltaX = myEndPoint.getX() - myBeginPoint.getX();

        if (myDeltaX < 0)
        {
            myDeltaX = -myDeltaX;
            myStepX = -1;
        }
        else
        {
            myStepX = 1;
        }

        myDeltaX <<= 1;

        myDeltaY = myEndPoint.getY() - myBeginPoint.getY();
        if (myDeltaY < 0)
        {
            myDeltaY = -myDeltaY;
            myStepY = -1;
        }
        else
        {
            myStepY = 1;
        }

        myDeltaY <<= 1;

        if (myDeltaX >= myDeltaY)
        {
            myFraction = myDeltaY - (myDeltaX >> 1);
        }
        else
        {
            myFraction = myDeltaX - (myDeltaY >> 1);
        }
    }

    
    VG::Point LineIterator::getBeginPoint() const
    {
        return myBeginPoint;
    }

    
    VG::Point LineIterator::getEndPoint() const
    {
        return myEndPoint;
    }

    
    VG::Point LineIterator::getCurrentPoint() const
    {
        return myCurrentPoint;
    }

    
    bool LineIterator::isEnd() const
    {
        return getEndPoint() == getCurrentPoint();
    }

    
    void LineIterator::nextPoint()
    {
        int x0 = myCurrentPoint.getX();
        int y0 = myCurrentPoint.getY();
        if (myDeltaX >= myDeltaY)
        {
            if (myCurrentPoint.getX() != myEndPoint.getX())
            {
                if (myFraction >= 0)
                {
                    y0 += myStepY;
                    myFraction -= myDeltaX;
                }

                x0 += myStepX;
                myFraction += myDeltaY;
                myCurrentPoint = VG::Point(x0, y0);
                return;
            }
        }
        else
        {
            if (y0 != myEndPoint.getY())
            {
                if (myFraction >= 0)
                {
                    x0 += myStepX;
                    myFraction -= myDeltaY;
                }
                y0 += myStepY;
                myFraction += myDeltaX;
                myCurrentPoint = VG::Point(x0, y0);
                return;
            }
        }

        myCurrentPoint = myEndPoint;
    }


} // namespace Utility

