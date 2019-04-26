//
//  Parens.hpp
//  EWeek3
//
//  Created by CLAYTON WONG on 5/11/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#ifndef Parens_hpp
#define Parens_hpp

#include <stdio.h>
#include <unordered_map>
#include <unordered_set>
#include <stack>

class Solution{
public:
    static bool isValid(const std::string& str) {
        static std::unordered_map<char,char> m{{'(',')'},{'{','}'},{'[',']'}};
        std::unordered_set<char> e; for (const auto& x: m) e.insert(x.second);
        std::stack<char> s;
        for (const auto c: str){
            if (m.find(c)!=m.end()){
                s.push(m[c]);
            } else if (e.find(c)!=e.end()){
                if (s.empty() || c!=s.top()) return false;
                s.pop();
            }
        }
        return s.empty();
    }
};

#endif /* Parens_hpp */
