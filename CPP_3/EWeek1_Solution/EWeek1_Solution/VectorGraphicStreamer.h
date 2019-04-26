#pragma once

#include "VectorGraphic.h"
#include <iosfwd>

namespace VG
{
    
    class VectorGraphicStreamer
    {
    public:
        static VectorGraphic fromXml(std::istream& xmlSourceStream);
        
        static void toXml(const VectorGraphic& vg,
                          std::ostream& os);
    };
    
}