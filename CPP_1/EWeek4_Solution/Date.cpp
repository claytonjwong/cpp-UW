#include "Date.h"

#include <stdexcept>
#include <ostream>

// Solution using our own algorithms

// This is an anonymous namespace. It is another way to declare data to be private to a file. The C method of this is to 
// declare the data as static.
namespace
{
    char daytab[2][13] =
    {
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    };

    bool isLeapYear(int year)
    {
        return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
    }

    bool isLastDayOfMonth(const Date& date)
    {
        if (daytab[isLeapYear(date.year)][date.month] == date.day)
        {
            return true;
        }

        return false;
    }

    bool isLastDayOfYear(const Date& date)
    {
        if (date.month == 12 && date.day == 31)
        {
            return true;
        }

        return false;
    }

    bool isDayWithinMonth(const Date& date)
    {
        if (daytab[isLeapYear(date.year)][date.month] < date.day)
        {
            return false;
        }

        return true;
    }

    int lastDayOfMonth(const Date& date)
    {
        return daytab[isLeapYear(date.year)][date.month];
    }

    bool isDecember(const Date& date)
    {
        return date.month == 12;
    }

    int getDaysToNextMonday(Day day)
    {
        switch (day)
        {
        case Day::Monday:  return 7;
        case Day::Tuesday:  return 6;
        case Day::Wednesday:  return 5;
        case Day::Thursday:  return 4;
        case Day::Friday:  return 3;
        case Day::Saturday:  return 2;
        case Day::Sunday:  return 1;
        }

        throw std::out_of_range("Day is not valid");
    }
}

std::ostream& operator<<(std::ostream& os, Day day)
{
    switch (day)
    {
    default:
    case Day::None:
        os << "Day::None";
        break;
    case Day::Sunday:
        os << "Day::Sunday";
        break;
    case Day::Monday:
        os << "Day::Monday";
        break;
    case Day::Tuesday:
        os << "Day::Tuesday";
        break;
    case Day::Wednesday:
        os << "Day::Wednesday";
        break;
    case Day::Thursday:
        os << "Day::Thursday";
        break;
    case Day::Friday:
        os << "Day::Friday";
        break;
    case Day::Saturday:
        os << "Day::Saturday";
        break;
    }

    return os;
}

// This was not asked for on assignment. Shown here to introduce the idea of a constructor.
// It ensures a Data is always initialized as well as making it easy to initialize
//
// No error checking for invalid dates is provided. In a production struct this checking
// should be added as well as handling invalid dates (maybe throw an exception)
Date::Date(int y, int m, int d)
    : year(y),
    month(m),
    day(d)
{
}

Date addOneDay(const Date& date)
{
    Date nextDay = date;

    if (isLastDayOfYear(date))
    {
        nextDay.year++;
        nextDay.month = 1;
        nextDay.day = 1;
    }
    else if (isLastDayOfMonth(date))
    {
        nextDay.month++;
        nextDay.day = 1;
    }
    else
    {
        nextDay.day++;
    }

    return nextDay;
}

Date addOneMonth(const Date& date)
{
    Date nextMonth = date;

    if (!isDecember(nextMonth))
    {
        nextMonth.month++;
    }
    else
    {
        nextMonth.year++;
        nextMonth.month = 1;
    }

    if (!isDayWithinMonth(nextMonth))
    {
        nextMonth.day = lastDayOfMonth(nextMonth);
    }

    return nextMonth;
}

Date addOneYear(const Date& date)
{
    Date nextYear = date;
    nextYear.year++;

    if (!isDayWithinMonth(nextYear))
    {
        nextYear.day = lastDayOfMonth(nextYear);
    }

    return nextYear;
}

// Zeller's congruence algorithm. Note: I did not expect this algorithm or this level of implementation in your solution.
//
Day getDayOfWeek(const Date& date)
{
    int month = date.month;
    int year = date.year;
    int day = date.day;

    if (month == 1)
    {
        month = 13;
        year--;
    }

    if (month == 2)
    {
        month = 14;
        year--;
    }

    int q = day;
    int m = month;
    int k = year % 100;
    int j = year / 100;
    int h = q + 13 * (m + 1) / 5 + k + k / 4 + j / 4 + 5 * j;
    h = h % 7;

    switch (h)
    {
    case 0: return Day::Saturday;
    case 1: return Day::Sunday;
    case 2: return Day::Monday;
    case 3: return Day::Tuesday;
    case 4: return Day::Wednesday;
    case 5: return Day::Thursday;
    case 6: return Day::Friday;
    }

    return Day::None;
}

Date firstMondayFollowing(const Date& date)
{
    Date firstMonday = date;

    Day dayOfWeek = getDayOfWeek(date);

    int daysToNextMonday = getDaysToNextMonday(dayOfWeek);
    firstMonday.day += daysToNextMonday;

    if (!isDayWithinMonth(firstMonday))
    {
        firstMonday.day = firstMonday.day - lastDayOfMonth(firstMonday);

        if (isDecember(firstMonday))
        {
            firstMonday.year++;
            firstMonday.month = 1;
        }
        else
        {
            firstMonday.month++;
        }
    }

    return firstMonday;
}