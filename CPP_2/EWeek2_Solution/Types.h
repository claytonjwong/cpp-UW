#ifndef __TYPES_H__
#define __TYPES_H__

#include <vector>

class Student;

typedef std::vector<Student*>			TCollStudents;		// collection of student object pointers
typedef std::vector< TCollStudents * >	TCollCollStudents;  // collection of collection of student object pointers


#endif
