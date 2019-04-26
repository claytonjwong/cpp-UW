#include "TestHarness.h"
#include "CodecLibrary.hpp"
#include "BrightnessDecorator.hpp"
#include "ColorInversionDecorator.hpp"
#include "ExtraRedDecorator.hpp"
#include "ExtraGreenDecorator.hpp"
#include "ExtraBlueDecorator.hpp"
#include "VerticalLineDecorator.hpp"
#include "WindowsBitmapDecoder.hpp"
#include "WindowsBitmapEncoder.hpp"
#include "BitmapIterator.hpp"
#include <fstream>
#include <memory>

using namespace BitmapGraphics;
using namespace Codec;

namespace
{
    const std::string msBmp{"image/x-ms-bmp"};
    
    std::shared_ptr<CodecLibrary> theCodecLibrary {};

    void setUp()
    {
        theCodecLibrary.reset(new CodecLibrary);
        theCodecLibrary->registerEncoder(HBitmapEncoder(new WindowsBitmapEncoder));
        theCodecLibrary->registerDecoder(HBitmapDecoder(new WindowsBitmapDecoder));
    }

    void tearDown()
    {
        theCodecLibrary.reset();
    }
}

TEST(invalidDecoder, CodecLibrary)
{
    HBitmapDecoder decoder{new WindowsBitmapDecoder};

    try
    {
        decoder->createIterator();
        CHECK(false);
    }
    catch (const std::exception& exc)
    {
        std::cout << exc.what() << std::endl;
        CHECK(true);
    }
}

TEST(invalidEncoder, CodecLibrary)
{
    HBitmapEncoder encoder{new WindowsBitmapEncoder};

    try
    {
        std::ostringstream os{std::ios::binary};
        encoder->encodeToStream(os);
    }
    catch (const std::exception& exc)
    {
        std::cout << exc.what() << std::endl;
        CHECK(true);
    }
}


TEST(createEncoderViaMimeType, CodecLibrary)
{
    setUp();
    
    Bitmap nullBitmap{0, 0};
    HBitmapIterator iterator {nullBitmap.createIterator()};
    HBitmapEncoder encoder {theCodecLibrary->createEncoder(msBmp, iterator)};

    CHECK(dynamic_cast<WindowsBitmapEncoder*>(encoder.get()));

    tearDown();
}


TEST(failedCreateEncoderViaMimeType, CodecLibrary)
{
    setUp();
    
    Bitmap nullBitmap{0, 0};
    HBitmapIterator iterator {nullBitmap.createIterator()};
    
    try
    {
        HBitmapEncoder encoder {theCodecLibrary->createEncoder("image/unsupported-type", iterator)};
        CHECK(false);
    }
    catch (const std::exception& exc)
    {
        std::cout << exc.what() << std::endl;
        CHECK(true);
    }
    
    tearDown();
}

TEST(createDecoderViaMimeType, CodecLibrary)
{
    setUp();

    std::stringstream ss;
    HBitmapDecoder decoder {theCodecLibrary->createDecoder(msBmp, ss)};

    CHECK(dynamic_cast<WindowsBitmapDecoder*>(decoder.get()));

    tearDown();
}


TEST(createFailedDecoderViaMimeType, CodecLibrary)
{
    setUp();
    
    std::stringstream ss;
    
    try
    {
        HBitmapDecoder decoder {theCodecLibrary->createDecoder("image/unsupported-type", ss)};
        CHECK(false);
    }
    catch (const std::exception& exc)
    {
        std::cout << exc.what() << std::endl;
        CHECK(true);
    }

    tearDown();
}


TEST(createDecoderAutoDetermine, CodecLibrary)
{
    setUp();

    std::ifstream inFile{"basic.bmp", std::ios::binary};
    CHECK_EQUAL(0, !inFile);
    HBitmapDecoder decoder {theCodecLibrary->createDecoder(inFile)};

    CHECK(decoder.get());
    CHECK(dynamic_cast<WindowsBitmapDecoder*>(decoder.get()));

    tearDown();
}


