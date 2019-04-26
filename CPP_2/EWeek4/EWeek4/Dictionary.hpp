//
//  Dictionary.hpp
//  EWeek4
//
//  Created by CLAYTON WONG on 5/23/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#ifndef Dictionary_hpp
#define Dictionary_hpp

#include <stdio.h>
#include <string>
#include <unordered_set>

class Dictionary {
public:
    Dictionary(const char* filename);
    Dictionary(const std::string& filename) : Dictionary(filename.c_str()) {}
    bool Contains(const std::string & word) const;
private:
    std::unordered_set<std::string> myWords;
};


#endif /* Dictionary_hpp */
