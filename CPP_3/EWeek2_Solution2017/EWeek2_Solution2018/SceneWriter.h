#pragma once
#include "Element.h"

namespace Framework { class Scene; }

namespace Framework
{
    class SceneWriter
    {
    public:
        static Xml::HElement writeScene(const Scene& scene);
    };
}
