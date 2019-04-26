#pragma once

namespace Xml { class Element; }
namespace Framework { class Scene; }

namespace Framework
{
    class SceneReader
    {
    public:
        static Scene readScene(const Xml::Element& rootElement);
    };
}
