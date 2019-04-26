#include "StudentProcessor.h"
#include <iostream>
using namespace std;

int DoAssignment( int argc, char ** argv );

void PrintUsage( int argc, char ** argv )
{
	// print usage here
}

int DoAssignment( int argc, char ** argv )
{
	int status = 0;

	StudentProcessor	sp;
	TCollStudents		rawCollStudents;
	if ( sp.LoadStudents( argv[1], rawCollStudents ) )		// We already checked the args. 
	{
		sp.ProcessStudents( rawCollStudents );
		sp.PrintStudents( std::cout );
	}
	else
	{
		status = -1;		// normally would print or return a specific error code
	}

	return status;
}

int main(int argc, char ** argv)
{
	int status = 0;

	if ( argc < 2 )
	{
		PrintUsage( argc, argv );
		status = -1;
	}
	else
	{
		status = DoAssignment( argc, argv );
	}

	return status;
}

