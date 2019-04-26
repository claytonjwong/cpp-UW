//
//  Parse.hpp
//  EWeek1
//
//  Created by CLAYTON WONG on 7/11/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include <vector>
#include <string>
#include <exception>
#include "Token.hpp"
#include "VectorGraphic.hpp"

namespace VG{
    
    struct ParseException : public std::exception {
        const char* what() const throw() {
            return "ParseException";
        }
    };

    class Parse {
    public:
        static const std::string NODE_VG;
        static const std::string NODE_PT;
        static const std::string ATTR_CLOSED;
        static const std::string ATTR_COORD__X;
        static const std::string ATTR_COORD__Y;
    
        Parse()=delete;
        static void trim(std::string& s, const std::string& chars=" \t\n");
        static void eat(std::istringstream& is, const std::string& chars=" \t\n");
        static void serialize(std::stringstream& ss, const VectorGraphic& vg);
        static void tokenize(std::stringstream& ss, VectorGraphic& vg);
        static Token tokenize(const std::string& str);
        static std::pair<std::string,std::string> to_keyval(const std::string& attribute);
        static void process_token(VectorGraphic& vg, const Token& tok);
    };
}
