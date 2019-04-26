//
//  VectorGraphicStreamerTest.cpp
//  EWeek1
//
//  Created by CLAYTON WONG on 7/20/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "TestHarness.h"
#include "VectorGraphicStreamer.hpp"
#include "IStroke.hpp"

using namespace std;
using namespace VG;
using namespace BitmapGraphics;

TEST(fromFileExists,VectorGraphicStreamer){
    VectorGraphic vg=VectorGraphicStreamer::getVectorGraphicFromFile("inout.xml");
    CHECK(vg.getPointCount()==4);
}

TEST(toFileDefault,VectorGraphicStreamer){
    string filename="default.xml";
    VectorGraphic vg1,vg2;
    VectorGraphicStreamer::setVectorGraphicToFile(vg1, filename);
    VectorGraphicStreamer::getVectorGraphicFromFile(filename);
    CHECK(vg1==vg2);
}

TEST(toFileInXml,VectorGraphicStreamer){
    string filename="in.xml";
    auto vg1 = VectorGraphicStreamer::getVectorGraphicFromFile(filename);
    VectorGraphicStreamer::setVectorGraphicToFile(vg1, filename);
    auto vg2 = VectorGraphicStreamer::getVectorGraphicFromFile(filename);
    CHECK(vg1==vg2);
}

TEST(toFileXmlWithStroke,VectorGraphicStreamer){
    string filename="vg_with_stroke.xml";
    auto vg1 = VectorGraphicStreamer::getVectorGraphicFromFile(filename);
    
    auto stroke = vg1.getStroke();
    auto color = stroke->getColor();
    
    CHECK_EQUAL( StrokeName::SQUARE, stroke->getName() );
    CHECK_EQUAL( 0x11, color.getRed() );
    CHECK_EQUAL( 0x22, color.getGreen() );
    CHECK_EQUAL( 0x33, color.getBlue() );
    
    string outFilename="vg_with_stroke_output.xml";
    VectorGraphicStreamer::setVectorGraphicToFile(vg1, outFilename);
    auto vg2 = VectorGraphicStreamer::getVectorGraphicFromFile(filename);
    CHECK(vg1==vg2);
}
