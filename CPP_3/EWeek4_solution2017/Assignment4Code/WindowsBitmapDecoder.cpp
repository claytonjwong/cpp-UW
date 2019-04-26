#include "WindowsBitmapDecoder.h"
#include "BitmapIterator.h"
#include "WindowsBitmapHeader.h"
#include "WindowsBitmapCommon.h"
#include <sstream>

namespace
{
	std::istringstream nullStream{};
}

namespace BitmapGraphics
{
	// This constructor is used to create the prototype.
	// Initialize mySourceStream to an empty stringstream,
	// and set its state to "bad".
	// If a client attempts to use a decoder with bad stream,
	// we'll throw an exception.
	//
	WindowsBitmapDecoder::WindowsBitmapDecoder()
		: mySourceStream{ nullStream }
	{
		mySourceStream.setstate(std::ios::badbit);
	}

	WindowsBitmapDecoder::WindowsBitmapDecoder(std::istream& sourceStream)
		: mySourceStream{ sourceStream }
	{
	}

	HBitmapDecoder WindowsBitmapDecoder::clone(std::istream& sourceStream)
	{
		return std::make_unique<WindowsBitmapDecoder>(sourceStream);
	}

	HBitmapIterator WindowsBitmapDecoder::createIterator()
	{
		if (mySourceStream.bad())
		{
			throw std::runtime_error{ "Invalid decoder: bad source stream" };
		}

		decodeIntoBitmap();

		return myBitmap->createIterator();
	}

	void WindowsBitmapDecoder::decodeIntoBitmap()
	{
		WindowsBitmapHeader bitmapHeader{ mySourceStream };

		myBitmap = std::make_unique<Bitmap>(bitmapHeader.getBitmapWidth(), bitmapHeader.getBitmapHeight());

		for (auto row = 0; row < myBitmap->getHeight(); ++row)
		{
			Bitmap::ScanLine scanLine;

			// Read row of pixels
			for (auto column = 0; column < myBitmap->getWidth(); ++column)
			{
				scanLine.push_back(Color::read(mySourceStream));
			}

			// Read and ignore pad bytes (if any)
			for (auto pad = 0; pad < numberOfPadBytes(myBitmap->getWidth()); ++pad)
			{
				Binary::Byte::read(mySourceStream);
			}

			myBitmap->addScanLine(std::move(scanLine));
		}
	}

	std::string WindowsBitmapDecoder::getMimeType() const
	{
		return WindowsBitmapMimeType;
	}

	bool WindowsBitmapDecoder::isSupported(const std::string& firstChunk) const
	{
		if (firstChunk.size() < 2)
		{
			return false;
		}

		return firstChunk[0] == 'B' && firstChunk[1] == 'M';
	}

}