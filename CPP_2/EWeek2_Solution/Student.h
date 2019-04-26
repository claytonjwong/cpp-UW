#ifndef __STUDENT_H__
#define __STUDENT_H__

class Student
{
public:
	Student( const string & fName, const string & lName, int id );

	const string & GetLastName() const;
	const string & GetFirstName() const;
	int		GetId() const;

private:
	std::string		mFirstName;
	std::string		mLastName;
	int				mID;
};

// define a non-member output operator 
std::ostream& operator << (std::ostream &, const Student & s );

inline Student::Student( const string & fName, const string & lName, int id )
	:mFirstName(fName), mLastName(lName), mID(id)
{}

inline const string & Student::GetLastName() const
{
	return mLastName;
}

inline const string & Student::GetFirstName() const
{
	return mFirstName;
}

inline int Student::GetId() const
{
	return mID;
}



#endif