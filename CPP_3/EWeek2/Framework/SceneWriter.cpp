//
//  SceneWriter.cpp
//  EWeek2
//
//  Created by CLAYTON WONG on 8/5/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "SceneWriter.hpp"

namespace Framework
{
    Xml::HElement SceneWriter::writeScene(const Scene& scene)
    {
        Xml::HElement result = Xml::Element::make_HElement( scene );
        return result;
    }
}
