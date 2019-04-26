#include "ColorInversionDecorator.h"
#include "Color.h"

namespace BitmapGraphics
{
	ColorInversionDecorator::ColorInversionDecorator(
		HBitmapIterator originalIterator)
		: BitmapIteratorDecorator{ std::move(originalIterator) }
	{
	}

	Color ColorInversionDecorator::getColor() const
	{
		const auto oldColor{ myOriginalIterator->getColor() };

		return Color{ Binary::Byte(255 - oldColor.getRed()), Binary::Byte(255 - oldColor.getGreen()), Binary::Byte(255 - oldColor.getBlue()) };
	}
}