//
//  PointTest.cpp
//  Assignment1
//
//  Created by Chris Elderkin on 4/26/15.
//  Copyright (c) 2015 Chris Elderkin. All rights reserved.
//

#include "Point.hpp"
#include "TestHarness.h"
#include <iostream>

using namespace std;

TEST(equality, Point)
{
    CHECK_EQUAL(VG::Point(1, 2), VG::Point(1, 2));
}

TEST(inequality, Point)
{
    CHECK(VG::Point(1, 2) != VG::Point(3, 4));
}

TEST(negative1, Point)
{
    try {
        VG::Point(-1,0);
        CHECK(false);
    } catch (exception& e) {
        CHECK(true);
    }
}

TEST(negative2, Point)
{
    try {
        VG::Point(10,-7);
        CHECK(false);
    } catch (exception& e) {
        CHECK(true);
    }
}

TEST(constexprPoint, Point)
{
    constexpr int i = VG::Point{4, 5}.getX();
    
    CHECK_EQUAL(i, 4);
}

TEST(copyCtor, Point){
    VG::Point p1{6,9};
    VG::Point p2(p1);
    CHECK(p1==p2);
}

TEST(moveCtor, Point){
    VG::Point p1(VG::Point{3,4});
    CHECK(p1.getX()==3);
    CHECK(p1.getY()==4);
}