TEST(windowsBitmapDecodeEncode, CodecLibrary)
{
    setUp();

    std::ifstream inFile{"basic.bmp", std::ios::binary};
    CHECK_EQUAL(0, !inFile);
    
    HBitmapDecoder decoder {theCodecLibrary->createDecoder(inFile)};
    HBitmapIterator iterator {decoder->createIterator()};
    
    CHECK(iterator.get());
    CHECK_EQUAL(100, iterator->getBitmapHeight());
    CHECK_EQUAL(100, iterator->getBitmapWidth());

    HBitmapEncoder encoder {theCodecLibrary->createEncoder(msBmp, iterator)};

    std::ofstream outFile{"output_basicCopy.bmp", std::ios::binary};
    encoder->encodeToStream(outFile);
    // TODO: file compare input/output

    tearDown();
}


TEST(brightnessDecoratorIterator, CodecLibrary)
{
    setUp();

    std::ifstream inFile{"basic.bmp", std::ios::binary};
    CHECK_EQUAL(0, !inFile);
    
    HBitmapDecoder decoder {theCodecLibrary->createDecoder(inFile)};
    HBitmapIterator iterator {decoder->createIterator()};
    
    CHECK(iterator.get());
    CHECK_EQUAL(100, iterator->getBitmapHeight());
    CHECK_EQUAL(100, iterator->getBitmapWidth());

    HBitmapIterator brightnessIterator{new BrightnessDecorator(iterator, 80)};
    HBitmapEncoder encoder {theCodecLibrary->createEncoder(msBmp, brightnessIterator)};

    std::ofstream outFile{"output_basicBrightnessAdjusted.bmp", std::ios::binary};
    encoder->encodeToStream(outFile);
    // TODO: file compare input/output

    tearDown();
}


TEST(colorInvertDecoratorIterator, CodecLibrary)
{
    setUp();

    std::ifstream inFile{"basic.bmp", std::ios::binary};
    CHECK_EQUAL(0, !inFile);
    
    HBitmapDecoder decoder {theCodecLibrary->createDecoder(inFile)};
    HBitmapIterator iterator {decoder->createIterator()};
    
    CHECK(iterator.get());
    CHECK_EQUAL(100, iterator->getBitmapHeight());
    CHECK_EQUAL(100, iterator->getBitmapWidth());

    HBitmapIterator colorInvertIterator{new ColorInversionDecorator{iterator}};
    HBitmapEncoder encoder {theCodecLibrary->createEncoder(msBmp, colorInvertIterator)};

    std::ofstream outFile{"output_basicColorInvert.bmp", std::ios::binary};
    encoder->encodeToStream(outFile);
    // TODO: file compare input/output

    tearDown();
}

TEST(extraRedDecoratorIterator, CodecLibrary)
{
    setUp();

    std::ifstream inFile{"basic.bmp", std::ios::binary};
    CHECK_EQUAL(0, !inFile);
    
    HBitmapDecoder decoder {theCodecLibrary->createDecoder(inFile)};
    HBitmapIterator iterator {decoder->createIterator()};
    
    CHECK(iterator.get());
    CHECK_EQUAL(100, iterator->getBitmapHeight());
    CHECK_EQUAL(100, iterator->getBitmapWidth());

    HBitmapIterator extraRedIterator{new ExtraRedDecorator{iterator}};
    HBitmapEncoder encoder {theCodecLibrary->createEncoder(msBmp, extraRedIterator)};

    std::ofstream outFile{"output_basicColorExtraRed.bmp", std::ios::binary};
    encoder->encodeToStream(outFile);
    // TODO: file compare input/output

    tearDown();
}

TEST(extraGreenDecoratorIterator, CodecLibrary)
{
    setUp();

    std::ifstream inFile{"basic.bmp", std::ios::binary};
    CHECK_EQUAL(0, !inFile);
    
    HBitmapDecoder decoder {theCodecLibrary->createDecoder(inFile)};
    HBitmapIterator iterator {decoder->createIterator()};
    
    CHECK(iterator.get());
    CHECK_EQUAL(100, iterator->getBitmapHeight());
    CHECK_EQUAL(100, iterator->getBitmapWidth());

    HBitmapIterator extraGreenIterator{new ExtraGreenDecorator{iterator}};
    HBitmapEncoder encoder {theCodecLibrary->createEncoder(msBmp, extraGreenIterator)};

    std::ofstream outFile{"output_basicColorExtraGreen.bmp", std::ios::binary};
    encoder->encodeToStream(outFile);
    // TODO: file compare input/output

    tearDown();
}

