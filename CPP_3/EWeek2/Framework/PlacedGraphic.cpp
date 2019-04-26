//
//  PlacedGraphic.cpp
//  EWeek2
//
//  Created by CLAYTON WONG on 8/4/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "PlacedGraphic.hpp"

using namespace VG;
using namespace std;

namespace Framework
{
    PlacedGraphic::PlacedGraphic() :
    myPlacementPoint{ std::move(Point{0,0}) },
    myGraphic{ make_shared<VectorGraphic>() }
    {
    }

    PlacedGraphic::PlacedGraphic ( const Point& placement, const HVectorGraphic& graphic ) :
    myPlacementPoint{ placement },
    myGraphic{ graphic }
    {
        if ( myGraphic.get() == nullptr )
        {
            throw runtime_error{ "null vector graphic not allowed" };
        }
    }

    const Point& PlacedGraphic::getPlacementPoint() const noexcept
    {
        return myPlacementPoint;
    }
    
    const VG::VectorGraphic& PlacedGraphic::getGraphic() const noexcept
    {
        return *myGraphic;
    }

    void PlacedGraphic::setPlacementPoint ( const Point& placement ) noexcept
    {
        myPlacementPoint = placement;
    }

    void PlacedGraphic::setPlacementPoint ( Point&& placement ) noexcept
    {
        myPlacementPoint = std::move( placement );
    }
    
    void PlacedGraphic::setGraphic ( const HVectorGraphic& graphic ) noexcept
    {
        if ( graphic.get() != nullptr )
        {
            myGraphic = graphic;
        }
        else
        {
            throw runtime_error{ "null vector graphic not allowed" };
        }
    }
    
    void PlacedGraphic::setGraphic ( HVectorGraphic&& graphic ) noexcept
    {
        myGraphic = std::move( graphic );
    }
    
    bool operator== ( const PlacedGraphic& lhs, const PlacedGraphic& rhs )
    {
        return ( lhs.getPlacementPoint() == rhs.getPlacementPoint() )
            && ( lhs.getGraphic() == rhs.getGraphic() );
    }
    
    bool operator!= ( const PlacedGraphic& lhs, const PlacedGraphic& rhs )
    {
        return ! ( lhs == rhs );
    }

}
