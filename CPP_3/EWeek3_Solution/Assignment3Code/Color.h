#pragma once

#include "SizedWord.h"

namespace BitmapGraphics
{
	class Color
	{
	public:
	    explicit Color(
			const Binary::Byte& red = Binary::Byte(0),
			const Binary::Byte& green = Binary::Byte(0),
			const Binary::Byte& blue = Binary::Byte(0)) noexcept;

		Color(const Color&) noexcept = default;
		Color(Color &&) noexcept  = default;

		Color& operator=(const Color&) = default;
		Color& operator=(Color&&) = default;

		~Color() noexcept = default;

		static Color read(std::istream& sourceStream);
		void write(std::ostream& destinationStream) const;

		Binary::Byte getRed() const noexcept { return myRed; }
		Binary::Byte getGreen() const noexcept { return myGreen; }
		Binary::Byte getBlue() const noexcept { return myBlue; }

		bool operator==(const Color& rhs) const noexcept;
		bool operator!=(const Color& rhs) const noexcept;

	private:
		Binary::Byte myRed{ 0 };
		Binary::Byte myGreen{ 0 };
		Binary::Byte myBlue{ 0 };
	};

	std::ostream& operator<<(std::ostream& os, const Color& color);
}