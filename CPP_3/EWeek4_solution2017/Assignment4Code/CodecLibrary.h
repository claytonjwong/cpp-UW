#pragma once

#include "IBitmapDecoder.h"
#include "IBitmapEncoder.h"
#include <list>
#include <string>

namespace BitmapGraphics
{
	class CodecLibrary
	{
	public:
		void registerEncoder(HBitmapEncoder encoder);
		void registerDecoder(HBitmapDecoder decoder);

		// auto determination version of createDecoder
		HBitmapDecoder createDecoder(std::istream& sourceStream);

		// mime type version of createDecoder
		HBitmapDecoder createDecoder(
			const std::string& mimeType,
			std::istream& sourceStream);

		HBitmapEncoder createEncoder(
			const std::string& mimeType,
			HBitmapIterator bitmapIterator);

	private:
		std::list<HBitmapEncoder> myEncoders;
		std::list<HBitmapDecoder> myDecoders;

		using EncoderIterator = std::list<HBitmapEncoder>::iterator;
		using DecoderIterator = std::list<HBitmapDecoder>::iterator;
	};

}