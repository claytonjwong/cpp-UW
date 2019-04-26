//
//  Layer.cpp
//  EWeek2
//
//  Created by CLAYTON WONG on 8/5/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "Layer.hpp"

namespace Framework
{
    
    
    Layer::Layer ( const std::string& alias ) :
    myAlias{ alias }
    {
    }
    

    const std::string& Layer::getAlias() const noexcept
    {
        return myAlias;
    }
    

    Layer::PlacedGraphicIterator Layer::begin() const noexcept
    {
        return myGraphics.begin();
    }

    
    Layer::PlacedGraphicIterator Layer::end() const noexcept
    {
        return myGraphics.end();
    }
    
    
    void Layer::remove(const PlacedGraphic& placedGraphic) noexcept
    {
        myGraphics.remove( placedGraphic );
    }
    
    
    void Layer::draw ( const BitmapGraphics::HCanvas& canvas ) const
    {
        for ( const auto& graphic: myGraphics )
        {
            graphic.draw( canvas );
        }
    }
    
    
    bool Layer::operator== ( const Layer& rhs ) const noexcept
    {
        return ( myAlias == rhs.myAlias )
            && ( myGraphics == rhs.myGraphics );
    }

    
    bool Layer::operator!= ( const Layer& rhs ) const noexcept
    {
        return ! ( *this == rhs );
    }
    
    
} // namespace Framework
