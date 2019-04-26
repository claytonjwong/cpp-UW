#pragma once
#include <cstdint>
#include <iostream>
#include <type_traits>
#include <iterator>

namespace CRTP
{
	template<class WordClass> class SizedWord
	{
	public:

		static WordClass readLittleEndian(std::istream& sourceStream)
		{
			typename WordClass::datatype word;

			for (auto byte = 0; byte != sizeof(WordClass::datatype); ++byte) {
				char c = 0;
				if (!sourceStream.get(c)) {
					throw(std::runtime_error("Attempt to read failed."));
				}

				typename WordClass::datatype tmp = static_cast<unsigned char>(c); // Otherwise sign extension occurs.
				word |= tmp << (8 * byte);
			}

			return word;
		};

		void writeLittleEndian(std::ostream& sourceStream)
		{
			unsigned char* dataAsChar = reinterpret_cast<unsigned char*>(&myData);
			std::copy(dataAsChar, dataAsChar + sizeof(WordSize), std::ostream_iterator<unsigned char>(os));
		}

		void someFauxVirtualFunction()
		{
			static_cast<WordClass*>(this)->someFauxVirtualFunction_impl();
		}

	};

	class DoubleWord : public SizedWord<DoubleWord>
	{
	public:
		friend class SizedWord<DoubleWord>;
		using datatype = uint32_t;


	private:
		datatype myData{ 0 };

		void someFauxVirtualFunction_impl()
		{
			std::cout << "Doubleword" << std::endl;
		}
	};

	class Word : public SizedWord<Word>
	{
	public:
		friend class SizedWord<Word>;
		using datatype = uint16_t;

	private:
		datatype myData{ 0 };

		void someFauxVirtualFunction_impl()
		{
			std::cout << "Word" << std::endl;
		}

	};

};

namespace DataTypes
{
	template<typename WordSize, typename conversion> class SizedWord_t
	{
	private:
		using ReturnType = SizedWord_t<WordSize, conversion>;

	public:
		explicit SizedWord_t(WordSize value) : myData{ value } {};
		SizedWord_t() = default;
		SizedWord_t(const SizedWord_t& other) = default;
		SizedWord_t(SizedWord_t&& other) = default;
		ReturnType& operator =(const SizedWord_t& other) = default;
		ReturnType& operator =(SizedWord_t&& other) = default;

		static ReturnType readLittleEndian(std::istream& str)
		{
			WordSize word{ static_cast<WordSize>(0U) };

			for (size_t byte = 0; byte != sizeof(WordSize); ++byte) {
				char c = 0;
				if (!str.get(c)) {
					throw(std::runtime_error("Attempt to read sizedword failed."));
				}

				WordSize tmp = static_cast<unsigned char>(c); // Otherwise sign extension occurs.
				word |= tmp << (8 * byte);
			}

			return SizedWord_t(word);
		}

		void writeLittleEndian(std::ostream& os)
		{
			if ( WordSize{ 0x0001 } == WordSize{ 0x01 } )
			{
				unsigned char* dataAsChar = reinterpret_cast<unsigned char*>(&myData);
				std::copy(dataAsChar, dataAsChar + sizeof(WordSize), std::ostream_iterator<unsigned char>(os));
			}
			else
			{
				os << "System is Big Endian, so would need to swap orders.";
			}
		}

		explicit operator conversion() { return static_cast<conversion>(myData); };

	private:
		static_assert(std::is_integral<WordSize>::value && std::is_unsigned<WordSize>::value, "Unsigned Integral Type required for template creation of base type");
		static_assert(sizeof(WordSize) <= sizeof(conversion), "Conversion Type must be same size or larger to prevent loss of data");

		WordSize myData;
	};

	using Byte = SizedWord_t<uint8_t, unsigned char>;
	using Word = SizedWord_t<std::uint16_t, unsigned short>;
	using DoubleWord = SizedWord_t<std::uint32_t, unsigned int>;

}
