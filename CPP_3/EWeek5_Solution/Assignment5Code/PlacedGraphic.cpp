#include "PlacedGraphic.h"
#include <memory>
#include <utility>

namespace Framework
{
    PlacedGraphic::PlacedGraphic() :
        myPlacementPoint{ 0, 0 }
    {
    }

    PlacedGraphic::PlacedGraphic(
        const VG::Point& placement,
        VG::VectorGraphic graphic) :
        myPlacementPoint{ placement },
        myGraphic{std::move(graphic)}
    {
    }

    void PlacedGraphic::setPlacementPoint(const VG::Point& placement)
    {
        myPlacementPoint = placement;
    }

    const VG::Point& PlacedGraphic::getPlacementPoint() const
    {
        return myPlacementPoint;
    }

    void PlacedGraphic::setGraphic(VG::VectorGraphic graphic)
    {
        myGraphic = std::move(graphic);
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

