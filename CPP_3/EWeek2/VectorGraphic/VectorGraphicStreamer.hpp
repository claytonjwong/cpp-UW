//
//  VectorGraphicStreamer.hpp
//  EWeek1
//
//  Created by CLAYTON WONG on 7/16/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "Element.hpp"
#include "VectorGraphic.hpp"
#include <sstream>

namespace VG {
    
    class VectorGraphicStreamer
    {
    public:
    
        const static VectorGraphic getVectorGraphicFromFile(const std::string& filename);
        static void setVectorGraphicToFile(const VectorGraphic& vg, const std::string& filename);
    
        static std::stringstream getStreamFromFile(const std::string& filename);
        const static Xml::HElement getHandleFromStream(std::stringstream& ss);
        const static VectorGraphic getVectorGraphicFromHandle(const Xml::HElement root);
        
        
        const static Xml::HElement getHandleFromVectorGraphic(const VectorGraphic& vg);
        static std::stringstream getStreamFromHandle(const Xml::HElement root);
        static void writeToFileFromStream(const std::string& filename, std::stringstream& ss);
    };
}


