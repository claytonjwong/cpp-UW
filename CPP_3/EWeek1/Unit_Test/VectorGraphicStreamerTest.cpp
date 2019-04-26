//
//  VectorGraphicStreamerTest.cpp
//  EWeek1
//
//  Created by CLAYTON WONG on 7/20/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "TestHarness.h"
#include "VectorGraphicStreamer.hpp"

using namespace std;
using namespace VG;

TEST(fromFileExists,VectorGraphicStreamer){
    VectorGraphic vg;
    VectorGraphicStreamer::fromFile("inout.xml", vg);
    CHECK(vg.getPointCount()==4);
}

TEST(toFileDefault,VectorGraphicStreamer){
    string filename="default.xml";
    VectorGraphic vg1,vg2;
    VectorGraphicStreamer::toFile(filename, vg1);
    VectorGraphicStreamer::fromFile(filename, vg2);
    CHECK(vg1==vg2);
}

