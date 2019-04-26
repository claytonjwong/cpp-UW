//
//  Bitmap.hpp
//  EWeek3
//
//  Created by CLAYTON WONG on 8/9/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "Color.hpp"
#include "IBitmapIterator.hpp"
#include <list>
#include <iostream>

namespace BitmapGraphics
{
    class Bitmap
    {
    public:
    
        using ScanLine = std::list<Color>;
        using PixelIterator = ScanLine::const_iterator;
        using ReversePixelIterator = ScanLine::const_reverse_iterator;
        using ScanLineCollection = std::list<ScanLine>;
        using ScanLineIterator = ScanLineCollection::const_iterator;
    
        Bitmap ( ) = default;
        ~Bitmap ( ) = default;
        Bitmap ( int width, int height, std::istream& inStream=std::cin );
        
        Bitmap ( const Bitmap& src ) = default;
        Bitmap ( Bitmap&& src ) = default;
        
        Bitmap& operator= ( const Bitmap& rhs ) = default;
        Bitmap& operator= ( Bitmap&& rhs ) = default;
        
        int getWidth ( ) const noexcept;
        int getHeight ( ) const noexcept;
        int getNumberOfPadBytes ( ) const noexcept;
        
        ScanLineIterator begin ( ) const noexcept;
        ScanLineIterator end ( ) const noexcept;
        HBitmapIterator createIterator ( ) const noexcept;
    
        void write ( std::ostream& outStream ) const;
        
    private:
        
        int myWidth{ 0 };
        int myHeight{ 0 };
        int myPaddingSize{ 0 };
        ScanLineCollection myScanLines;
        
        void readScanLine ( std::istream& inStream ) noexcept;
        void writeScanLine ( std::ostream& outStream, const ScanLine& scanLine ) const;
    
        void readPadding ( std::istream& inStream ) const noexcept;
        void writePadding ( std::ostream& outStream ) const noexcept;

    };
    
    std::ostream& operator<< ( std::ostream& outStream, const Bitmap& rhs );
    
} // namespace BitmapGraphics
