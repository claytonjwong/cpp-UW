//
//  SceneReader.hpp
//  EWeek2
//
//  Created by CLAYTON WONG on 8/5/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "Element.hpp"
#include "Layer.hpp"
#include "Scene.hpp"
#include "VectorGraphic.hpp"

namespace Framework
{
    class SceneReader
    {
    public:
        
        static Scene readScene ( const Xml::Element& sceneRoot );

        static Layer readLayer (const Xml::HElement layerRoot );
        
        static PlacedGraphic readPlacedGraphic ( const Xml::HElement placedGraphicRoot );
        
        static VG::HVectorGraphic readVectorGraphic ( const Xml::HElement vectorGraphicRoot );
    };
}
