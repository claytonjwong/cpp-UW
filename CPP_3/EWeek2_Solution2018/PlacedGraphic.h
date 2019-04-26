#pragma once

#include "Point.h"
#include "VectorGraphic.h"

namespace Framework
{
    
    class PlacedGraphic
    {
    public:
        PlacedGraphic(const VG::Point& placement,
                      const VG::VectorGraphic& graphic);
        
        PlacedGraphic();

		PlacedGraphic(const PlacedGraphic& other) = default;
		PlacedGraphic(PlacedGraphic&& other) = default;

		PlacedGraphic & operator=(const PlacedGraphic&) = default;
		PlacedGraphic & operator=(PlacedGraphic&&) = default;

		template<class P> void setPlacementPoint(P&& p)
		{
			myPlacementPoint = std::forward<P>(p);
		}

        const VG::Point& getPlacementPoint() const;

		template<class VG> void setGraphic(VG&& graphic)
		{
			myGraphic = std::forward<VG>(graphic);
		}

        const VG::VectorGraphic& getGraphic() const;
        
    private:
        VG::Point myPlacementPoint;
        VG::VectorGraphic myGraphic;
    };
    
    bool operator==(const PlacedGraphic& lhs, const PlacedGraphic& rhs);
    bool operator!=(const PlacedGraphic& lhs, const PlacedGraphic& rhs);
}
