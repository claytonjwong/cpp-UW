#pragma once

#include "IProjector.h"
#include "CodecLibrary.h"

namespace BitmapGraphics
{
    class WindowsBitmapFileProjector : public IProjector
    {
    public:
        WindowsBitmapFileProjector(std::string filename, CodecLibrary codecLibrary);
        void projectCanvas(const HCanvas& canvas) override;
        
    private:
        std::string myFilename;
        CodecLibrary myCodecLibrary;
    };
}
