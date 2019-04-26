//
//  BoardInitializer.hpp
//  EWeek4
//
//  Created by CLAYTON WONG on 5/22/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#ifndef BoardInitializer_hpp
#define BoardInitializer_hpp

#include <stdio.h>
#include <vector>

class BoardInitializer {
public:
    void InitializeBoardDebug(std::vector<std::string>& B) const;
    void InitializeBoardRandom(std::vector<std::string>& B, int rows, int cols) const;
};


#endif /* BoardInitializer_hpp */