TEST(extraBlueDecoratorIterator, CodecLibrary)
{
    setUp();

    std::ifstream inFile{"basic.bmp", std::ios::binary};
    CHECK_EQUAL(0, !inFile);
    
    HBitmapDecoder decoder {theCodecLibrary->createDecoder(inFile)};
    HBitmapIterator iterator {decoder->createIterator()};
    
    CHECK(iterator.get());
    CHECK_EQUAL(100, iterator->getBitmapHeight());
    CHECK_EQUAL(100, iterator->getBitmapWidth());

    HBitmapIterator extraBlueIterator{new ExtraBlueDecorator{iterator}};
    HBitmapEncoder encoder {theCodecLibrary->createEncoder(msBmp, extraBlueIterator)};

    std::ofstream outFile{"output_basicColorExtraBlue.bmp", std::ios::binary};
    encoder->encodeToStream(outFile);
    // TODO: file compare input/output

    tearDown();
}

TEST(doubleDecorator, CodecLibrary)
{
    setUp();

    std::ifstream inFile{"basic.bmp", std::ios::binary};
    CHECK_EQUAL(0, !inFile);
    
    HBitmapDecoder decoder {theCodecLibrary->createDecoder(inFile)};
    HBitmapIterator iterator {decoder->createIterator()};
    
    CHECK(iterator.get());
    CHECK_EQUAL(100, iterator->getBitmapHeight());
    CHECK_EQUAL(100, iterator->getBitmapWidth());

    HBitmapIterator colorInvertIterator{new ColorInversionDecorator{iterator}};
    HBitmapIterator darkenColorInvertIterator{new BrightnessDecorator{colorInvertIterator, -50}};

    HBitmapEncoder encoder {theCodecLibrary->createEncoder(msBmp, darkenColorInvertIterator)};
        
    std::ofstream outFile{"output_darkInverted.bmp", std::ios::binary};
    encoder->encodeToStream(outFile);
    // TODO: file compare input/output

    tearDown();
}

TEST(tripleDecoratorExtraRed, CodecLibrary)
{
    setUp();

    std::ifstream inFile{"basic.bmp", std::ios::binary};
    CHECK_EQUAL(0, !inFile);
    
    HBitmapDecoder decoder {theCodecLibrary->createDecoder(inFile)};
    HBitmapIterator iterator {decoder->createIterator()};
    
    CHECK(iterator.get());
    CHECK_EQUAL(100, iterator->getBitmapHeight());
    CHECK_EQUAL(100, iterator->getBitmapWidth());

    HBitmapIterator colorInvertIterator{new ColorInversionDecorator{iterator}};
    HBitmapIterator darkenColorInvertIterator{new BrightnessDecorator{colorInvertIterator, -50}};
    HBitmapIterator extraRedColorInvertIterator{new ExtraRedDecorator{darkenColorInvertIterator}};

    HBitmapEncoder encoder {theCodecLibrary->createEncoder(msBmp, extraRedColorInvertIterator)};
    
    std::ofstream outFile{"output_darkInvertedExtraRed.bmp", std::ios::binary};
    encoder->encodeToStream(outFile);
    // TODO: file compare input/output

    tearDown();
}

TEST(tripleDecoratorExtraGreen, CodecLibrary)
{
    setUp();

    std::ifstream inFile{"basic.bmp", std::ios::binary};
    CHECK_EQUAL(0, !inFile);
    
    HBitmapDecoder decoder {theCodecLibrary->createDecoder(inFile)};
    HBitmapIterator iterator {decoder->createIterator()};
    
    CHECK(iterator.get());
    CHECK_EQUAL(100, iterator->getBitmapHeight());
    CHECK_EQUAL(100, iterator->getBitmapWidth());

    HBitmapIterator colorInvertIterator{new ColorInversionDecorator{iterator}};
    HBitmapIterator darkenColorInvertIterator{new BrightnessDecorator{colorInvertIterator, -50}};
    HBitmapIterator extraGreenColorInvertIterator{new ExtraGreenDecorator{darkenColorInvertIterator}};

    HBitmapEncoder encoder {theCodecLibrary->createEncoder(msBmp, extraGreenColorInvertIterator)};
    
    std::ofstream outFile{"output_darkInvertedExtraGreen.bmp", std::ios::binary};
    encoder->encodeToStream(outFile);
    // TODO: file compare input/output

    tearDown();
}

