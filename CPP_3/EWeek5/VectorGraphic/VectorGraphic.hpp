//
//  VectorGraphic.hpp
//  EWeek1
//
//  Created by CLAYTON WONG on 7/16/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "Point.hpp"
#include "IStroke.hpp"
#include "ICanvas.hpp"
#include "LineIterator.hpp"
#include <vector>
#include <memory>


namespace VG {

    class VectorGraphic;
    using HVectorGraphic = std::shared_ptr< VectorGraphic >;
    using Path = std::vector< Point >;
    using PathIterator = Path::const_iterator;
    

    class VectorGraphic {
    public:
    
        VectorGraphic();
        ~VectorGraphic() = default;
        
        VectorGraphic ( const VectorGraphic& src ) = default;
        VectorGraphic ( VectorGraphic&& src ) = default;
        
        VectorGraphic& operator= ( const VectorGraphic& rhs ) = default;
        VectorGraphic& operator= ( VectorGraphic&& rhs ) = default;

        Point getPoint ( int index ) const;
        size_t getPointCount() const noexcept;
        
        BitmapGraphics::HStroke getStroke ( ) const noexcept;
        void setStroke ( BitmapGraphics::HStroke stroke ) noexcept;
        
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
        
        void draw ( BitmapGraphics::HCanvas canvas, const Point& offset ) const;

        friend bool operator== ( const VectorGraphic& lhs, const VectorGraphic& rhs );
        friend bool operator!= ( const VectorGraphic& lhs, const VectorGraphic& rhs );
        
    private:
    
        Path myPath;
        
        enum class ShapeStyle { Open, Close } myShapeStyle;
        
        BitmapGraphics::HStroke myStroke;
        
    };
    
} // namespace VG


