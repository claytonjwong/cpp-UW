#ifndef DATE1_H_ALREADY_INCLUDED
#define DATE1_H_ALREADY_INCLUDED

#pragma once

struct Date1
{
	Date1(int year, int month, int day);

	int year;
	int month;
	int day;
};

Date1 addOneDay(const Date1& date);

Date1 addOneMonth(const Date1& date);

Date1 addOneYear(const Date1& date);

#endif