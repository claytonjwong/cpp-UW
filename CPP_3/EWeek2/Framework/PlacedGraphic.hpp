//
//  PlacedGraphic.hpp
//  EWeek2
//
//  Created by CLAYTON WONG on 8/4/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "Point.hpp"
#include "VectorGraphic.hpp"

namespace Framework
{
    class PlacedGraphic
    {
    public:
        
        PlacedGraphic();
        PlacedGraphic ( const VG::Point& point, const VG::HVectorGraphic& graphic );

        ~PlacedGraphic() = default;
        
        PlacedGraphic ( const PlacedGraphic& src ) = default;
        PlacedGraphic ( PlacedGraphic&& src ) = default;
        
        PlacedGraphic& operator= ( const PlacedGraphic& rhs ) = default;
        PlacedGraphic& operator= ( PlacedGraphic&& rhs ) = default;

        const VG::Point& getPlacementPoint() const noexcept;
        const VG::VectorGraphic& getGraphic() const noexcept;
    
        void setPlacementPoint ( const VG::Point& point ) noexcept;
        void setPlacementPoint ( VG::Point&& point ) noexcept;
        void setGraphic ( const VG::HVectorGraphic& graphic ) noexcept;
        void setGraphic ( VG::HVectorGraphic&& graphic ) noexcept;
        
    private:
        
        VG::Point myPlacementPoint;
        VG::HVectorGraphic myGraphic;
    };
    
    bool operator== ( const PlacedGraphic& lhs, const PlacedGraphic& rhs );
    bool operator!= ( const PlacedGraphic& lhs, const PlacedGraphic& rhs );
}
