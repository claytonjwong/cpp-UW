//
//  BoardInitializerTest.cpp
//  EWeek4
//
//  Created by CLAYTON WONG on 5/23/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include <stdio.h>
#include "TestHarness.h"
#include "BoardInitializer.hpp"
#include "Board.hpp"

TEST(_1x1,BoardInitializer){
    int rows=1,cols=1;
    Board boardObject(rows,cols);
    auto board=boardObject.GetBoard();
    CHECK(board.size()==rows);
    for (const auto& row: board)
        CHECK(row.size()==cols);
}

TEST(_2x3,BoardInitializer){
    int rows=2,cols=3;
    Board boardObject(rows,cols);
    auto board=boardObject.GetBoard();
    CHECK(board.size()==rows);
    for (const auto& row: board)
        CHECK(row.size()==cols);
}

TEST(_5x8,BoardInitializer){
    int rows=5,cols=8;
    Board boardObject(rows,cols);
    auto board=boardObject.GetBoard();
    CHECK(board.size()==rows);
    for (const auto& row: board)
        CHECK(row.size()==cols);
}

TEST(hardcodedDebugBoard,BoardInitializer){ // special board for grading this assignment
    Board boardObject(-1,-1,true); // row/col input here -1,-1 is ignored since debug flag is set
    auto board=boardObject.GetBoard();
    int rows=4,cols=4; // expected hardcoded board size (not same as input values to Board constructor)
    CHECK(board.size()==rows);
    for (const auto& row: board)
        CHECK(row.size()==cols);
    CHECK(board[0]=="apex"); // hardcoded values expected in debug board
    CHECK(board[1]=="nots");
    CHECK(board[2]=="etin");
    CHECK(board[3]=="ryeg");
}
