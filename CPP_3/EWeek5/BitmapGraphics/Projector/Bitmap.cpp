//
//  Bitmap.cpp
//  EWeek3
//
//  Created by CLAYTON WONG on 8/9/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "DoubleWord.hpp"
#include "Color.hpp"
#include "Bitmap.hpp"
#include "binary_ostream_iterator.hpp"
#include "BitmapIterator.hpp"
#include <iostream>
#include <memory>

using namespace Binary;
using namespace std;

namespace BitmapGraphics
{
    
    
    Bitmap::Bitmap ( int width, int height, istream& inStream ) :
    myWidth{ width },
    myHeight{ height },
    myPaddingSize{ 0 }
    {
        auto scanLineSize = Color::BYTE_COUNT * myWidth;
        
        auto align = DoubleWord::BYTE_COUNT;
        
        myPaddingSize = ( align - ( scanLineSize % align ) ) % align;
    
        for ( auto scanLineHeight{ 0 };  scanLineHeight < myHeight;  ++scanLineHeight )
        {
            readScanLine( inStream );
        }
    }
    
    
    int Bitmap::getWidth ( ) const noexcept
    {
        return myWidth;
    }
    

    int Bitmap::getHeight ( ) const noexcept
    {
        return myHeight;
    }
    
    
    int Bitmap::getNumberOfPadBytes ( ) const noexcept
    {
        return myPaddingSize;
    }
    

    Bitmap::ScanLineIterator Bitmap::begin ( ) const noexcept
    {
        return myScanLines.cbegin();
    }
    

    Bitmap::ScanLineIterator Bitmap::end ( ) const noexcept
    {
        return myScanLines.cend();
    }
    
    
    HBitmapIterator Bitmap::createIterator ( ) const noexcept
    {
        return make_shared<BitmapIterator>( *this );
    }
    
    
    void Bitmap::write ( ostream& outStream ) const
    {
        for ( const auto& scanLine: myScanLines )
        {
            writeScanLine( outStream, scanLine );
        }
    }
    
    
    void Bitmap::readScanLine ( istream& inStream ) noexcept
    {
        ScanLine scanLine;
        
        for ( auto width{ 0 };  width < myWidth;  ++width )
        {
            scanLine.emplace_back(  Color::read( inStream )  );
        }
        
        myScanLines.emplace_back(  std::move( scanLine )  );
    
        readPadding( inStream );
    }
    
    
    void Bitmap::writeScanLine ( ostream& outStream, const ScanLine& scanLine ) const
    {
        std::copy( scanLine.begin(), scanLine.end(), binary_ostream_iterator<Color>( outStream ));
        
        writePadding( outStream );
    }
    
    
    void Bitmap::readPadding ( istream& inStream ) const noexcept
    {
        for ( auto padCount{ 0 };  padCount < myPaddingSize; ++padCount )
        {
            inStream.ignore();
        }
    }


    void Bitmap::writePadding ( ostream& outStream ) const noexcept
    {
        Binary::Byte pad;
        
        for ( auto padCount{ 0 }; padCount < myPaddingSize; ++padCount )
        {
            pad.write( outStream );
        }
    }
    
    
    ostream& operator<< ( ostream& outStream, const Bitmap& rhs )
    {
        rhs.write( outStream );
        
        return outStream;
    }
    
    
} // namespace BitmapGraphics
