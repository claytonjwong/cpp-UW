
#include "TestHarness.h"
#include "DoubleWord.hpp"
#include "Byte.hpp"
#include "Word.hpp"
#include <sstream>

TEST(readByte1, Byte)
{
    std::stringstream ss{"abc"};
    
    auto b = Binary::Byte::read(ss);
    CHECK_EQUAL('a', b);
    
    b = Binary::Byte::read(ss);
    CHECK_EQUAL('b', b);
    
    b = Binary::Byte::read(ss);
    CHECK_EQUAL('c', b);
}

TEST(readByte2, Byte)
{
    std::stringstream ss{"def"};
    
    auto b = Binary::Byte::read(ss);
    CHECK_EQUAL('d', b);
    
    b = Binary::Byte::read(ss);
    CHECK_EQUAL('e', b);
    
    b = Binary::Byte::read(ss);
    CHECK_EQUAL('f', b);
}

TEST(readWordDynamicEndian, Word)
{
    unsigned char carray[]{ 0xb1, 0xb2, 0 };
    std::stringstream ss{reinterpret_cast<char*>(carray)};

    auto w = Binary::Word::read(ss);
    CHECK_EQUAL(0xb2b1, w);
}

TEST(readWordDynamicEndian2, Word)
{
    unsigned char carray[]{ 0xb1, 0xb2, 0xb3, 0xb4, 0 };
    std::stringstream ss{reinterpret_cast<char*>(carray)};

    auto w = Binary::Word::read(ss);
    CHECK_EQUAL(0xb2b1, w);
    
    w = Binary::Word::read(ss);
    CHECK_EQUAL(0xb4b3, w);
}

TEST(readWordLittleEndian, Word)
{
    unsigned char carray[]{ 0xb1, 0xb2, 0 };
    std::stringstream ss{reinterpret_cast<char*>(carray)};

    auto w = Binary::Word::readLittleEndian(ss);
    CHECK_EQUAL(0xb2b1, w);
}

TEST(readWordLittleEndian2, Word)
{
    unsigned char carray[]{ 0xb1, 0xb2, 0xb3, 0xb4, 0 };
    std::stringstream ss{reinterpret_cast<char*>(carray)};

    auto w = Binary::Word::readLittleEndian(ss);
    CHECK_EQUAL(0xb2b1, w);
    
    w = Binary::Word::readLittleEndian(ss);
    CHECK_EQUAL(0xb4b3, w);

}

TEST(readWordBigEndian, Word)
{
    unsigned char carray[]{ 0xb1, 0xb2, 0 };
    std::stringstream ss{reinterpret_cast<char*>(carray)};

    auto w = Binary::Word::readBigEndian(ss);
    CHECK_EQUAL(0xb1b2, w);
}

TEST(readWordBigEndian2, Word)
{
    unsigned char carray[]{ 0xb1, 0xb2, 0xb3, 0xb4, 0 };
    std::stringstream ss{reinterpret_cast<char*>(carray)};

    auto w = Binary::Word::readBigEndian(ss);
    CHECK_EQUAL(0xb1b2, w);
    
    w = Binary::Word::readBigEndian(ss);
    CHECK_EQUAL(0xb3b4, w);
}

TEST(readDoubleWordDynamicEndian, DoubleWord)
{
    unsigned char carray[]{ 0xb1, 0xb2, 0xb3, 0xb4, 0 };
    std::stringstream ss{reinterpret_cast<char*>(carray)};

    auto dw = Binary::DoubleWord::read(ss);
    CHECK_EQUAL(0xb4b3b2b1, dw);
}

TEST(readDoubleWordDynamicEndian2, DoubleWord)
{
    unsigned char carray[]{ 0xb1, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7, 0xb8,  0 };
    std::stringstream ss{reinterpret_cast<char*>(carray)};

    auto dw = Binary::DoubleWord::read(ss);
    CHECK_EQUAL(0xb4b3b2b1, dw);
    
    dw = Binary::DoubleWord::read(ss);
    CHECK_EQUAL(0xb8b7b6b5, dw);
}

