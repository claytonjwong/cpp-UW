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


// how to test file system without touching it?  we can only test till stringstream / string?

//TEST(fromFileExists,VectorGraphicStreamer){
//    VectorGraphic vg=VectorGraphicStreamer::getVectorGraphicFromFile("inout.xml");
//    CHECK(vg.getPointCount()==4);
//}
//
//TEST(toFileDefault,VectorGraphicStreamer){
//    string filename="default.xml";
//    VectorGraphic vg1,vg2;
//    VectorGraphicStreamer::setVectorGraphicToFile(vg1, filename);
//    VectorGraphicStreamer::getVectorGraphicFromFile(filename);
//    CHECK(vg1==vg2);
//}
//
//TEST(toFileInXml,VectorGraphicStreamer){
//    string filename="in.xml";
//    auto vg1 = VectorGraphicStreamer::getVectorGraphicFromFile(filename);
//    VectorGraphicStreamer::setVectorGraphicToFile(vg1, filename);
//    auto vg2 = VectorGraphicStreamer::getVectorGraphicFromFile(filename);
//    CHECK(vg1==vg2);
//}
