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
    
    void PlacedGraphic::setPlacementPoint(const VG::Point& placement)
    {
        myPlacementPoint = placement;
    }

	void PlacedGraphic::setPlacementPoint(VG::Point&& placement)
	{
		myPlacementPoint = placement;
	}
    
    const VG::Point& PlacedGraphic::getPlacementPoint() const
    {
        return myPlacementPoint;
    }
    
    void PlacedGraphic::setGraphic(const VG::VectorGraphic& graphic)
    {
        myGraphic = graphic;
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

