#pragma once
#include <cstdint> 
#include <type_traits>
#include <iostream>
#include <algorithm>
#include <iterator>

namespace Binary
{
	template<typename WordSize> class SizedWord
	{
	public:
		using data_type = WordSize;

		explicit SizedWord(WordSize value) : myData{ value } {};
		SizedWord() = default;
		SizedWord(const SizedWord& other) = default;
		SizedWord(SizedWord&& other) = default;
		SizedWord& operator =(const SizedWord& other) = default;
		SizedWord& operator =(SizedWord&& other) = default;

		// Will only compile if WordSize is 1 byte, otherwise gives an error at the caller site.  
		template<typename = std::enable_if_t<sizeof(WordSize) == 1>>		
		void write(std::ostream& destinationStream) const
		{
			destinationStream.exceptions(std::ios::failbit | std::ios::badbit);
			destinationStream.put(static_cast<char>(myData));
		}


		template<typename = std::enable_if_t<sizeof(WordSize) != 1>>
		void writeLittleEndian(std::ostream& destinationStream) const
		{
			//my stream will now throw an error of std::ios::failure if it can't read / write for some reason.
			destinationStream.exceptions(std::ios::failbit | std::ios::badbit);

			for (size_t byte = 0; byte != sizeof(WordSize); ++byte) 
			{
				unsigned char c = static_cast<unsigned char>((myData >> (8 * byte)));
				destinationStream.put(c);
			}
		}

		template<typename = std::enable_if_t<sizeof(WordSize) != 1>>
		void writeBigEndian(std::ostream& destinationStream) const
		{
			destinationStream.exceptions(std::ios::failbit | std::ios::badbit);

			for (size_t byte = sizeof(WordSize); byte != 0; --byte)
			{
				unsigned char c = static_cast<unsigned char>((myData >> (8 * (byte - 1))));
				destinationStream.put(c);
			}
		}

		template<typename = std::enable_if_t<sizeof(WordSize) == 1>>
		static SizedWord read(std::istream& sourceStream)
		{ 
			sourceStream.exceptions(std::ios::failbit | std::ios::badbit);
			return SizedWord{ static_cast<WordSize>(sourceStream.get()) };
		}

		template<typename = std::enable_if_t<sizeof(WordSize) != 1>>
		static SizedWord readLittleEndian(std::istream& sourceStream)
		{
			sourceStream.exceptions(std::ios::failbit | std::ios::badbit);
			SizedWord word{ 0 };
			
			for (size_t byte = 0; byte != sizeof(WordSize); ++byte)
			{
				char c = 0;
				sourceStream.get(c);
				word.myData |= static_cast<unsigned char>(c) << (8 * byte);
			}

			return word;
		}

		template<typename = std::enable_if_t<sizeof(WordSize) != 1>>
		static SizedWord readBigEndian(std::istream& sourceStream)
		{
			sourceStream.exceptions(std::ios::failbit | std::ios::badbit);
			SizedWord word{ 0 };

			for (size_t byte = sizeof(WordSize); byte != 0; --byte)
			{
				char c = 0;
				sourceStream.get(c);
				word.myData |= static_cast<unsigned char>(c) << (8 * (byte - 1));
			}

			return word;
		}

		bool operator==(const SizedWord& rhs) const noexcept { return myData == rhs.myData; }
		bool operator!=(const SizedWord& rhs) const noexcept { return !(operator==(rhs)); }

		explicit operator WordSize() const { return myData; }

		friend std::ostream& operator<<(std::ostream& os, const SizedWord& word)
		{
			os << word.myData;
			return os;
		}

	private:
		static_assert(std::is_integral_v<WordSize> && std::is_unsigned_v<WordSize>, "Unsigned Integral Type required for template creation of base type");

		WordSize myData{ static_cast<WordSize>('0') };

	};

	using Byte = SizedWord<std::uint8_t>;
	using Word = SizedWord<std::uint16_t>;
	using DoubleWord = SizedWord<std::uint32_t>;
}
