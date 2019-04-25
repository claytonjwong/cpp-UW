#pragma once

/*

1. Write functions to add one day, another function to add one month, and yet another function
to add one year to a Date struct.

struct Date
{
int year;
int month;
int day;
};
Pass Dates by reference when appropriate (i.e., Date& or const Date&).
For example, the following function returns by value a new Date instance with one day added to the passed in date.

Date addOneDay(const Date& date);

*/

enum Month{
	JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC,
};
const Month MAX_MONTH=Month::DEC;

struct Date
{
	int year;
	int month;
	int day;
	Date(int y,int m,int d) : year{y},month{m},day{d} {}
};

Month getMonth(int m);
bool isLeapYear(const Date& d);
int getMaxDay(const Date& d);
Date addOneDay(const Date& d);
Date addOneMonth(const Date& d);
Date addOneYear(const Date& d);