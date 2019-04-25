#include "Employee.h"

int Employee::ourInstanceCount = 0;

Employee::Employee(std::string firstName)
	: myFirstName{ std::move(firstName) }
{
	++ourInstanceCount;
}

Employee::~Employee()
{
	--ourInstanceCount;
}

int Employee::getInstanceCount()
{
	return ourInstanceCount;
}

std::ostream& operator<<(std::ostream& os, const Employee& employee)
{
	os << employee.myFirstName;

	return os;
}

