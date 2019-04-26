#pragma once
#include <vector>
#include <string>
#include <iostream>
class Dictionary;

class Board
{
public:
	Board(int numRows, int numCols, const Dictionary &);

	int NumRows() const;
	int NumCols() const;
	char operator()(int row, int col) const;
	const std::string & operator()(int row) const;
	void PrintBoard() const;

private:
//	friend ostream & operator << (ostream & os, const Board & b);

	std::vector<std::string>	mBoard;
};

