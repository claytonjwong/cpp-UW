//
//  Layer.hpp
//  EWeek2
//
//  Created by CLAYTON WONG on 8/5/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "PlacedGraphic.hpp"
#include <list>

namespace Framework
{

    class Layer
    {
    private:
    
        using PlacedGraphicCollection = std::list<PlacedGraphic>;
        
    public:
        
        using PlacedGraphicIterator = PlacedGraphicCollection::const_iterator;

        Layer ( const std::string& alias );
        
        Layer ( const Layer& src ) = default;
        Layer ( Layer&& src ) = default;
        
        Layer& operator= ( const Layer& rhs ) = default;
        Layer& operator= ( Layer&& rhs ) = default;
        
        const std::string& getAlias() const noexcept;
        
        PlacedGraphicIterator begin() const noexcept;
        PlacedGraphicIterator end() const noexcept;
        
        template <typename Container>
        void pushBack ( Container&& placedGraphic ) noexcept
        {
            myGraphics.emplace_back(  std::forward<Container>( placedGraphic )  );
        }
        
        void remove ( const PlacedGraphic& placedGraphic ) noexcept;
        
        void draw ( const BitmapGraphics::HCanvas& canvas ) const;
        
        bool operator== ( const Layer& rhs ) const noexcept;
        bool operator!= ( const Layer& rhs ) const noexcept;
        
    private:
    
        std::string myAlias;
        PlacedGraphicCollection myGraphics;
    };
    
} // namespace Framework
