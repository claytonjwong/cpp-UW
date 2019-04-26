#include "Header.h"
#include "ContainerIterator.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <type_traits>
#include <iterator>
#include <sstream>
#include <numeric>

class Container
{
	template<class Vector, class Pair> 
	Container(Vector&& aVector, Pair&& aPair) : myVec{ std::forward<Vector>(aVector) }, myPair{ std::forward<Pair>(aPair) }
	{}
private:
	std::vector<int> myVec;
	std::pair<int, int> myPair;
};

int main()
{
	//1234 
	unsigned char c{ 0xb2 };
	std::uint16_t s{ 0xb1b2 };
	std::uint32_t i{ 0xb4b3b2b1 };

	DataTypes::Byte b{ c };
	DataTypes::Word w{ s };
	DataTypes::DoubleWord dw{ i };

	unsigned short aShort = static_cast<unsigned short>(w);
	unsigned short anotherShort = (unsigned short)w;  // works, because we have the operator, but this is an anti-pattern in modern C++.

	std::stringstream stream;
	
	dw.writeLittleEndian(stream);

	DataTypes::DoubleWord dw2 = DataTypes::DoubleWord::readLittleEndian(stream);

	dsa::doubly_linked_list<int> dll;
	dll.push_back(1);
	dll.push_back(2);
	dll.push_back(3);

	std::copy(dll.begin(), dll.end(), std::ostream_iterator<int>(std::cout));

	std::copy(dll.rbegin(), dll.rend(), std::ostream_iterator<int>(std::cout));

	std::vector<int> myVec{ 5 };

	std::iota(myVec.begin(), myVec.end(), 3);

	std::generate_n(std::back_inserter(myVec), 5, []() {return 1; });

	std::sort(myVec.begin(), myVec.end());

	std::sort(myVec.begin(), myVec.end(), std::greater());

	return 0;
}

