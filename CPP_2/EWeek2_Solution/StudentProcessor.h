#ifndef __STUDENT_PROCESSOR_H__
#define __STUDENT_PROCESSOR_H__

#include <ostream>
#include <string>

#include "Types.h"

class StudentProcessor
{
public:
	StudentProcessor();
	~StudentProcessor();

	bool LoadStudents( const std::string & inputFile, TCollStudents & rawCollStudents );
	void ProcessStudents( const TCollStudents & rawCollStudents );
	void PrintStudents( std::ostream & os ) const;

	
private:

	void PrintStudents( std::ostream & os, const TCollStudents & cStudents ) const;
	void PrintStudents( std::ostream & os, const TCollCollStudents & ccStudents ) const;

	void DeleteElements( TCollStudents * collPtr );


	TCollCollStudents	mCCStudents;
};

inline StudentProcessor::StudentProcessor()
{}

#endif