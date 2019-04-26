#include <map>
#include <iostream>
#include <string>

using namespace std;



void ShowSideEffect()
{
	map< int, int >	iimap1;
	map< int, int >::const_iterator citer1;

	// look for key 0... we should not find it since we didnt insert anything yet
	// find will return an iterator into the map, and the iterator will point to :
	// - the element if it was found (ie, if it exists in the map)
	// - iimap1.end() if it was not found
	// Remember the "half open" range we talked about in the STL lesson... iimap1.end() "points" to 
	// 1 past the last element of the map... so it is illegal to derefence it.

	citer1 = iimap1.find( 0 );		
	bool index0Exists = citer1 != iimap1.end();

	cout << (index0Exists ? "Found " : "Not found ") << " entry with key 0" << endl;


	// retrieve element with key 0. Note that this is not index 0... subscript operator is overloaded
	// for map to search for the key passed in, which in this case is 0.
	int v1 = iimap1[0];	// v1 will have the default value for int since this entry will get created.

	citer1 = iimap1.find( 0 );	// now we should find 0, as a side effect of the above retrieval
	index0Exists = citer1 != iimap1.end();
	
	cout << (index0Exists ? "Found " : "Not found ") << " entry with key 0" << endl;
	
}

class Student
{
public:
	Student( const string & name, int grade )
		: mName(name), mGrade(grade)
	{}

	~Student()
	{
		cout << "in destructor" << endl;
	}

	const string & GetName() const
	{
		return mName;
	}
	int GetGrade() const
	{
		return mGrade;
	}
private:
	string	mName;
	int		mGrade;
};

typedef Student *  StudentPtr;
typedef map< string, StudentPtr >   StudentMap;

// typedef for a const iterator (which means we  cannot moduify via this iterator)
typedef StudentMap::const_iterator  StudentMapCIter;

// typedef for an iterator. This is not the const iterator, so we can modify via this iterator
typedef StudentMap::iterator  StudentMapIter;


// Function prototype declarations
void LowerBoundExample( StudentMap & sMap, const string & name );
void UpperBoundExample( StudentMap & sMap, const string & name );
void EqualRangeExample( StudentMap & sMap, const string & name );


void MapExample1()
{
	StudentMap	sMap1;
	StudentPtr  sPtr1 = new Student( "Jerry", 9 );
	
	sMap1.insert( std::make_pair( sPtr1->GetName(), sPtr1 ) );

	StudentPtr  sPtr2 = new Student( "Bob", 9 );
	sMap1.insert( StudentMap::value_type( sPtr2->GetName(), sPtr2 ));
	
	int size = sMap1.size();
	bool isEmpty = sMap1.empty();

	

	for ( StudentMapCIter citer = sMap1.begin(); citer != sMap1.end(); ++ citer )
	{
		// citer.first is the key of  the map, which is the student name
		// citer.second is the value in the map, which is the student pointer.
		// Hence I can call citer.second->GetGrade()
		
		cout << "Student key:#" << citer->first << "#      Student grade: " << citer->second->GetGrade() << endl;
	}

	// lower_bound example:
	LowerBoundExample( sMap1, "Amy" );	// first element with key >= the passed in key
	LowerBoundExample( sMap1, "Zack" );
	LowerBoundExample( sMap1, "Charles" );
	LowerBoundExample( sMap1, "Jerry" );
	
	// upper_bound example:
	UpperBoundExample( sMap1, "Amy" );	// first element with key > the passed in key
	UpperBoundExample( sMap1, "Zack" );
	UpperBoundExample( sMap1, "Charles" );
	UpperBoundExample( sMap1, "Jerry" );

	// So, if the return value of lower_bound and upper_bound is the same, it means that
	// the key does not exist in the map... 
	// since in that case, the return value's key matches both conditions :
	// 1. return value's key >= key passed in   (which is what lower_bound does)
	// 2. return value's key > key passed in	(which is what upper_bound does)

	// On the other hand, if the key passed in does exist in the map, then the return value
	// of lower_bound and upper_bound will be different in case of a map.
	// lower_bound will return an iterator to the element in the map ( since return value's key >= key passed in )
	// upper_bound will return an iterator to one after the element in the map (which could be end() if this element is the last one)
	/////////////////////////////////////////////////////////////////////////////////////


	EqualRangeExample( sMap1, "Amy" );
	EqualRangeExample( sMap1, "Zack" );
	EqualRangeExample( sMap1, "Jerry" );
	EqualRangeExample( sMap1, "Bob" );

	StudentMapIter iter = sMap1.find("Sanjeev");
	if ( iter != sMap1.end() )		// This condition should be false
		sMap1.erase( iter );

	iter = sMap1.find("Jerry");
	StudentPtr toBeDeleted = NULL;

	if ( iter != sMap1.end() )		// This condition should be true since we added student Jerry
	{
		toBeDeleted = iter->second;
		sMap1.erase( iter );		// Remove Jerry from the map

		delete toBeDeleted;
	}

	size = sMap1.size();			// should be 1 less since we removed Jerry

	// release all memory for values we entered into the map
	for ( iter = sMap1.begin(); iter != sMap1.end(); ++ iter )
	{
		// we only need to delete the value, since our key was a string, so that will get released by the map itself.
		// Since the value in the map is a pointer, we need to delete it.
		// Note that if our map was something like map< string, Student >  , then there would be no need to delete the value
		// since we would NOT have allocated anything for the value, since the value is not a pointer to an object, but the object itself

		delete iter->second;
	}
}

void LowerBoundExample( StudentMap & sMap, const string & name ) 
{
	StudentMapCIter citer = sMap.lower_bound(name);
	if ( citer != sMap.end() )
	{
		cout << "\nsMap.lower_bound(" << name << ") returned an iterator to " << citer->first << endl;
	}
	else
	{
		cout << "\nsMap.lower_bound(" << name << ") returned end()\n";
	}
}

void UpperBoundExample( StudentMap & sMap, const string & name )
{
	StudentMapCIter citer = sMap.upper_bound(name);
	if ( citer != sMap.end() )
	{
		cout << "\nsMap.upper_bound(" << name << ") returned an iterator to " << citer->first << endl;
	}
	else
	{
		cout << "\nsMap.upper_bound(" << name << ") returned end()\n";
	}
}

void EqualRangeExample( StudentMap & sMap, const string & name )
{
	pair< StudentMapCIter, StudentMapCIter > pIter = sMap.equal_range( name );
	StudentMapCIter first =  pIter.first;
	StudentMapCIter second = pIter.second;
	
	if ( first == second )
	{
		cout << "Not found " << name << endl;
	}
	else
	{
		cout << "Found key: " << name << endl;
	}
}

void MapExample2()
{
	multimap< string, StudentPtr >   sMMap;
	
	StudentPtr  sPtr1 = new Student( "Jerry", 9 );
	
	sMMap.insert( std::make_pair( sPtr1->GetName(), sPtr1 ) );

	StudentPtr  sPtr2 = new Student( "Bob", 9 );
	sMMap.insert( StudentMap::value_type( sPtr2->GetName(), sPtr2 ));

	StudentPtr  sPtr3 = new Student( "Bob", 19 );
	sMMap.insert( StudentMap::value_type( sPtr3->GetName(), sPtr3 ));


	// deleting keys

	pair< multimap< string, StudentPtr >::iterator, multimap< string, StudentPtr >::iterator > pMIter = sMMap.equal_range("Bob");
	if (pMIter.first != pMIter.second)
		sMMap.erase( pMIter.first, pMIter.second );
	
}

void MapExample()
{
	ShowSideEffect();
	MapExample1();
	MapExample2();
}