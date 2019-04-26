//
//  VectorGraphicStreamer.cpp
//  EWeek1
//
//  Created by CLAYTON WONG on 7/16/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include <fstream>
#include <sstream>
#include "VectorGraphicStreamer.hpp"
#include "VectorGraphic.hpp"
#include "Parse.hpp"

using namespace std;

namespace VG {
    
    void VectorGraphicStreamer::fromFile(const string& filename, VectorGraphic& vg){
        stringstream ss;
        ifstream fin(filename);
        if (fin){
            ss << fin.rdbuf();
            VectorGraphicStreamer::fromStream(ss,vg);
        }
        else
            throw invalid_argument("input file not found");
    }
    
    void VectorGraphicStreamer::fromStream(stringstream& ss, VectorGraphic& vg){
        Parse::tokenize(ss,vg);
    }
    
    void VectorGraphicStreamer::toFile(const string& filename, const VectorGraphic& vg){
        stringstream ss;
        ofstream fout(filename);
        VectorGraphicStreamer::toStream(ss,vg);
        if (fout)
            fout << ss.rdbuf();
        else
            throw invalid_argument("output file not found");
    }
    
    void VectorGraphicStreamer::toStream(stringstream& ss, const VectorGraphic& vg){
        Parse::serialize(ss,vg);
    }
}
