#include "TestHarness.h"

#include "CodecLibrary.h"
#include "BrightnessDecorator.h"
#include "ColorInversionDecorator.h"
#include "WindowsBitmapDecoder.h"
#include "WindowsBitmapEncoder.h"
#include "BitmapIterator.h"
#include <fstream>
#include <memory>

using namespace BitmapGraphics;

namespace
{
    const std::string msBmp{"image/x-ms-bmp"};
    
    std::unique_ptr<CodecLibrary> theCodecLibrary;

    void setUp()
    {
        theCodecLibrary = std::make_unique<CodecLibrary>();
        theCodecLibrary->registerEncoder(std::make_unique<WindowsBitmapEncoder>());
        theCodecLibrary->registerDecoder(std::make_unique<WindowsBitmapDecoder>());
    }

    void tearDown()
    {
        theCodecLibrary.reset();
    }
}

TEST(invalidDecoder, CodecLibrary)
{
    WindowsBitmapDecoder decoder;

    try
    {
        decoder.createIterator();
        CHECK(false);
    }
    catch (const std::exception& exc)
    {
        CHECK_EQUAL("Invalid decoder: bad source stream", exc.what());
        CHECK(true);
    }
}

TEST(invalidEncoder, CodecLibrary)
{
    WindowsBitmapEncoder encoder;

    try
    {
        std::ostringstream os{std::ios::binary};
        encoder.encodeToStream(os);
    }
    catch (const std::exception& exc)
    {
        CHECK_EQUAL("Invalid encoder: null iterator", exc.what());
        CHECK(true);
    }
}

TEST(createEncoderViaMimeType, CodecLibrary)
{
    setUp();
    
    Bitmap nullBitmap{0, 0};
    auto iterator {nullBitmap.createIterator()};
    auto encoder {theCodecLibrary->createEncoder(msBmp, std::move(iterator))};

    CHECK(dynamic_cast<WindowsBitmapEncoder*>(encoder.get()));

    tearDown();
}

TEST(failedCreateEncoderViaMimeType, CodecLibrary)
{
    setUp();
    
    Bitmap nullBitmap{0, 0};
    auto iterator {nullBitmap.createIterator()};
    
    try
    {
        auto encoder {theCodecLibrary->createEncoder("image/unsupported-type", std::move(iterator))};
        CHECK(false);
    }
    catch (const std::exception& exc)
    {
        CHECK_EQUAL("No encoder for image/unsupported-type", exc.what());
        CHECK(true);
    }
    
    tearDown();
}

TEST(createDecoderViaMimeType, CodecLibrary)
{
    setUp();

    std::stringstream ss;
    auto decoder {theCodecLibrary->createDecoder(msBmp, ss)};

    CHECK(dynamic_cast<WindowsBitmapDecoder*>(decoder.get()));

    tearDown();
}

TEST(createFailedDecoderViaMimeType, CodecLibrary)
{
    setUp();
    
    std::stringstream ss;
    
    try
    {
        auto decoder {theCodecLibrary->createDecoder("image/unsupported-type", ss)};
        CHECK(false);
    }
    catch (const std::exception& exc)
    {
        CHECK_EQUAL("No decoder for image/unsupported-type", exc.what());
        CHECK(true);
    }

    tearDown();
}

TEST(createDecoderAutoDetermine, CodecLibrary)
{
    setUp();

    std::ifstream inFile{"basic.bmp", std::ios::binary};
    CHECK_EQUAL(false, !inFile);
    auto decoder {theCodecLibrary->createDecoder(inFile)};

    CHECK(decoder.get());
    CHECK(dynamic_cast<WindowsBitmapDecoder*>(decoder.get()));

    tearDown();
}

TEST(windowsBitmapDecodeEncode, CodecLibrary)
{
    setUp();

    std::ifstream inFile{"basic.bmp", std::ios::binary};
    CHECK_EQUAL(false, !inFile);

    auto decoder {theCodecLibrary->createDecoder(inFile)};
    auto iterator {decoder->createIterator()};
    
    CHECK(iterator.get());
    CHECK_EQUAL(100, iterator->getBitmapHeight());
    CHECK_EQUAL(100, iterator->getBitmapWidth());

    auto encoder {theCodecLibrary->createEncoder(msBmp, std::move(iterator))};

    std::ofstream outFile{"output_basicCopy.bmp", std::ios::binary};
    encoder->encodeToStream(outFile);
    // TODO: file compare input/output

    tearDown();
}

TEST(brightnessDecoratorIterator, CodecLibrary)
{
    setUp();

    std::ifstream inFile{"basic.bmp", std::ios::binary};
    CHECK_EQUAL(false, !inFile);

    auto decoder {theCodecLibrary->createDecoder(inFile)};
    auto iterator {decoder->createIterator()};
    
    CHECK(iterator.get());
    CHECK_EQUAL(100, iterator->getBitmapHeight());
    CHECK_EQUAL(100, iterator->getBitmapWidth());

    auto brightnessIterator = std::make_unique<BrightnessDecorator>(std::move(iterator), 80);
    auto encoder{ theCodecLibrary->createEncoder(msBmp, std::move(brightnessIterator)) };

    std::ofstream outFile{"output_basicBrightnessAdjusted.bmp", std::ios::binary};
    encoder->encodeToStream(outFile);
    // TODO: file compare input/output

    tearDown();
}

TEST(colorInvertDecoratorIterator, CodecLibrary)
{
    setUp();

    std::ifstream inFile{"basic.bmp", std::ios::binary};
    CHECK_EQUAL(false, !inFile);

    auto decoder {theCodecLibrary->createDecoder(inFile)};
    auto iterator {decoder->createIterator()};
    
    CHECK(iterator.get());
    CHECK_EQUAL(100, iterator->getBitmapHeight());
    CHECK_EQUAL(100, iterator->getBitmapWidth());

    auto colorInvertIterator = std::make_unique<ColorInversionDecorator>(std::move(iterator));
    auto encoder{ theCodecLibrary->createEncoder(msBmp, std::move(colorInvertIterator)) };

    std::ofstream outFile{"output_basicColorInvert.bmp", std::ios::binary};
    encoder->encodeToStream(outFile);
    // TODO: file compare input/output

    tearDown();
}

TEST(doubleDecorator, CodecLibrary)
{
    setUp();

    std::ifstream inFile{"basic.bmp", std::ios::binary};
    CHECK_EQUAL(false, !inFile);

    auto decoder {theCodecLibrary->createDecoder(inFile)};
    auto iterator {decoder->createIterator()};
    
    CHECK(iterator.get());
    CHECK_EQUAL(100, iterator->getBitmapHeight());
    CHECK_EQUAL(100, iterator->getBitmapWidth());

    auto cid = std::make_unique<ColorInversionDecorator>(std::move(iterator));
    auto darkenColorInvertIterator = std::make_unique<BrightnessDecorator>(std::move(cid), -50);

    auto encoder {theCodecLibrary->createEncoder(msBmp, std::move(darkenColorInvertIterator))};
        
    std::ofstream outFile{"output_darkInverted.bmp", std::ios::binary};
    encoder->encodeToStream(outFile);
    // TODO: file compare input/output

    tearDown();
}
