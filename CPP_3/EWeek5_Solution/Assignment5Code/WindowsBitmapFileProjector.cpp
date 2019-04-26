#include "WindowsBitmapFileProjector.h"
#include "Bitmap.h"
#include <fstream>
#include <memory>
#include <stack>
#include <utility>

namespace
{
    using namespace BitmapGraphics;

    HBitmap flipCanvasIntoBitmap(const HCanvas& canvas)
    {
        auto canvasIterator = canvas->createBitmapIterator();

        std::stack<Bitmap::ScanLine> scanLineStack;
        while (!canvasIterator->isEndOfImage())
        {
            Bitmap::ScanLine scanLine;

            while (!canvasIterator->isEndOfScanLine())
            {
                scanLine.push_back(canvasIterator->getColor());
                canvasIterator->nextPixel();
            }

            scanLineStack.push(scanLine);
            canvasIterator->nextScanLine();
        }

        auto bitmap = std::make_unique<Bitmap>(canvasIterator->getBitmapWidth(), canvasIterator->getBitmapHeight());
        while (!scanLineStack.empty())
        {
            bitmap->addScanLine(scanLineStack.top());
            scanLineStack.pop();
        }

        return bitmap;
    }
}

namespace BitmapGraphics
{
    WindowsBitmapFileProjector::WindowsBitmapFileProjector(
        std::string filename,
        CodecLibrary codecLibrary)
        : myFilename(std::move(filename)),
        myCodecLibrary(std::move(codecLibrary))
    {
    }

    void WindowsBitmapFileProjector::projectCanvas(const HCanvas& canvas)
    {
        auto bitmapP = flipCanvasIntoBitmap(canvas);
        auto encoder = myCodecLibrary.createEncoder("image/x-ms-bmp", bitmapP->createIterator());
        std::ofstream outputStream(myFilename.c_str(), std::ios::binary);
        encoder->encodeToStream(outputStream);
    }
}