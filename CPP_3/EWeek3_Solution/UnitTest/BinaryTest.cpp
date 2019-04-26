#include "TestHarness.h"
#include "SizedWord.h"
#include <sstream>
#include <iterator>

TEST(readByte, Byte)
{
    std::stringstream ss{ "abc" };

	// Sanity check. This does not compile, because of the std::enable_if_t: Error	C2783	'Binary::SizedWord<uint8_t> Binary::SizedWord<uint8_t>::readLittleEndian(std::istream &)': could not deduce template argument for '<unnamed-symbol>'	Assignment3_Solution2017	c : \users\bryan\documents\cpp course stuff\assignment3_solution\assignment3_solution2017\assignment3\unittest\binarytest.cpp	13
	// Binary::Byte aByte = Binary::Byte::readLittleEndian(ss);

    auto b = Binary::Byte::read(ss);
    CHECK_EQUAL(Binary::Byte('a'), b);

    b = Binary::Byte::read(ss);
    CHECK_EQUAL(Binary::Byte('b'), b);

    b = Binary::Byte::read(ss);
    CHECK_EQUAL(Binary::Byte('c'), b);
}

TEST(writeByte, Byte)
{
    Binary::Byte b{ 'x' };

    std::stringstream ss;
    b.write(ss);

    CHECK_EQUAL("x", ss.str());
}

TEST(assign, Byte)
{
    const unsigned char c1{ 'a' };
    const auto byte1 = Binary::Byte(c1);
    CHECK_EQUAL(Binary::Byte('a'), byte1);

    const Binary::Byte byte2{ 'b' };
    CHECK_EQUAL(Binary::Byte('b'), byte2);

    const auto c3 = static_cast<uint8_t>(byte2);
    CHECK_EQUAL('b', c3);

    const unsigned char c4{ byte1 };
    CHECK_EQUAL('a', c4);

    const Binary::Byte byte3{ c4 };
    CHECK_EQUAL(Binary::Byte('a'), byte3);

    const auto byte4{ byte3 };
    CHECK_EQUAL(Binary::Byte('a'), byte4);

    const auto byte5 = byte4;
    CHECK_EQUAL(Binary::Byte('a'), byte5);
}

TEST(move, Byte)
{
	const Binary::Byte b1{ 'a' };
	CHECK_EQUAL(Binary::Byte{ 'a' }, b1);

	const Binary::Byte b2 = Binary::Byte{ 'b' };
	CHECK_EQUAL(Binary::Byte{ 'b' }, b2);
}

TEST(readWordLittleEndian, Binary)
{
    unsigned char carray[]{ 0xb1, 0xb2, 0 };
    std::stringstream ss{ reinterpret_cast<char*>(carray) };

    const Binary::Word expected{ 0xb2b1 };
    const auto actual = Binary::Word::readLittleEndian(ss);

    CHECK_EQUAL(expected, actual);
}

TEST(readWordBigEndian, Binary)
{
    unsigned char carray[]{ 0xb1, 0xb2, 0 };
    std::stringstream ss{ reinterpret_cast<char*>(carray) };

    const Binary::Word expected{ 0xb1b2 };
    const auto actual = Binary::Word::readBigEndian(ss);

    CHECK_EQUAL(expected, actual);
}

TEST(readDoubleWordLittleEndian, Binary)
{
    unsigned char carray[]{ 0xb1, 0xb2, 0xb3, 0xb4, 0 };
    std::stringstream ss{ reinterpret_cast<char*>(carray) };

    const Binary::DoubleWord expected(0xb4b3b2b1);
    const auto actual = Binary::DoubleWord::readLittleEndian(ss);

    CHECK_EQUAL(expected, actual);
}

TEST(readDoubleWordBigEndian, Binary)
{
    unsigned char carray[]{ 0xb1, 0xb2, 0xb3, 0xb4, 0 };
    std::stringstream ss{ reinterpret_cast<char*>(carray) };

    const Binary::DoubleWord expected{ 0xb1b2b3b4 };
    const auto actual = Binary::DoubleWord::readBigEndian(ss);

    CHECK_EQUAL(expected, actual);
}

TEST(writeDoubleWordLittleEndian, Binary)
{
	unsigned char carray[]{ 0xb1, 0xb2, 0xb3, 0xb4, 0 };
	std::stringstream ssExpect{ reinterpret_cast<char*>(carray) };

	const auto aDWord = Binary::DoubleWord::readLittleEndian(ssExpect);

	std::stringstream ssActual;
	aDWord.writeLittleEndian(ssActual);

	CHECK_EQUAL(ssExpect.str(), ssActual.str());
}

TEST(writeDoubleWordBigEndian, Binary)
{
	unsigned char carray[]{ 0xb1, 0xb2, 0xb3, 0xb4, 0 };
	std::stringstream ssExpect{ reinterpret_cast<char*>(carray) };

	const auto aDWord = Binary::DoubleWord::readBigEndian(ssExpect);

	std::stringstream ssActual;
	aDWord.writeBigEndian(ssActual);

	CHECK_EQUAL(ssExpect.str(), ssActual.str());
}

TEST(readLittleWriteBig, Binary)
{
	unsigned char carrayInput[]{ 0xb1, 0xb2, 0xb3, 0xb4, 0 };
	std::stringstream ssInput{reinterpret_cast<char*>(carrayInput)};

	unsigned char carrayOutput[]{ 0xb4, 0xb3, 0xb2, 0xb1, 0 };
	std::stringstream ssExpect{ reinterpret_cast<char*>(carrayOutput) };

	const auto aDWord = Binary::DoubleWord::readLittleEndian(ssInput);

	std::stringstream ssActual;
	aDWord.writeBigEndian(ssActual);

	CHECK_EQUAL(ssExpect.str(), ssActual.str());
}
