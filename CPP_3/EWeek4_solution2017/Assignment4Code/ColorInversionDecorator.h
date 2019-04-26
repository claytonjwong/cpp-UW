#pragma once

#include "BitmapIteratorDecorator.h"

namespace BitmapGraphics
{
	class ColorInversionDecorator : public BitmapIteratorDecorator
	{
	public:
		ColorInversionDecorator(
			HBitmapIterator originalIterator);

		Color getColor() const override;
	};
}