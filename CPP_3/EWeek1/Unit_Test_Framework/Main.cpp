#include <iostream>
#include <fstream>
#include <sstream>
#include "TestHarness.h"
#include "VectorGraphicStreamer.hpp"

using namespace std;
using namespace VG;

#define UNIT_TEST   1

int run_as_unit_test();
int run_as_file_io(int argc, char* argv[]);

int main(int argc, char *argv[])
{
    int rc;
    
#if UNIT_TEST==1
    
    rc=run_as_unit_test();
    
#else
    
    rc=run_as_file_io(argc,argv);
    
#endif
    
    return rc;
}

int run_as_unit_test(){
    try {
        // random number generator used in some tests
        srand(::time_t(NULL));
        
        TestResult tr;
        TestRegistry::runAllTests(tr);
        
        // force console screen to hold
        char ch;
        std::cin >> ch;
    } catch (...) {
        cerr << "exception thrown from run_as_unit_test()" << endl;
        return -1;
    }
    return 0;
}

int run_as_file_io(int argc, char* argv[]){
    if (argc!=3){
        cerr << "invalid command line arguments: expected one infile and one outfile." << endl;
        return -1;
    }
    VG::VectorGraphic vg;
    try {
        VectorGraphicStreamer::fromFile(argv[1], vg);
    } catch (...) {
        cerr << "exception during input" << endl;
        return -1;
    }
    try {
        VectorGraphicStreamer::toFile(argv[2], vg);
    } catch (...) {
        cerr << "exception during output" << endl;
        return -1;
    }
    return 0;
}