TEST(tripleDecoratorExtraBlue, CodecLibrary)
{
    setUp();

    std::ifstream inFile{"basic.bmp", std::ios::binary};
    CHECK_EQUAL(0, !inFile);
    
    HBitmapDecoder decoder {theCodecLibrary->createDecoder(inFile)};
    HBitmapIterator iterator {decoder->createIterator()};
    
    CHECK(iterator.get());
    CHECK_EQUAL(100, iterator->getBitmapHeight());
    CHECK_EQUAL(100, iterator->getBitmapWidth());

    HBitmapIterator colorInvertIterator{new ColorInversionDecorator{iterator}};
    HBitmapIterator darkenColorInvertIterator{new BrightnessDecorator{colorInvertIterator, -50}};
    HBitmapIterator extraBlueColorInvertIterator{new ExtraBlueDecorator{darkenColorInvertIterator}};

    HBitmapEncoder encoder {theCodecLibrary->createEncoder(msBmp, extraBlueColorInvertIterator)};
    
    std::ofstream outFile{"output_darkInvertedExtraBlue.bmp", std::ios::binary};
    encoder->encodeToStream(outFile);
    // TODO: file compare input/output

    tearDown();
}

TEST(verticalLineDecoratorIterator2, CodecLibrary)
{
    setUp();

    std::ifstream inFile{"basic.bmp", std::ios::binary};
    CHECK_EQUAL(0, !inFile);
    
    HBitmapDecoder decoder {theCodecLibrary->createDecoder(inFile)};
    HBitmapIterator iterator {decoder->createIterator()};
    
    CHECK(iterator.get());
    CHECK_EQUAL(100, iterator->getBitmapHeight());
    CHECK_EQUAL(100, iterator->getBitmapWidth());

    HBitmapIterator verticalLineIterator{new VerticalLineDecorator{iterator,2}};
    HBitmapEncoder encoder {theCodecLibrary->createEncoder(msBmp, verticalLineIterator)};

    std::ofstream outFile{"output_basicVerticalLines2.bmp", std::ios::binary};
    encoder->encodeToStream(outFile);
    // TODO: file compare input/output

    tearDown();
}

TEST(verticalLineDecoratorIterator5, CodecLibrary)
{
    setUp();

    std::ifstream inFile{"basic.bmp", std::ios::binary};
    CHECK_EQUAL(0, !inFile);
    
    HBitmapDecoder decoder {theCodecLibrary->createDecoder(inFile)};
    HBitmapIterator iterator {decoder->createIterator()};
    
    CHECK(iterator.get());
    CHECK_EQUAL(100, iterator->getBitmapHeight());
    CHECK_EQUAL(100, iterator->getBitmapWidth());

    HBitmapIterator verticalLineIterator{new VerticalLineDecorator{iterator,5}};
    HBitmapEncoder encoder {theCodecLibrary->createEncoder(msBmp, verticalLineIterator)};

    std::ofstream outFile{"output_basicVerticalLines5.bmp", std::ios::binary};
    encoder->encodeToStream(outFile);
    // TODO: file compare input/output

    tearDown();
}

TEST(verticalLineDecoratorIterator5_Reversed, CodecLibrary)
{
    setUp();

    std::ifstream inFile{"basic.bmp", std::ios::binary};
    CHECK_EQUAL(0, !inFile);
    
    HBitmapDecoder decoder {theCodecLibrary->createDecoder(inFile)};
    HBitmapIterator iterator {decoder->createIterator(true)};
    
    CHECK(iterator.get());
    CHECK_EQUAL(100, iterator->getBitmapHeight());
    CHECK_EQUAL(100, iterator->getBitmapWidth());

    HBitmapIterator verticalLineIterator{new VerticalLineDecorator{iterator,5}};
    HBitmapEncoder encoder {theCodecLibrary->createEncoder(msBmp, verticalLineIterator)};

    std::ofstream outFile{"output_basicVerticalLines5_Reversed.bmp", std::ios::binary};
    encoder->encodeToStream(outFile);
    // TODO: file compare input/output

    tearDown();
}

