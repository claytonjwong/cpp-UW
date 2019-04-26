//
//  VectorGraphic.cpp
//  EWeek1
//
//  Created by CLAYTON WONG on 7/16/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include <exception>
#include <list>
#include "VectorGraphic.hpp"
#include "Point.hpp"

using namespace std;

namespace VG {
    
    void VectorGraphic::addPoint(const Point& point)
    {
        myPath.push_back(point);
    }
    
    void VectorGraphic::addPoint(Point&& point)
    {
        myPath.emplace_back(std::forward<Point>(point));
    }
    
    void VectorGraphic::erasePoint(int index)
    {
        if ( index >= 0 && static_cast<size_t>(index) < getPointCount() )
        {
            auto pos = myPath.begin() + index;
            myPath.erase(pos);
        }
        else
        {
            throw out_of_range{"index out of range"};
        }
    }
    
    void VectorGraphic::removePoint(const Point& point)
    {
        auto end_pos = remove(myPath.begin(), myPath.end(), point);
        if ( end_pos != myPath.end() )
        {
            myPath.erase(end_pos, myPath.end());
        }
        else
        {
            throw invalid_argument("the point to remove does not appear in the vectorgraphic.");
        }
    }
    
    void VectorGraphic::openShape() noexcept
    {
        myShapeStyle = ShapeStyle::Open;
    }
    
    void VectorGraphic::closeShape() noexcept
    {
         myShapeStyle = ShapeStyle::Close;
    }
    
    bool VectorGraphic::isClosed() const noexcept
    {
        return !isOpen();
        
    }
    bool VectorGraphic::isOpen() const noexcept
    {
        return myShapeStyle==ShapeStyle::Open;
    }

    
    Point VectorGraphic::getPoint(int index) const
    {
        return myPath.at(index); // throws std::out_of_range if index out of range
    }
    
    int VectorGraphic::getHeight() const noexcept
    {
        if ( getPointCount() > 0 )
        {
            auto [minIt, maxIt] = minmax_element(myPath.begin(), myPath.end(),
                [](const Point& lhs, const Point& rhs) {return lhs.getY() < rhs.getY();  });
            return maxIt->getY() - minIt->getY();
        }
        else
        {
            return 0;
        }
    }
    
    int VectorGraphic::getWidth() const noexcept
    {
        if ( getPointCount() > 0 )
        {
            auto [minIt, maxIt] = minmax_element(myPath.begin(), myPath.end(),
                [](const Point& lhs, const Point& rhs) {return lhs.getX() < rhs.getX();  });
            return maxIt->getX() - minIt->getX();
        }
        else
        {
            return 0;
        }
    }
    
    bool VectorGraphic::operator==(const VectorGraphic& rhs){
        return myShapeStyle==rhs.myShapeStyle
            && getPointCount()==rhs.getPointCount()
            && equal(myPath.begin(),myPath.end(),rhs.myPath.begin());
    }
    
    bool VectorGraphic::operator!=(const VectorGraphic& rhs){
        return !(*this==rhs);
    }
    

    
    ostream& operator<<(ostream& os, const VectorGraphic& rhs){
        os << "<VectorGraphic closed=\"" << (rhs.isClosed() ? "true" : "false") << "\">" << endl;
        for (int i=0,N=(int)rhs.getPointCount(); i<N; ++i)
            os << "  " << rhs.getPoint(i) << endl;
        os << "</VectorGraphic>";
        return os;
    }
}
