#include "TestHarness.h"

#include "Date.h"

TEST(ctor, Date)
{
    Date d(2009, 4, 22);

    CHECK_EQUAL(2009, d.year);
    CHECK_EQUAL(4, d.month);
    CHECK_EQUAL(22, d.day);
}

TEST(addDay, Date)
{
    Date nextDay = addOneDay(Date(2009, 4, 22));

    CHECK_EQUAL(2009, nextDay.year);
    CHECK_EQUAL(4, nextDay.month);
    CHECK_EQUAL(23, nextDay.day);
}

TEST(addDayToEndOfMonth, Date)
{
    Date nextDay = addOneDay(Date(2009, 4, 30));

    CHECK_EQUAL(2009, nextDay.year);
    CHECK_EQUAL(5, nextDay.month);
    CHECK_EQUAL(1, nextDay.day);
}

TEST(addDayToEndOfFebLeapYear, Date)
{
    Date nextDay = addOneDay(Date(2012, 2, 28));

    CHECK_EQUAL(2012, nextDay.year);
    CHECK_EQUAL(2, nextDay.month);
    CHECK_EQUAL(29, nextDay.day);
}

TEST(addDayToEndOfFebNotLeapYear, Date)
{
    Date nextDay = addOneDay(Date(2011, 2, 28));

    CHECK_EQUAL(2011, nextDay.year);
    CHECK_EQUAL(3, nextDay.month);
    CHECK_EQUAL(1, nextDay.day);
}

TEST(addDayToEndOfYear, Date)
{
    Date nextDay = addOneDay(Date(2009, 12, 31));

    CHECK_EQUAL(2010, nextDay.year);
    CHECK_EQUAL(1, nextDay.month);
    CHECK_EQUAL(1, nextDay.day);
}

TEST(addMonth, Date)
{
    Date nextMonth = addOneMonth(Date(2009, 5, 5));

    CHECK_EQUAL(2009, nextMonth.year);
    CHECK_EQUAL(6, nextMonth.month);
    CHECK_EQUAL(5, nextMonth.day);
}

TEST(addMonthToDayAtEndOfMonth, Date)
{
    Date nextMonth = addOneMonth(Date(2009, 1, 31));

    CHECK_EQUAL(2009, nextMonth.year);
    CHECK_EQUAL(2, nextMonth.month);
    CHECK_EQUAL(28, nextMonth.day);
}

TEST(addMonthToDayAtEndOfMonthLeapYear, Date)
{
    Date nextMonth = addOneMonth(Date(2012, 1, 31));

    CHECK_EQUAL(2012, nextMonth.year);
    CHECK_EQUAL(2, nextMonth.month);
    CHECK_EQUAL(29, nextMonth.day);
}

TEST(addMonthDateInDecember, Date)
{
    Date nextMonth = addOneMonth(Date(2012, 12, 25));

    CHECK_EQUAL(2013, nextMonth.year);
    CHECK_EQUAL(1, nextMonth.month);
    CHECK_EQUAL(25, nextMonth.day);
}

TEST(addYear, Date)
{
    Date nextYear = addOneYear(Date(2012, 12, 25));

    CHECK_EQUAL(2013, nextYear.year);
    CHECK_EQUAL(12, nextYear.month);
    CHECK_EQUAL(25, nextYear.day);
}

TEST(addYearLeapYear, Date)
{
    Date nextYear = addOneYear(Date(2012, 2, 29));

    CHECK_EQUAL(2013, nextYear.year);
    CHECK_EQUAL(2, nextYear.month);
    CHECK_EQUAL(28, nextYear.day);
}

TEST(dayOfWeek, Date)
{
    CHECK_EQUAL(Day::Thursday, getDayOfWeek(Date(2013, 8, 8)));
}

TEST(firstMondayFollowing, Date)
{
    Date firstMonday = firstMondayFollowing(Date(2013, 8, 8));

    CHECK_EQUAL(2013, firstMonday.year);
    CHECK_EQUAL(8, firstMonday.month);
    CHECK_EQUAL(12, firstMonday.day);
}

TEST(firstMondayFollowingInNextMonth, Date)
{
    Date firstMonday = firstMondayFollowing(Date(2013, 8, 27));

    CHECK_EQUAL(2013, firstMonday.year);
    CHECK_EQUAL(9, firstMonday.month);
    CHECK_EQUAL(2, firstMonday.day);
}

TEST(firstMondayFollowingInNextYear, Date)
{
    Date firstMonday = firstMondayFollowing(Date(2013, 12, 31));

    CHECK_EQUAL(2014, firstMonday.year);
    CHECK_EQUAL(1, firstMonday.month);
    CHECK_EQUAL(6, firstMonday.day);
}