TEST(readDoubleWordLittleEndian, Word)
{
    unsigned char carray[]{ 0xb1, 0xb2, 0xb3, 0xb4, 0 };
    std::stringstream ss{reinterpret_cast<char*>(carray)};

    auto dw = Binary::DoubleWord::readLittleEndian(ss);
    CHECK_EQUAL(0xb4b3b2b1, dw);
}

TEST(readDoubleWordLittleEndian2, Word)
{
    unsigned char carray[]{ 0xb1, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7, 0xb8, 0 };
    std::stringstream ss{reinterpret_cast<char*>(carray)};

    auto dw = Binary::DoubleWord::readLittleEndian(ss);
    CHECK_EQUAL(0xb4b3b2b1, dw);

    dw = Binary::DoubleWord::readLittleEndian(ss);
    CHECK_EQUAL(0xb8b7b6b5, dw);
}

TEST(readDoubleWordBigEndian, Word)
{
    unsigned char carray[]{ 0xb1, 0xb2, 0xb3, 0xb4, 0 };
    std::stringstream ss{reinterpret_cast<char*>(carray)};

    auto dw = Binary::DoubleWord::readBigEndian(ss);
    CHECK_EQUAL(0xb1b2b3b4, dw);
}

TEST(readDoubleWordBigEndian2, Word)
{
    unsigned char carray[]{ 0xb1, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7, 0xb8, 0 };
    std::stringstream ss{reinterpret_cast<char*>(carray)};

    auto dw = Binary::DoubleWord::readBigEndian(ss);
    CHECK_EQUAL(0xb1b2b3b4, dw);
    
    dw = Binary::DoubleWord::readBigEndian(ss);
    CHECK_EQUAL(0xb5b6b7b8, dw);
}

TEST(writeByte, Byte)
{
    Binary::Byte b{'x'};
    
    std::stringstream ss;
    b.write(ss);
    
    CHECK_EQUAL("x", ss.str());
}

TEST(writeByte2, Byte)
{
    Binary::Byte b{'0'};
    
    std::stringstream ss;
    b.write(ss);
    
    CHECK_EQUAL("0", ss.str());
}

TEST(writeByte3, Byte)
{
    Binary::Byte b{0xFF};
    
    std::stringstream ss;
    b.write(ss);
    
    CHECK_EQUAL("\377", ss.str());
}

TEST(writeWordDynamicEndian1, Word)
{
    Binary::Word win{0x1234};
    
    std::stringstream ss;
    win.write(ss);
    
    Binary::Word wout{ Binary::Word::read(ss) };
    CHECK_EQUAL(win,wout);
}

TEST(writeWordDynamicEndian2, Word)
{
    Binary::Word win1{0x1234},win2{0x5678};
    
    std::stringstream ss;
    win1.write(ss);
    win2.write(ss);
    
    Binary::Word wout1{ Binary::Word::read(ss) };
    Binary::Word wout2{ Binary::Word::read(ss) };
    
    CHECK_EQUAL(win1,wout1);
    CHECK_EQUAL(win2,wout2);
}

TEST(writeWordLittleEndian1, Word)
{
    Binary::Word win{0x1234};
    
    std::stringstream ss;
    win.writeLittleEndian(ss);
    
    Binary::Word wout{ Binary::Word::readLittleEndian(ss) };
    CHECK_EQUAL(win,wout);
}

TEST(writeWordLittleEndian2, Word)
{
    Binary::Word win1{0x1234},win2{0x5678};
    
    std::stringstream ss;
    win1.writeLittleEndian(ss);
    win2.writeLittleEndian(ss);
    
    Binary::Word wout1{ Binary::Word::readLittleEndian(ss) };
    Binary::Word wout2{ Binary::Word::readLittleEndian(ss) };
    
    CHECK_EQUAL(win1,wout1);
    CHECK_EQUAL(win2,wout2);
}

TEST(writeWordBigEndian1, Word)
{
    Binary::Word win{0x1234};
    
    std::stringstream ss;
    win.writeBigEndian(ss);
    
    Binary::Word wout{ Binary::Word::readBigEndian(ss) };
    CHECK_EQUAL(win,wout);
}

