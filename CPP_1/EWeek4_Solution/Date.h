#ifndef DATE_H_ALREADY_INCLUDED
#define DATE_H_ALREADY_INCLUDED

#include <iosfwd>

#pragma once

struct Date
{
    Date(int year, int month, int day);

    int year;
    int month;
    int day;
};

enum class Day
{
    None,
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
};

std::ostream& operator<<(std::ostream& os, Day);

Date addOneDay(const Date& date);

Date addOneMonth(const Date& date);

Date addOneYear(const Date& date);

Day getDayOfWeek(const Date& date);

Date firstMondayFollowing(const Date& date);

#endif