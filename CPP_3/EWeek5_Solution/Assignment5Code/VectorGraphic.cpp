#include "VectorGraphic.h"
#include "LineIterator.h"

#include <algorithm>

namespace VG
{
    VectorGraphic::VectorGraphic() :
        myShapeStyle{ ShapeStyle::Closed }
    {
    }

    bool VectorGraphic::isOpen() const
    {
        return myShapeStyle == ShapeStyle::Open;
    }

    bool VectorGraphic::isClosed() const
    {
        return myShapeStyle == ShapeStyle::Closed;
    }

    void VectorGraphic::openShape()
    {
        myShapeStyle = ShapeStyle::Open;
    }

    void VectorGraphic::closeShape()
    {
        myShapeStyle = ShapeStyle::Closed;
    }

    int VectorGraphic::getWidth() const
    {
        if (!myPath.empty())
        {
            auto xMin = myPath[0].getX();
            auto xMax = myPath[0].getX();

            for (auto point : myPath)
            {
                xMax = std::max(point.getX(), xMax);
                xMin = std::min(point.getX(), xMin);
            }

            return xMax - xMin;
        }

        return 0;
    }

    int VectorGraphic::getHeight() const
    {
        if (!myPath.empty())
        {
            auto yMin = myPath[0].getY();
            auto yMax = myPath[0].getY();

            for (auto point : myPath)
            {
                yMax = std::max(point.getY(), yMax);
                yMin = std::min(point.getY(), yMin);
            }

            return yMax - yMin;
        }

        return 0;
    }

    size_t VectorGraphic::getPointCount() const
    {
        return myPath.size();
    }

    void VectorGraphic::addPoint(const Point& p)
    {
        myPath.push_back(p);
    }

    Point VectorGraphic::getPoint(int index) const
    {
        return myPath.at(index); // throws std::out_of_range if index out of range
    }

    void VectorGraphic::removePoint(const Point& p)
    {
        myPath.erase(std::remove(myPath.begin(), myPath.end(), p), myPath.end());
    }

    void VectorGraphic::erasePoint(int index)
    {
        if (index >= 0 && static_cast<std::size_t>(index) < myPath.size())
        {
            const auto pos = myPath.begin() + index;
            myPath.erase(pos);
        }
        else
        {
            throw std::out_of_range{ "index out of range" };
        }
    }

    bool VectorGraphic::operator==(const VectorGraphic& rhs) const
    {
        return myPath == rhs.myPath && myShapeStyle == rhs.myShapeStyle;
    }

    bool VectorGraphic::operator!=(const VectorGraphic& rhs) const
    {
        return !operator==(rhs);
    }

    void VectorGraphic::setStroke(BitmapGraphics::HStroke stroke)
    {
        myStroke = std::move(stroke);
    }

    void VectorGraphic::draw(BitmapGraphics::HCanvas& canvas, const Point& offset) const
    {
        const auto pen = myStroke->createPen();
        auto startPoint = myPath[0];

        for (Points::size_type i = 1; i < myPath.size(); ++i)
        {
            renderLine(canvas, pen, startPoint + offset, myPath[i] + offset);
            startPoint = myPath[i];
        }

        if (myShapeStyle == ShapeStyle::Closed)
        {
            renderLine(canvas, pen, startPoint + offset, myPath[0] + offset);
        }
    }

    void VectorGraphic::renderLine(
        BitmapGraphics::HCanvas& canvas,
        const BitmapGraphics::HPen& pen,
        const Point& p1,
        const Point& p2)
    {
        LineIterator line(p1, p2);

        do
        {
            pen->drawPoint(canvas, line.getCurrentPoint());
            line.nextPoint();
        } while (!line.isEnd());
    }

    std::ostream& operator<<(std::ostream& os, const VectorGraphic& vg)
    {
        for (const auto& p: vg.myPath)
        {
            os << p << ",";
        }

        os << ", ";

        switch (vg.myShapeStyle)
        {
        case VectorGraphic::ShapeStyle::Open:
            os << "Open";
            break;
        case VectorGraphic::ShapeStyle::Closed:
            os << "Closed";
            break;
        default:
            break;
        }

        return os;
    }
}
