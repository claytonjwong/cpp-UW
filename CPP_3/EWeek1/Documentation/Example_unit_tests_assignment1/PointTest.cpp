//
//  PointTest.cpp
//  Assignment1
//
//  Created by Chris Elderkin on 4/26/15.
//  Copyright (c) 2015 Chris Elderkin. All rights reserved.
//

#include "Point.h"
#include "TestHarness.h"


TEST(equality, Point)
{
    CHECK_EQUAL(VG::Point(1, 2), VG::Point(1, 2));
}

TEST(inequality, Point)
{
    CHECK(VG::Point(1, 2) != VG::Point(3, 4));
}

TEST(constexprPoint, Point)
{
    constexpr int i = VG::Point{4, 5}.getX();
    
    CHECK_EQUAL(i, 4);
}