TEST(verticalLineDecoratorIterator10, CodecLibrary)
{
    setUp();

    std::ifstream inFile{"basic.bmp", std::ios::binary};
    CHECK_EQUAL(0, !inFile);
    
    HBitmapDecoder decoder {theCodecLibrary->createDecoder(inFile)};
    HBitmapIterator iterator {decoder->createIterator()};
    
    CHECK(iterator.get());
    CHECK_EQUAL(100, iterator->getBitmapHeight());
    CHECK_EQUAL(100, iterator->getBitmapWidth());

    HBitmapIterator verticalLineIterator{new VerticalLineDecorator{iterator,10}};
    HBitmapEncoder encoder {theCodecLibrary->createEncoder(msBmp, verticalLineIterator)};

    std::ofstream outFile{"output_basicVerticalLines10.bmp", std::ios::binary};
    encoder->encodeToStream(outFile);
    // TODO: file compare input/output

    tearDown();
}

TEST(verticalLineDecoratorIterator10_Reversed, CodecLibrary)
{
    setUp();

    std::ifstream inFile{"basic.bmp", std::ios::binary};
    CHECK_EQUAL(0, !inFile);
    
    HBitmapDecoder decoder {theCodecLibrary->createDecoder(inFile)};
    HBitmapIterator iterator {decoder->createIterator(true)};
    
    CHECK(iterator.get());
    CHECK_EQUAL(100, iterator->getBitmapHeight());
    CHECK_EQUAL(100, iterator->getBitmapWidth());

    HBitmapIterator verticalLineIterator{new VerticalLineDecorator{iterator,10}};
    HBitmapEncoder encoder {theCodecLibrary->createEncoder(msBmp, verticalLineIterator)};

    std::ofstream outFile{"output_basicVerticalLines10_Reversed.bmp", std::ios::binary};
    encoder->encodeToStream(outFile);
    // TODO: file compare input/output

    tearDown();
}

TEST(verticalLineDecoratorIterator20, CodecLibrary)
{
    setUp();

    std::ifstream inFile{"basic.bmp", std::ios::binary};
    CHECK_EQUAL(0, !inFile);
    
    HBitmapDecoder decoder {theCodecLibrary->createDecoder(inFile)};
    HBitmapIterator iterator {decoder->createIterator()};
    
    CHECK(iterator.get());
    CHECK_EQUAL(100, iterator->getBitmapHeight());
    CHECK_EQUAL(100, iterator->getBitmapWidth());

    HBitmapIterator verticalLineIterator{new VerticalLineDecorator{iterator,20}};
    HBitmapEncoder encoder {theCodecLibrary->createEncoder(msBmp, verticalLineIterator)};

    std::ofstream outFile{"output_basicVerticalLines20.bmp", std::ios::binary};
    encoder->encodeToStream(outFile);
    // TODO: file compare input/output

    tearDown();
}

TEST(verticalLineDecoratorIterator20_Reversed, CodecLibrary)
{
    setUp();

    std::ifstream inFile{"basic.bmp", std::ios::binary};
    CHECK_EQUAL(0, !inFile);
    
    HBitmapDecoder decoder {theCodecLibrary->createDecoder(inFile)};
    HBitmapIterator iterator {decoder->createIterator(true)};
    
    CHECK(iterator.get());
    CHECK_EQUAL(100, iterator->getBitmapHeight());
    CHECK_EQUAL(100, iterator->getBitmapWidth());

    HBitmapIterator verticalLineIterator{new VerticalLineDecorator{iterator,20}};
    HBitmapEncoder encoder {theCodecLibrary->createEncoder(msBmp, verticalLineIterator)};

    std::ofstream outFile{"output_basicVerticalLines20_Reversed.bmp", std::ios::binary};
    encoder->encodeToStream(outFile);
    // TODO: file compare input/output

    tearDown();
}
