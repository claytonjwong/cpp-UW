#include <algorithm>
#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>

using namespace std;

void TestInput( istream & is, ostream & os )
{
	// istream_iterator is an input iterator that will read elements from an input stream (can be like cin or like a file object)
	istream_iterator< int > start( is );		// is can be an ifstream object or cin
	istream_iterator< int > end;				// signifies end of input (or end of file if is refers to a file)
	
	vector <int> vi;

	// First, write to the container
	copy ( start, end, back_inserter(vi) );
	

	// Then read from the container and write to some output.
	// ostream_iterator is an output iterator that writes to an output stream (can be cout, or a file )
	os << "Output numbers read into a vector with a space separator\n";
	copy ( vi.begin(), vi.end(), ostream_iterator<int>(os, " " ) );

	os << "\nOutput numbers read into a vector with a new line separator\n";
	copy ( vi.begin(), vi.end(), ostream_iterator<int>(os, "\n" ) );
}

void TestInput2( istream & is, ostream & os )
{
	// This will read integers from input represented by is, into vector vi.
	vector < int > vi ((istream_iterator< int >(is)), istream_iterator< int>() );

	// copy vector vi to output respresented by os
	copy ( vi.begin(), vi.end(), ostream_iterator<int>(os, " " ) );
}

void TestInputUsingFiles(const string & inpFileName, const string & outFileName, bool callFunc2)
{
	// Input file
	ifstream ifile (inpFileName.c_str());
	if ( ! ifile )
	{
		cerr << "Error, input file could be opened." << endl;
		return;
	}


	// Output file
	ostream * os = &cout;		// default to stdout
	ofstream ofile (outFileName.c_str());
	if ( !ofile )
	{
		cerr << "Could not open output file." << endl;
		cerr << "Sending output to stdout." << endl;
	}
	else
	{
		os = &ofile;		// was able to open file for output, so point to that instead of default stdout
	}

	if ( ! callFunc2 )
		TestInput( ifile, *os );
	else
		TestInput2( ifile, *os );
}

void TestIO()
{
	TestInput( cin, cout );
	TestInputUsingFiles("algo3input.txt", "algo3output.txt", false);
	TestInputUsingFiles("algo3input.txt", "algo3output2.txt", true);
}

/*
algo3input.txt
1 2 3 4 55 66 
777 
888
*/

/*
algo3output.txt
Output numbers read into a vector with a space separator
1 2 3 4 55 66 777 888 
Output numbers read into a vector with a new line separator
1
2
3
4
55
66
777
888
*/

/*
algo3output2.txt
1 2 3 4 55 66 777 888 
*/