#include "Board.h"
#include "BoardInitializer.h"
#include "Dictionary.h"
using namespace std;

Board::Board(int numRows, int numCols, const Dictionary & wordDict)
	:mBoard(numRows)
{
	for (int ii = 0; ii < mBoard.size(); ++ii)
	{
		mBoard[ii].reserve(numCols);
	}

	BoardInitializer bi(wordDict);
	//bi.InitializeBoardWordSize(mBoard, numCols);
	bi.InitializeBoardDebug(mBoard, numCols);
	PrintBoard();
}

int Board::NumRows() const
{
	return static_cast<int>(mBoard.size());
}

// Assumption: mBoard[0] is valid element, ie, mBoard.size() >= 1
int Board::NumCols() const
{
	return static_cast<int>(mBoard[0].size());
}

char Board::operator()(int row, int col) const
{
	return mBoard[row][col];
}

const string& Board::operator()(int row) const
{
	return mBoard[row];
}

//ostream & operator << (ostream & os, const Board & b)
void Board::PrintBoard() const
{
	for (unsigned int row = 0; row < mBoard.size(); row++)
	{
		cout << mBoard[row] << endl;
	}
}