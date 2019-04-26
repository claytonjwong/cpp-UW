//
//  Scene.hpp
//  EWeek2
//
//  Created by CLAYTON WONG on 8/5/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "Layer.hpp"
#include <list>

//TEST(pushBack, Scene)
//{
//    Framework::Scene scene(800, 600);
//    scene.pushBack(Framework::Layer("Mountains"));
//    scene.pushBack(Framework::Layer("Sea"));
//    scene.pushBack(Framework::Layer("Sky"));
//
//    LayerMatcher matcher = std::for_each(scene.begin(), scene.end(), LayerMatcher());
//    CHECK(matcher.allLayersFound());
//}


namespace Framework
{

    class Scene
    {
    public:

        using LayerCollection = std::list<Layer>;
        using LayerIterator = LayerCollection::const_iterator;

        Scene() = default;
        Scene ( int width, int height );
        
        Scene ( const Scene& src ) = default;
        Scene ( Scene&& src ) = default;
        
        Scene& operator= ( const Scene& src ) = default;
        Scene& operator= ( Scene&& src ) = default;

        int getWidth() const noexcept;
        int getHeight() const noexcept;

        void setWidth ( const int width ) noexcept;
        void setHeight ( const int height ) noexcept;
        
        LayerIterator begin() const noexcept;
        LayerIterator end() const noexcept;
        
        void pushBack ( const Layer& layer ) noexcept;
        void pushBack ( Layer&& layer ) noexcept;
        void remove ( const Layer& target ) noexcept;
        
    private:
    
        int myWidth{ 0 };
        int myHeight{ 0 };
        LayerCollection myLayers;
        
    };
}
