//
//  WindowsBitmapHeader.cpp
//  EWeek3
//
//  Created by CLAYTON WONG on 8/9/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "WindowsBitmapHeader.hpp"
#include <iostream>

using namespace Binary;
using namespace std;

namespace BitmapGraphics
{
    WindowsBitmapHeader::WindowsBitmapHeader ( istream& inStream )
    {
        read( inStream );
    }
    
    
    void WindowsBitmapHeader::read ( istream& inStream )
    {
        readFileHeader( inStream );
        readInfoHeader( inStream );
    
        auto rawImagePos = static_cast<streampos>( myRawImageOffset );
    
        if ( rawImagePos != inStream.tellg() ) // skip past "other" headers
        {
            inStream.seekg( rawImagePos );
        }
        
        verifyEquality( rawImagePos, inStream.tellg(),
            "actual raw image position referred to via myRawImageOffset" );
    }
    
    
    //
    // order of read() matters based on the file header!
    //
    // file header: https://en.wikipedia.org/wiki/BMP_file_format#Bitmap_file_header
    //
    void WindowsBitmapHeader::readFileHeader ( istream& inStream )
    {
        verifyEquality( static_cast<streampos>( 0 ), inStream.tellg(), "myFirstIdentifier position" );
        verifyEquality( firstIdentifier, Byte::read( inStream ), "myFirstIdentifier value" );

        verifyEquality( static_cast<streampos>( 1 ), inStream.tellg(), "mySecondIdentifier position" );
        verifyEquality( secondIdentifier, Byte::read( inStream ), "mySecondIdentifier value");
        
        verifyEquality( static_cast<streampos>( 2 ), inStream.tellg(), "myFileSize position" );
        myFileSize = DoubleWord::read( inStream );
        
        verifyEquality( static_cast<streampos>( 6 ), inStream.tellg(), "reserved position" );
        verifyEquality( reserved, DoubleWord::read( inStream ), "reserved value" );
        
        verifyEquality( static_cast<streampos>( 10 ), inStream.tellg(), "rawImageOffset position" );
        myRawImageOffset = DoubleWord::read( inStream );
        
        verifyEquality( static_cast<streampos>( 14 ), inStream.tellg(), "end file header" );
    }
    
    
    //
    // order of read() matters based on the info header!
    //
    // info header: https://en.wikipedia.org/wiki/BMP_file_format#DIB_header_(bitmap_information_header)
    //
    void WindowsBitmapHeader::readInfoHeader ( istream& inStream )
    {
        verifyEquality( static_cast<streampos>( 14 ), inStream.tellg(), "infoHeaderSize position" );
        verifyEquality( infoHeaderSize, DoubleWord::read( inStream ), "infoHeaderSize value" );
        
        verifyEquality( static_cast<streampos>( 18 ), inStream.tellg(), "myWidth position" );
        myWidth = DoubleWord::read( inStream );
        
        verifyEquality( static_cast<streampos>( 22 ), inStream.tellg(), "myHeight position" );
        myHeight = DoubleWord::read( inStream );
        
        verifyEquality( static_cast<streampos>( 26 ), inStream.tellg(), "colorPlanes position" );
        verifyEquality( colorPlanes, Word::read( inStream ), "colorPlanes value" );
        
        verifyEquality( static_cast<streampos>( 28 ), inStream.tellg(), "colorDepth position" );
        Word::read( inStream ); // ignore colorDepth value
        
        verifyEquality( static_cast<streampos>( 30 ), inStream.tellg(), "compressionMethod position" );
        myCompressionMethod = DoubleWord::read( inStream );
        
        verifyEquality( static_cast<streampos>( 34 ), inStream.tellg(), "myImageSize position" );
        myImageSize = DoubleWord::read( inStream );
        
        verifyEquality( static_cast<streampos>( 38 ), inStream.tellg(), "myHorizontalPixelsPerMeter position" );
        myHorizontalPixelsPerMeter = DoubleWord::read( inStream );
        
        verifyEquality( static_cast<streampos>( 42 ), inStream.tellg(), "myVerticalPixelsPerMeter position" );
        myVerticalPixelsPerMeter = DoubleWord::read( inStream );
        
        verifyEquality( static_cast<streampos>( 46 ), inStream.tellg(), "numberOfColors position" );
        DoubleWord::read( inStream ); // ignore numberOfColors value
        
        verifyEquality( static_cast<streampos>( 50 ), inStream.tellg(), "numberOfImportantColors position" );
        DoubleWord::read( inStream ); // ignore numberOfImportantColors value
        
        verifyEquality( static_cast<streampos>( 54 ), inStream.tellg(), "end info header" );
    }
    
    
    int WindowsBitmapHeader::getBitmapWidth() const noexcept
    {
        return myWidth.getValue();
    }
    
    
    int WindowsBitmapHeader::getBitmapHeight() const noexcept
    {
        return myHeight.getValue();
    }
    
    
    int WindowsBitmapHeader::getFileSize() const noexcept
    {
        return myFileSize.getValue();
    }
    
    
    void WindowsBitmapHeader::write ( ostream& outStream ) const
    {
        writeFileHeader( outStream );
        writeInfoHeader( outStream );
    }
    
    
    void WindowsBitmapHeader::writeFileHeader ( ostream& outStream ) const
    {
        firstIdentifier.write( outStream );
        secondIdentifier.write( outStream );
        myFileSize.write( outStream );
        reserved.write( outStream );
        myRawImageOffset.write( outStream );
    }
    
    
    void WindowsBitmapHeader::writeInfoHeader ( ostream& outStream ) const
    {
        infoHeaderSize.write( outStream );
        myWidth.write( outStream );
        myHeight.write( outStream );
        colorPlanes.write( outStream );
        colorDepth.write( outStream );
        myCompressionMethod.write( outStream );
        myImageSize.write( outStream );
        myHorizontalPixelsPerMeter.write( outStream );
        myVerticalPixelsPerMeter.write( outStream );
        numberOfColors.write( outStream );
        numberOfImportantColors.write( outStream );
    }
    
    
    //
    // file header: https://en.wikipedia.org/wiki/BMP_file_format#Bitmap_file_header
    //
    const Byte WindowsBitmapHeader::firstIdentifier{ 'B' };
    const Byte WindowsBitmapHeader::secondIdentifier{ 'M' };
    // << myFileSize >>
    const DoubleWord WindowsBitmapHeader::reserved{ 0 };
    // << myRawImageOffset >>
    
    
    //
    // info header: https://en.wikipedia.org/wiki/BMP_file_format#DIB_header_(bitmap_information_header)
    //
    const DoubleWord WindowsBitmapHeader::infoHeaderSize{ INFO_HEADER_SIZE };
    // << myWidth >>
    // << myHeight >>
    const Word WindowsBitmapHeader::colorPlanes{ 1 };
    const Word WindowsBitmapHeader::colorDepth{ 24 };
    // << myCompressionMethod >>
    // << myImageSize >>
    // << myHorizontalPixelsPerMeter >>
    // << myVerticalPixelsPerMeter >>
    const Binary::DoubleWord WindowsBitmapHeader::numberOfColors{ 0 };
    const Binary::DoubleWord WindowsBitmapHeader::numberOfImportantColors{ 0 };
    
}
