//
//  Scene.cpp
//  EWeek2
//
//  Created by CLAYTON WONG on 8/5/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "Scene.hpp"

namespace Framework
{
    Scene::Scene(int width, int height) :
    myWidth{ width },
    myHeight{ height }
    {
    }

    int Scene::getWidth() const noexcept
    {
        return myWidth;
    }

    int Scene::getHeight() const noexcept
    {
        return myHeight;
    }

    void Scene::setWidth ( const int width ) noexcept
    {
        myWidth = width;
    }

    void Scene::setHeight ( const int height ) noexcept
    {
        myHeight = height;
    }

    Scene::LayerIterator Scene::begin() const noexcept
    {
        return myLayers.begin();
    }

    Scene::LayerIterator Scene::end() const noexcept
    {
        return myLayers.end();
    }

    void Scene::pushBack ( const Layer& layer ) noexcept
    {
        myLayers.push_back( layer );
    }
    
    void Scene::pushBack ( Layer&& layer ) noexcept
    {
        myLayers.emplace_back(  std::move( layer )  );
    }

    void Scene::remove ( const Layer& target ) noexcept
    {
        myLayers.remove( target );
    }
}
