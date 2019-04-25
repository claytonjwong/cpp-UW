#include "Date1.h"

// Solution using C++ standard library data utilities.

#include <ctime>

// This was not asked for on assignment. Shown here to introduce the idea of a constructor.
// It ensures a Data is always initialized as well as making it easy to initialize
//
// No error checking for invalid dates is provided. In a production struct this checking
// should be added as well as handling invalid dates (maybe throw an exception)
Date1::Date1(int y, int m, int d)
	: year(y),
	month(m),
	day(d)
{
}

Date1 addOneDay(const Date1& date)
{
	time_t rawTime;
	time(&rawTime);
	struct tm* timeInfo = localtime(&rawTime);
	timeInfo->tm_year = date.year - 1900;
	timeInfo->tm_mon = date.month - 1;
	timeInfo->tm_mday = date.day + 1;
	mktime(timeInfo);

	return Date1(timeInfo->tm_year + 1900, timeInfo->tm_mon + 1, timeInfo->tm_mday);
}

Date1 addOneMonth(const Date1& date)
{
	time_t rawTime;
	time(&rawTime);
	struct tm* timeInfo = localtime(&rawTime);
	timeInfo->tm_year = date.year - 1900;
	timeInfo->tm_mon = date.month - 1 + 1;
	timeInfo->tm_mday = date.day;
	mktime(timeInfo);

	return Date1(timeInfo->tm_year + 1900, timeInfo->tm_mon + 1, timeInfo->tm_mday);
}

Date1 addOneYear(const Date1& date)
{
	time_t rawTime;
	time(&rawTime);
	struct tm* timeInfo = localtime(&rawTime);
	timeInfo->tm_year = date.year - 1900 + 1;
	timeInfo->tm_mon = date.month - 1;
	timeInfo->tm_mday = date.day;
	mktime(timeInfo);

	return Date1(timeInfo->tm_year + 1900, timeInfo->tm_mon + 1, timeInfo->tm_mday);
}