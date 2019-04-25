#pragma once

#include <string>
#include <ostream>

class Employee
{
public:
	Employee(std::string firstName);

	~Employee();

	static int getInstanceCount();

	friend std::ostream& operator<<(std::ostream& os, const Employee& employee);

private:
	std::string myFirstName;

	static int ourInstanceCount;
};



