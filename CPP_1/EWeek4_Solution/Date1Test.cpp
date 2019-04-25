#include "TestHarness.h"

#include "Date1.h"

TEST(ctor, Date1)
{
	Date1 d(2009, 4, 22);

	CHECK_EQUAL(2009, d.year);
	CHECK_EQUAL(4, d.month);
	CHECK_EQUAL(22, d.day);
}

TEST(addDay, Date1)
{
	Date1 nextDay = addOneDay(Date1(2009, 4, 22));

	CHECK_EQUAL(2009, nextDay.year);
	CHECK_EQUAL(4, nextDay.month);
	CHECK_EQUAL(23, nextDay.day);
}

TEST(addDayToEndOfMonth, Date1)
{
	Date1 nextDay = addOneDay(Date1(2009, 4, 30));

	CHECK_EQUAL(2009, nextDay.year);
	CHECK_EQUAL(5, nextDay.month);
	CHECK_EQUAL(1, nextDay.day);
}

TEST(addDayToEndOfFebLeapYear, Date1)
{
	Date1 nextDay = addOneDay(Date1(2012, 2, 28));

	CHECK_EQUAL(2012, nextDay.year);
	CHECK_EQUAL(2, nextDay.month);
	CHECK_EQUAL(29, nextDay.day);
}

TEST(addDayToEndOfFebNotLeapYear, Date1)
{
	Date1 nextDay = addOneDay(Date1(2011, 2, 28));

	CHECK_EQUAL(2011, nextDay.year);
	CHECK_EQUAL(3, nextDay.month);
	CHECK_EQUAL(1, nextDay.day);
}

TEST(addDayToEndOfYear, Date1)
{
	Date1 nextDay = addOneDay(Date1(2009, 12, 31));

	CHECK_EQUAL(2010, nextDay.year);
	CHECK_EQUAL(1, nextDay.month);
	CHECK_EQUAL(1, nextDay.day);
}

TEST(addMonth, Date1)
{
	Date1 nextMonth = addOneMonth(Date1(2009, 5, 5));

	CHECK_EQUAL(2009, nextMonth.year);
	CHECK_EQUAL(6, nextMonth.month);
	CHECK_EQUAL(5, nextMonth.day);
}

TEST(addMonthToDayAtEndOfMonth, Date1)
{
	Date1 nextMonth = addOneMonth(Date1(2009, 1, 31));

	CHECK_EQUAL(2009, nextMonth.year);
	CHECK_EQUAL(3, nextMonth.month);
	CHECK_EQUAL(3, nextMonth.day);
}

TEST(addMonthToDayAtEndOfMonthLeapYear, Date1)
{
	Date1 nextMonth = addOneMonth(Date1(2012, 1, 31));

	CHECK_EQUAL(2012, nextMonth.year);
	CHECK_EQUAL(3, nextMonth.month);
	CHECK_EQUAL(2, nextMonth.day);
}

TEST(addMonthDateInDecember, Date1)
{
	Date1 nextMonth = addOneMonth(Date1(2012, 12, 25));

	CHECK_EQUAL(2013, nextMonth.year);
	CHECK_EQUAL(1, nextMonth.month);
	CHECK_EQUAL(25, nextMonth.day);
}

TEST(addYear, Date1)
{
	Date1 nextYear = addOneYear(Date1(2012, 12, 25));

	CHECK_EQUAL(2013, nextYear.year);
	CHECK_EQUAL(12, nextYear.month);
	CHECK_EQUAL(25, nextYear.day);
}

TEST(addYearLeapYear, Date1)
{
	Date1 nextYear = addOneYear(Date1(2012, 2, 29));

	CHECK_EQUAL(2013, nextYear.year);
	CHECK_EQUAL(3, nextYear.month);
	CHECK_EQUAL(1, nextYear.day);
}