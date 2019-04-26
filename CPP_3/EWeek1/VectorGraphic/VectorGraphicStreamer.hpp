//
//  VectorGraphicStreamer.hpp
//  EWeek1
//
//  Created by CLAYTON WONG on 7/16/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include <sstream>
#include "VectorGraphic.hpp"

namespace VG {
    
    class VectorGraphicStreamer {
    public:
        static void fromFile(const std::string& filename, VectorGraphic& vg);
        static void fromStream(std::stringstream& sstr, VectorGraphic& vg);
        static void toFile(const std::string& filename, const VectorGraphic& vg);
        static void toStream(std::stringstream& ss,const VectorGraphic& vg);
    };
}

