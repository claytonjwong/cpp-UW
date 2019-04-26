//
//  VectorGraphic.hpp
//  EWeek1
//
//  Created by CLAYTON WONG on 7/16/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "Point.hpp"
#include <vector>
#include <memory>

/*
 TEST(removePoint, VectorGraphic)
 {
 VG::VectorGraphic vg;
 vg.addPoint(VG::Point{1, 1});
 vg.addPoint(VG::Point{2, 2});
 vg.removePoint(VG::Point{1, 1});
 
 CHECK_EQUAL(1, vg.getPointCount());
 CHECK_EQUAL(VG::Point(2, 2), vg.getPoint(0));
 }
 */

namespace VG {

    class VectorGraphic;
    using HVectorGraphic = std::shared_ptr<VectorGraphic>;
    using Path = std::vector<Point>;
    using PathIterator = Path::const_iterator;

    class VectorGraphic {
    public:
    
        friend bool operator== ( const VectorGraphic& lhs, const VectorGraphic& rhs );
        friend bool operator!= ( const VectorGraphic& lhs, const VectorGraphic& rhs );

    
        VectorGraphic();
        ~VectorGraphic() = default;
        
        VectorGraphic ( const VectorGraphic& src ) = default;
        VectorGraphic ( VectorGraphic&& src ) = default;
        
        VectorGraphic& operator= ( const VectorGraphic& rhs ) = default;
        VectorGraphic& operator= ( VectorGraphic&& rhs ) = default;

        Point getPoint ( int index ) const;
        size_t getPointCount() const noexcept;
        
        void addPoint ( const Point& point );
        void addPoint ( Point&& point );
        
        void erasePoint ( int index );
        void removePoint ( const Point& target );
        
        void openShape() noexcept;
        void closeShape() noexcept;

        bool isClosed() const noexcept;
        bool isOpen() const noexcept;

        int getHeight() const noexcept;
        int getWidth() const noexcept;
        
        PathIterator begin() const noexcept;
        PathIterator end() const noexcept;

    private:
    
        Path myPath;
        
        enum class ShapeStyle { Open, Close } myShapeStyle;
    };
    

}


