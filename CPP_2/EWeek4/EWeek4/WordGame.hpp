//
//  WordGame.hpp
//  EWeek4
//
//  Created by CLAYTON WONG on 5/22/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#ifndef WordGame_hpp
#define WordGame_hpp

#include <iostream>
#include <stdio.h>
#include "Board.hpp"
#include "BoardInitializer.hpp"
#include "WordFinder.hpp"

class WordGame {
public:
    void Run() const;
    
    //
    // real-world solution can make file IO completely the client responsibility
    // for now, this is somewhat hidden and hardcoded.  The real-world refactoring
    // would then allow clients of WordGame to handle exceptions when attempting to
    // open/read/write/etc these files
    //
    void Run(int rows, int cols, int len, bool debug=false,
             const std::string dicFile="WordsList.txt",
             const std::string outFile="WordsOutput.txt") const;
};

#endif /* WordGame_hpp */
