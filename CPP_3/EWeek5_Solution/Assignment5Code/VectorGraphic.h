#pragma once

#include "Point.h"
#include "IStroke.h"
#include <memory>
#include <vector>

namespace BitmapGraphics { class ICanvas; }

namespace VG
{
    using Points = std::vector<Point>;

    class VectorGraphic
    {
    public:
        VectorGraphic();

        void addPoint(const Point& p);
        void removePoint(const Point& p);
        void erasePoint(int index);

        void openShape();
        void closeShape();

        bool isOpen() const;
        bool isClosed() const;

        int getWidth() const;
        int getHeight() const;

        size_t getPointCount() const;
        Point getPoint(int index) const;

        void setStroke(BitmapGraphics::HStroke stroke);

        void draw(BitmapGraphics::HCanvas& canvas, const Point& offset) const;

        bool operator==(const VectorGraphic& rhs) const;
        bool operator!=(const VectorGraphic& rhs) const;

        friend std::ostream& operator<<(std::ostream& os, const VectorGraphic& vg);

    private:
        Points myPath;
        BitmapGraphics::HStroke myStroke;

        enum class ShapeStyle { Open, Closed } myShapeStyle;

        static void renderLine(
            BitmapGraphics::HCanvas& canvas,
            const BitmapGraphics::HPen& pen,
            const Point& p1,
            const Point& p2);
    };

    using HVectorGraphic = std::unique_ptr<VectorGraphic>;
}
