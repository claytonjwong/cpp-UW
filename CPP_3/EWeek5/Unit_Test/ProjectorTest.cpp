//
//  ProjectorTest.cpp
//  EWeek5
//
//  Created by Clayton Wong on 9/16/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "TestHarness.h"
#include "CodecLibrary.hpp"
#include "WindowsBitmapDecoder.hpp"
#include "WindowsBitmapEncoder.hpp"
#include "BitmapIterator.hpp"
#include <fstream>
#include <sstream>

namespace
{
    const std::string msBmp{"image/x-ms-bmp"};
    
    std::shared_ptr< Codec::CodecLibrary > theCodecLibrary {};
    
    void setUp()
    {
        theCodecLibrary.reset( new Codec::CodecLibrary );
        theCodecLibrary->registerEncoder(  Codec::HBitmapEncoder( new Codec::WindowsBitmapEncoder )  );
        theCodecLibrary->registerDecoder(  Codec::HBitmapDecoder( new Codec::WindowsBitmapDecoder )  );
    }
    
    void tearDown()
    {
        theCodecLibrary.reset();
    }
}

TEST(windowsBitmapDecodeEncode, Projector)
{
    setUp();
    
    //
    // TODO: test projector functionality
    //
    
//    std::ifstream inFile{"basic.bmp", std::ios::binary};
//    CHECK_EQUAL(0, !inFile);
//
//    Codec::HBitmapDecoder decoder{  theCodecLibrary->createDecoder( inFile )  };
//    BitmapGraphics::HBitmapIterator iterator{ decoder->createIterator() };
//
//    CHECK(iterator.get());
//    CHECK_EQUAL(100, iterator->getBitmapHeight());
//    CHECK_EQUAL(100, iterator->getBitmapWidth());
//
//    Codec::HBitmapEncoder encoder {theCodecLibrary->createEncoder(msBmp, iterator)};
//
//    std::ofstream outFile{"output_basicCopy.bmp", std::ios::binary};
//    encoder->encodeToStream(outFile);
//    // TODO: file compare input/output
//
//    tearDown();
}