TEST(writeWordBigEndian2, Word)
{
    Binary::Word win1{0x1234},win2{0x5678};
    
    std::stringstream ss;
    win1.writeBigEndian(ss);
    win2.writeBigEndian(ss);
    
    Binary::Word wout1{ Binary::Word::readBigEndian(ss) };
    Binary::Word wout2{ Binary::Word::readBigEndian(ss) };
    
    CHECK_EQUAL(win1,wout1);
    CHECK_EQUAL(win2,wout2);
}

TEST(assign, Byte)
{
    unsigned char c1{'a'};
    Binary::Byte byte1;
    byte1 = c1;
    CHECK_EQUAL('a', byte1);
    
    Binary::Byte byte2{'b'};
    CHECK_EQUAL('b', byte2);
    
    unsigned char c3{};
    c3 = byte2;
    CHECK_EQUAL('b', c3);
    
    unsigned char c4{byte1};
    CHECK_EQUAL('a', c4);
    
    Binary::Byte byte3{c4};
    CHECK_EQUAL('a', byte3);
    
    Binary::Byte byte4{byte3};
    CHECK_EQUAL('a', byte4);
    
    Binary::Byte byte5{};
    byte5 = byte4;
    CHECK_EQUAL('a', byte5);
}

TEST(assign2, Byte)
{
    unsigned char c1{'x'};
    Binary::Byte byte1;
    byte1 = c1;
    CHECK_EQUAL('x', byte1);
    
    Binary::Byte byte2{'y'};
    CHECK_EQUAL('y', byte2);
    
    unsigned char c3{};
    c3 = byte2;
    CHECK_EQUAL('y', c3);
    
    unsigned char c4{byte1};
    CHECK_EQUAL('x', c4);
    
    Binary::Byte byte3{c4};
    CHECK_EQUAL('x', byte3);
    
    Binary::Byte byte4{byte3};
    CHECK_EQUAL('x', byte4);
    
    Binary::Byte byte5{};
    byte5 = byte4;
    CHECK_EQUAL('x', byte5);
}

TEST(assign, Word)
{
    uint16_t w1{0x1234};
    Binary::Word word1;
    word1 = w1;
    CHECK_EQUAL(word1,w1);
    
    uint16_t w2{0x5678};
    CHECK_EQUAL(0x5678, w2);
}

TEST(assign2, Word)
{
    Binary::Binary_t<uint16_t> w1{0x1234};
    Binary::Word word1;
    word1 = Binary::Binary_t<uint16_t>{0x1234};
    CHECK_EQUAL(word1,w1);
    
    Binary::Binary_t<uint16_t> w2{0x5678};
    CHECK_EQUAL(Binary::Binary_t<uint16_t>{0x5678}, w2);
}

TEST(assign3, Word)
{
    Binary::Word word1{0x1234},word2;
    word2 = word1;
}

TEST(assign, DoubleWord)
{
    uint32_t dw1{0x12345678};
    Binary::DoubleWord doubleWord1;
    doubleWord1 = dw1;
    CHECK_EQUAL(doubleWord1,dw1);
    
    uint32_t dw2{0x12345678};
    CHECK_EQUAL(0x12345678, dw2);
}

TEST(assign2, DoubleWord)
{
    Binary::Binary_t<uint32_t> dw1{0x12345678};
    Binary::DoubleWord doubleWord1;
    doubleWord1 = dw1;
    CHECK_EQUAL(doubleWord1,dw1);
    
    Binary::Binary_t<uint32_t> dw2{0x12345678};
    CHECK_EQUAL(Binary::Binary_t<uint32_t>{0x12345678}, dw2);
}

TEST(readWordDynamicEndian, Binary)
{
    unsigned char carray[]{ 0xb1, 0xb2, 0 };
    std::stringstream ss{reinterpret_cast<char*>(carray)};
    
    const Binary::Word expected{0xb2b1};
    Binary::Word actual = Binary::Word::read(ss);
    
    CHECK_EQUAL(expected, actual);
}

TEST(readWordDynamicEndian2, Binary)
{
    unsigned char carray[]{ 0xb1, 0xb2, 0xb3, 0xb4, 0 };
    std::stringstream ss{reinterpret_cast<char*>(carray)};
    
    const Binary::Word expected1{0xb2b1},expected2{0xb4b3};
    Binary::Word actual1 = Binary::Word::read(ss);
    Binary::Word actual2 = Binary::Word::read(ss);
    CHECK_EQUAL(expected1, actual1);
    CHECK_EQUAL(expected2, actual2);
}

