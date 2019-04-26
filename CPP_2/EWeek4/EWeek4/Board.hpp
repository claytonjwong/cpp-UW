//
//  Board.hpp
//  EWeek4
//
//  Created by CLAYTON WONG on 5/22/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#ifndef Board_hpp
#define Board_hpp

#include <stdio.h>
#include <vector>
#include <string>
#include "BoardInitializer.hpp"

class Board {
public:
    Board(int rows, int cols, bool debug=false) : myRowSize{rows}, myColSize{cols} {
        if (debug)
            myBoardInitializer.InitializeBoardDebug(myBoard); // hardcoded board for grading this assignment
        else
            myBoardInitializer.InitializeBoardRandom(myBoard, myRowSize, myColSize);
    }
    int NumRows() const { return myRowSize; }
    int NumCols() const { return myColSize; };
    const std::vector<std::string>& GetBoard() const { return myBoard; }
    const std::string& operator[](int row) const { return myBoard[row]; }
private:
    int myRowSize, myColSize;
    std::vector<std::string> myBoard;
    BoardInitializer myBoardInitializer;
};

#endif /* Board_hpp */
