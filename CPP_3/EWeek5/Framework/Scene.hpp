//
//  Scene.hpp
//  EWeek2
//
//  Created by CLAYTON WONG on 8/5/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "Layer.hpp"
#include "BasicCanvas.hpp"
#include <list>

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
        
        void draw ( const BitmapGraphics::HCanvas& canvas ) const;
        
    private:
    
        int myWidth{ 0 };
        int myHeight{ 0 };
        LayerCollection myLayers;
        
    };
    
}  // namespace Framework