TEST(readWordLittleEndian, Binary)
{
    unsigned char carray[]{ 0xb1, 0xb2, 0 };
    std::stringstream ss{reinterpret_cast<char*>(carray)};
    
    const Binary::Word expected{0xb2b1};
    Binary::Word actual = Binary::Word::readLittleEndian(ss);
    
    CHECK_EQUAL(expected, actual);
}

TEST(readWordLittleEndian2, Binary)
{
    unsigned char carray[]{ 0xb1, 0xb2, 0xb3, 0xb4, 0 };
    std::stringstream ss{reinterpret_cast<char*>(carray)};
    
    const Binary::Word expected1{0xb2b1},expected2{0xb4b3};
    Binary::Word actual1 = Binary::Word::readLittleEndian(ss);
    Binary::Word actual2 = Binary::Word::readLittleEndian(ss);
    CHECK_EQUAL(expected1, actual1);
    CHECK_EQUAL(expected2, actual2);
}

TEST(readWordBigEndian, Binary)
{
    unsigned char carray[]{ 0xb1, 0xb2, 0 };
    std::stringstream ss{reinterpret_cast<char*>(carray)};
    
    const Binary::Word expected{0xb1b2};
    Binary::Word actual = Binary::Word::readBigEndian(ss);
    
    CHECK_EQUAL(expected, actual);
}

TEST(readWordBigEndian2, Binary)
{
    unsigned char carray[]{ 0xb1, 0xb2, 0xb3, 0xb4, 0 };
    std::stringstream ss{reinterpret_cast<char*>(carray)};
    
    const Binary::Word expected1{0xb1b2},expected2{0xb3b4};
    Binary::Word actual1 = Binary::Word::readBigEndian(ss);
    Binary::Word actual2 = Binary::Word::readBigEndian(ss);
    CHECK_EQUAL(expected1, actual1);
    CHECK_EQUAL(expected2, actual2);
}


TEST(readDoubleWordLittleEndian, Binary)
{
    unsigned char carray[]{ 0xb1, 0xb2, 0xb3, 0xb4, 0 };
    std::stringstream ss{reinterpret_cast<char*>(carray)};
    
    const Binary::DoubleWord expected(0xb4b3b2b1);
    Binary::DoubleWord actual = Binary::DoubleWord::readLittleEndian(ss);
    
    CHECK_EQUAL(expected, actual);
}

TEST(readDoubleWordLittleEndian2, Binary)
{
    unsigned char carray[]{ 0xb1, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7, 0xb8, 0 };
    std::stringstream ss{reinterpret_cast<char*>(carray)};
    
    const Binary::DoubleWord expected1(0xb4b3b2b1),expected2(0xb8b7b6b5);
    Binary::DoubleWord actual1 = Binary::DoubleWord::readLittleEndian(ss);
    Binary::DoubleWord actual2 = Binary::DoubleWord::readLittleEndian(ss);
    CHECK_EQUAL(expected1, actual1);
    CHECK_EQUAL(expected2, actual2);
}


TEST(readDoubleWordBigEndian, Binary)
{
    unsigned char carray[]{ 0xb1, 0xb2, 0xb3, 0xb4, 0 };
    std::stringstream ss{reinterpret_cast<char*>(carray)};
    
    const Binary::DoubleWord expected{0xb1b2b3b4};
    Binary::DoubleWord actual = Binary::DoubleWord::readBigEndian(ss);
    
    CHECK_EQUAL(expected, actual);
}

TEST(readDoubleWordBigEndian2, Binary)
{
    unsigned char carray[]{ 0xb1, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7, 0xb8, 0 };
    std::stringstream ss{reinterpret_cast<char*>(carray)};
    
    const Binary::DoubleWord expected1{0xb1b2b3b4},expected2(0xb5b6b7b8);
    Binary::DoubleWord actual1 = Binary::DoubleWord::readBigEndian(ss);
    Binary::DoubleWord actual2 = Binary::DoubleWord::readBigEndian(ss);
    CHECK_EQUAL(expected1, actual1);
    CHECK_EQUAL(expected2, actual2);
}


