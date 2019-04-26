//
//  WindowsBitmapHeader.hpp
//  EWeek3
//
//  Created by CLAYTON WONG on 8/9/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include "Common.hpp"
#include "Byte.hpp"
#include "Word.hpp"
#include "DoubleWord.hpp"
#include <iostream>

namespace BitmapGraphics
{

    class WindowsBitmapHeader
    {
    public:
    
        WindowsBitmapHeader() = default;
        ~WindowsBitmapHeader() = default;
        explicit WindowsBitmapHeader ( std::istream& inStream );
        
        WindowsBitmapHeader ( const WindowsBitmapHeader& src ) = default;
        WindowsBitmapHeader ( WindowsBitmapHeader&& src ) = default;
        
        WindowsBitmapHeader& operator= ( const WindowsBitmapHeader& rhs ) = default;
        WindowsBitmapHeader& operator= ( WindowsBitmapHeader&& rhs ) = default;
        
        void read ( std::istream& inStream );
        void readFileHeader ( std::istream& inStream );
        void readInfoHeader ( std::istream& inStream );
        
        int getBitmapWidth() const noexcept;
        int getBitmapHeight() const noexcept;
        int getFileSize() const noexcept;
        
        void write ( std::ostream& outStream ) const;
        void writeFileHeader ( std::ostream& outStream ) const;
        void writeInfoHeader ( std::ostream& outStream ) const;
        
    private:
        
        Binary::DoubleWord myFileSize{ 0 };
        Binary::DoubleWord myRawImageOffset{ 0 };
        Binary::DoubleWord myWidth{ 0 };
        Binary::DoubleWord myHeight{ 0 };
        Binary::DoubleWord myCompressionMethod{ 0 };
        Binary::DoubleWord myImageSize{ 0 };
        Binary::DoubleWord myHorizontalPixelsPerMeter{ 0 };
        Binary::DoubleWord myVerticalPixelsPerMeter{ 0 };
        
        //
        // file header: https://en.wikipedia.org/wiki/BMP_file_format#Bitmap_file_header
        //
        static constexpr int FILE_HEADER_SIZE { 14 };
        
        static const Binary::Byte firstIdentifier;
        static const Binary::Byte secondIdentifier;
        // << myFileSize >>
        static const Binary::DoubleWord reserved;
        // << myRawImageOffset >>

        //
        // info header: https://en.wikipedia.org/wiki/BMP_file_format#DIB_header_(bitmap_information_header)
        //
        static constexpr int INFO_HEADER_SIZE { 40 };
        
        static const Binary::DoubleWord infoHeaderSize;
        // << myWidth >>
        // << myHeight >>
        static const Binary::Word colorPlanes;
        static const Binary::Word colorDepth;
        static const Binary::DoubleWord compressionMethod;
        // << myImageSize >>
        // << myHorizontalPixelsPerMeter >>
        // << myVerticalPixelsPerMeter >>
        static const Binary::DoubleWord numberOfColors;
        static const Binary::DoubleWord numberOfImportantColors;
    };
}
