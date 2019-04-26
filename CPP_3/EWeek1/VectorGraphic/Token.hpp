//
//  Token.hpp
//  EWeek1
//
//  Created by CLAYTON WONG on 7/19/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include <string>
#include <vector>

namespace VG {
    
    struct Token {
        std::string orig;
        std::string beg;
        std::string name;
        std::vector<std::string> attributes;
        std::string end;
        
        //
        // <Element/> is still considered "open" here
        // since I only care if the beginning is open
        //
        bool isOpen() const { return beg!="</"; }
    };
}
