#pragma once

#include "IBitmapEncoder.h"

namespace BitmapGraphics
{
    class WindowsBitmapEncoder : public IBitmapEncoder
    {
    public:
        explicit WindowsBitmapEncoder(HBitmapIterator bitmapIterator);

        // This constructor is used to create the prototype.
        // myBitmapIterator will be a nullptr.
        // If a client attempts to use an encoder with an
        // nullptr iterator, we'll throw an exception.
        WindowsBitmapEncoder() = default;

        HBitmapEncoder clone(HBitmapIterator bitmapIterator) override;

        void encodeToStream(std::ostream& destinationStream) override;

        std::string getMimeType() const override;

    private:
        HBitmapIterator myBitmapIterator;

        void writePadBytes(std::ostream& destinationStream) const;
    };
}