//
//  VectorGraphic.hpp
//  EWeek1
//
//  Created by CLAYTON WONG on 7/16/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#ifndef VectorGraphic_hpp
#define VectorGraphic_hpp

#include <vector>
#include "Point.hpp"

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

    using Points=std::vector<Point>;

    class VectorGraphic {
    public:
        VectorGraphic() : myShapeStyle{ShapeStyle::Close} {}
        ~VectorGraphic()=default;
        VectorGraphic(VectorGraphic& src)=default;
        VectorGraphic(VectorGraphic&& src)=default;
        VectorGraphic& operator=(VectorGraphic& rhs)=default;
        VectorGraphic& operator=(VectorGraphic&& rhs)=default;

        Point getPoint(int index) const;
        size_t getPointCount() const noexcept { return myPath.size(); }

        bool operator==(const VectorGraphic& rhs);
        bool operator!=(const VectorGraphic& rhs);
        
        void addPoint(const Point& rhs);
        void addPoint(Point&& rhs);
        
        void erasePoint(int index);
        void removePoint(const Point& rhs);
        
        void openShape() noexcept;
        void closeShape() noexcept;

        bool isClosed() const noexcept;
        bool isOpen() const noexcept;

        int getHeight() const noexcept;
        int getWidth() const noexcept;

    private:
        Points myPath;
        
        enum class ShapeStyle { Open, Close } myShapeStyle;
    };
    
    std::ostream& operator<<(std::ostream& os, const VectorGraphic& rhs);
}

#endif /* VectorGraphic_hpp */
