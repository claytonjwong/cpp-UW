#pragma once

#include "Point.h"
#include "VectorGraphic.h"

namespace Framework
{
    class PlacedGraphic
    {
    public:
        PlacedGraphic(
            const VG::Point& placement,
            VG::VectorGraphic graphic);

        PlacedGraphic();

        void setPlacementPoint(const VG::Point& placement);
        const VG::Point& getPlacementPoint() const;

        void setGraphic(VG::VectorGraphic graphic);
        const VG::VectorGraphic& getGraphic() const;

    private:
        VG::Point myPlacementPoint;
        VG::VectorGraphic myGraphic;
    };

    bool operator==(const PlacedGraphic& lhs, const PlacedGraphic& rhs);
    bool operator!=(const PlacedGraphic& lhs, const PlacedGraphic& rhs);
}
