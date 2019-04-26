//
//  WordFinder.hpp
//  EWeek4
//
//  Created by CLAYTON WONG on 5/23/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#ifndef WordFinder_hpp
#define WordFinder_hpp

#include <stdio.h>
#include <string>
#include <set>
#include <unordered_set>
#include "Board.hpp"
#include "Dictionary.hpp"

using TWordsList=std::set<std::string>;

class WordFinder {
public:
    WordFinder(const Board& board, const Dictionary& dic, const int len)
    : myWords{}, myBoard{board}, myDic{dic}, myMaxLength{len},
      myDirs{      // relative neighbor directions in clockwise order
        {-1, 0}, // UP
        {-1, 1}, // UP + RIGHT
        { 0, 1}, // RIGHT
        { 1, 1}, // DOWN + RIGHT
        { 1, 0}, // DOWN
        { 1,-1}, // DOWN + LEFT
        { 0,-1}, // LEFT
        {-1,-1}, // UP + LEFT
    } {}
    TWordsList FindWords();
private:
    TWordsList myWords;
    const Board myBoard;
    const Dictionary myDic;
    const int myMaxLength;
    const std::vector<std::pair<int,int>> myDirs;
    void go(int i, int j);
    void go(int i, int j, std::string& str, std::unordered_set<int>& visited);
    const int key(int i, int j) const { return i*myBoard.NumCols()+j; } // visisted hash
};

#endif /* WordFinder_hpp */

