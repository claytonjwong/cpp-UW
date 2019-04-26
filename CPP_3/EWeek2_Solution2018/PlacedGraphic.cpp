#include "PlacedGraphic.h"
#include <memory>

namespace Framework
{
    PlacedGraphic::PlacedGraphic() :
		myGraphic{}, myPlacementPoint{ 0, 0 }
    {
    }
    
    PlacedGraphic::PlacedGraphic(const VG::Point& placement,
                                 const VG::VectorGraphic& graphic) :
		myPlacementPoint{ placement },
		myGraphic{ graphic }
    {
    }
    
    const VG::Point& PlacedGraphic::getPlacementPoint() const
    {
        return myPlacementPoint;
    }
    
    const VG::VectorGraphic& PlacedGraphic::getGraphic() const
    {
        return myGraphic;
    }
    
    bool operator==(const PlacedGraphic& lhs, const PlacedGraphic& rhs)
    {
        return (lhs.getPlacementPoint() == rhs.getPlacementPoint()) &&
               (lhs.getGraphic() == rhs.getGraphic());
    }
    
    bool operator!=(const PlacedGraphic& lhs, const PlacedGraphic& rhs)
    {
        return !(lhs == rhs);
    }
}

