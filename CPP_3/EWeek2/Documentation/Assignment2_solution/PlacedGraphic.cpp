#include "PlacedGraphic.h"

namespace Framework
{
    PlacedGraphic::PlacedGraphic() :
    myGraphic(std::make_shared<VG::VectorGraphic>())
    {
    }
    
    PlacedGraphic::PlacedGraphic(const VG::Point& placement,
                                 const VG::HVectorGraphic& graphic) :
    myPlacementPoint(placement),
    myGraphic(graphic)
    {
        if (myGraphic.get() == nullptr)
        {
            throw std::runtime_error("Null vector graphic not allowed");
        }
    }
    
    void PlacedGraphic::setPlacementPoint(const VG::Point& placement)
    {
        myPlacementPoint = placement;
    }
    
    const VG::Point& PlacedGraphic::getPlacementPoint() const
    {
        return myPlacementPoint;
    }
    
    void PlacedGraphic::setGraphic(const VG::HVectorGraphic& graphic)
    {
        if (graphic.get() == nullptr)
        {
            throw std::runtime_error("Null vector graphic not allowed");
        }
        myGraphic = graphic;
    }
    
    const VG::VectorGraphic& PlacedGraphic::getGraphic() const
    {
        return *myGraphic;
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

