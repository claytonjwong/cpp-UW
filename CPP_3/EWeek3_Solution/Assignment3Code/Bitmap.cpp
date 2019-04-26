#include "Bitmap.h"
#include "binary_ostream_iterator.h"

namespace BitmapGraphics
{
    Bitmap::Bitmap(uint32_t width, uint32_t height, std::istream& sourceStream) :
    myWidth{width},
    myHeight{height}
    {
        read(sourceStream);
    }
    
    int Bitmap::getNumberOfPadBytes() const
    {
        const auto remainder = (myWidth * 3) % 4;
        return (remainder == 0) ? 0 : (4 - remainder);
    }
    
    void Bitmap::read(std::istream& sourceStream)
    {
        myScanLines.clear();
        
        for (auto row = 0u; row < myHeight; ++row)
        {
            ScanLine scanLine;
            
            // Read row of pixels
            for (auto column = 0u; column < myWidth; ++column)
            {
                scanLine.push_back(Color::read(sourceStream));
            }
            
            // Read and ignore pad bytes (if any)
            for (auto pad = 0; pad < getNumberOfPadBytes(); ++pad)
            {
                Binary::Byte::read(sourceStream);
            }
            
            myScanLines.push_back(std::move(scanLine));
        }
    }
    
    void Bitmap::write(std::ostream& destinationStream) const
    {
        for (const auto& scanLine : myScanLines)
        {
            // Write row of pixels
			std::copy(scanLine.begin(), scanLine.end(), binary_ostream_iterator<Color>(destinationStream));
            
            // Write pad bytes
            for (auto pad = 0; pad < getNumberOfPadBytes(); ++pad)
            {
                Binary::Byte(0).write(destinationStream);
            }
        }
    }
}