#include <vector>
#include <map>
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

#include "StudentProcessor.h"
#include "Student.h"

const int kMaxLineSize = 512;
const int kMaxFieldSize = 256;
const int kDefaultStudentID = -1;
const char kNameIDDelimiter = ';';
const char kFirstNameLastNameDelimiter = ' ';

// define a non-member output operator 
// Normally would define in Student.cpp, but I didnt want to create a file just for this for ease of uploading:-)
std::ostream& operator << (std::ostream & os, const Student & s )
{
	return os << s.GetFirstName() << " " << s.GetLastName() << " " << s.GetId();
}

StudentProcessor::~StudentProcessor()
{
	for ( TCollCollStudents::iterator iter = mCCStudents.begin(); 
		  iter != mCCStudents.end();
		  ++ iter )
	{
		DeleteElements( *iter );	// delete elements from within the collection 
		
		delete *iter;				// Now delete the collection itself
	}
}

void StudentProcessor::DeleteElements( TCollStudents * collPtr )
{
	for ( TCollStudents::iterator iter = collPtr->begin(); iter != collPtr->end(); ++ iter )
	{
		Student * ptr = *iter;	// could instead say  delete *iter like I did in the method above
		delete ptr;
	}
}

void StudentProcessor::PrintStudents(ostream & os, const TCollStudents & cStudents ) const
{
	TCollStudents::const_iterator	citer = cStudents.begin();
	
	for ( ; citer != cStudents.end(); ++ citer )
	{
		os << **citer << endl;
	}
}

void StudentProcessor::PrintStudents(ostream & os, const TCollCollStudents & ccStudents ) const
{
	int numCollections = ccStudents.size();
	for (int ii = 0; ii < numCollections; ++ ii )
	{
		os << endl << "Collection " << ii << ":" << endl << endl;
		PrintStudents( os, *ccStudents[ ii ] );
	}
}

void ParseName( const char * nameStr, string & fName, string & lName )
{
	istringstream is( nameStr );
	is >> fName;
	is >> lName;
}

Student * ParseInfoCreateStudent( const char * line )
{
	char field[ kMaxFieldSize ];
	string lName, fName;
	istringstream is( line );

	// get the characters before kNameIDDelimiter , ie, the name strings
	is.getline(field, sizeof(field), kNameIDDelimiter );
	if ( is.gcount() > 1 )
	{
		ParseName( field, fName, lName );
	}
	else
	{
		// Error handling code would normally be here
		return NULL;
	}


	int studentID = 0;
	is >> studentID;
	if ( studentID == 0 )
		studentID = kDefaultStudentID;

	return new Student( fName, lName, studentID );
}

bool StudentProcessor::LoadStudents( const string & inputFile, TCollStudents & rawCollStudents )
{
	bool status = true;
	// fill up rawCollStudents by reading from the file
	ifstream   inpF( inputFile.c_str() );

	if (!inpF)
	{
		cerr << "Could not open file " << inputFile << " for read" << endl;
		return false;
	}

	char line[ kMaxLineSize ];
	int lineNum = 0;
	const int kRecordDelimiter = ',';


	while ( ! inpF.eof() )
	{
		lineNum ++;

		// this will use delimiter kRecordDelimiter.
		// Assumption here is that our line is < kMaxLineSize in length
		inpF.getline( line, sizeof( line ), kRecordDelimiter );
	
		if (inpF.gcount() > 1)					// ignore empty lines
		{
			Student * s = ParseInfoCreateStudent( line );
			if ( s )
			{
				rawCollStudents.push_back( s );
			}
		}
	}

/*
	// Creating some hard coded values to 
	// test rest of the program before file loading code is done.

	Student * s1 = new Student("Jim", "Black", 1 );
	Student * s2 = new Student("John", "Black", 2 );
	Student * s3 = new Student("Kevin", "Smith", 3 );
	Student * s4 = new Student("Mike", "Sal", 4 );
	Student * s5 = new Student("Zona", "Costner", 5 );

	rawCollStudents.push_back( s1 );
	rawCollStudents.push_back( s2 );
	rawCollStudents.push_back( s3 );
	rawCollStudents.push_back( s4 );
	rawCollStudents.push_back( s5 );
*/
	return status;
}

void StudentProcessor::ProcessStudents( const TCollStudents & rawCollStudents )
{
	// we will have a map of char (first letter of name) to a collection of students
	map< char, TCollStudents * >	sMap;
	map< char, TCollStudents * >::const_iterator  cMapIter;

	// create a pair of iterator and bool, this is returned by map.insert below.
	pair< map< char, TCollStudents * >::iterator, bool >	insertResult;
	// I know the declaration above is a bit hairy, and we could simplify a little by having a typedef:
	// typedef map< char, TCollStudents * >::iterator		TCollStudentsIter;
	// pair< TCollStudentsIter, bool >		insertResult;

	
	// I will iterate over rawCollStudents and insert them based on the 
	// first letter of their last name (or u could chose first name) into the map defined above  ( insertResult ).
	// However, instead of a map, I could have chosen something like an 
	// array of pointers to TCollStudents, and the index into the array where I add a collection 
	// would be based on the first character's ASCII value.
	// For an example, see the comment at end of this file.
	// 
	// For now, lets go on with the map:

	TCollStudents::const_iterator	citer = rawCollStudents.begin();
	for ( ; citer != rawCollStudents.end(); ++ citer )
	{
		Student * s = *citer;
		char firstChar = tolower( s->GetLastName()[0] );	// ignore case

		cMapIter = sMap.find(firstChar);
		if ( cMapIter != sMap.end() )			// found a map
		{
			cMapIter->second->push_back( s );
		}
		else
		{
			insertResult = sMap.insert( make_pair( firstChar, new TCollStudents ) );
			insertResult.first->second->push_back( s );
			
			// Or u could say:
			// TCollStudents * coll = insertResult.first->second;
			// coll->push_back( s );
		}
	}

	// Now we should have all the collections in the map.
	// We can copy it over to a vector of vector
	for ( cMapIter = sMap.begin(); cMapIter != sMap.end(); ++ cMapIter )
	{
		mCCStudents.push_back( cMapIter->second );
	}
}

void StudentProcessor::PrintStudents( ostream & os ) const
{
	PrintStudents( os, mCCStudents );
}
	

/*
Explanation of an alternative to storing in a map, as explained in comments inside StudentProcessor::ProcessStudents.

Instead of a map, I can use an array of pointers to TCollStudents.

TCollStudents	arr[256];
Initialize all elements of arr to NULL

int arrSize = sizeof(arr)/sizeof(arr[0]);

for ( int ii = 0; ii < arrSize; ++ ii )
{
	arr[ ii ] = NULL;
}

char firstChar = tolower( s->GetLastName()[0] );

if ( arr[ firstChar ] == NULL )			// access the array based on ASCII value of first character.
{
	arr[ firstChar ] = new TCollStudents;
}

arr[ firstChar ]->push_back( s );



*/