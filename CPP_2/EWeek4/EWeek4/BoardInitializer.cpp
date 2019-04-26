//
//  BoardInitializer.cpp
//  EWeek4
//
//  Created by CLAYTON WONG on 5/22/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "BoardInitializer.hpp"
#include <vector>
#include <string>
#include <random>

using namespace std;

//
// special board for grading this assignment
//
void BoardInitializer::InitializeBoardDebug(vector<string>& emptyBoard) const {
    vector<string> filledBoard{
        "apex",
        "nots",
        "etin",
        "ryeg",
    };
    emptyBoard.swap(filledBoard);
}

void BoardInitializer::InitializeBoardRandom(vector<string>& emptyBoard, int rows, int cols) const {
    vector<string> filledBoard;
    random_device rdev;
    while (rows--){
        seed_seq seed{rdev()};
        auto rand=bind(uniform_int_distribution<>('a','z'),mt19937(seed));
        string str(cols,'\0');
        generate_n(str.begin(),cols,rand);
        filledBoard.emplace_back(std::move(str));
    }
    emptyBoard.swap(filledBoard);
}
