#include "TestHarness.h"
#include "Date.h"

TEST(addOneDay,Date){
	Date a(1900,1,1),b=addOneDay(a);
	CHECK_EQUAL(a.year,b.year);
	CHECK_EQUAL(a.month,b.month);
	CHECK_EQUAL(a.day+1,b.day);
}

TEST(addOneDayToGetNextMonth,Date){
	Date a(1900,1,31),b=addOneDay(a);
	CHECK_EQUAL(a.year,b.year);
	CHECK_EQUAL(a.month+1,b.month);
	CHECK_EQUAL(1,b.day);
}

TEST(addOneDayLeapYear,Date){
	Date a(2016,2,28),b=addOneDay(a);
	CHECK_EQUAL(a.year,b.year);
	CHECK_EQUAL(a.month,b.month);
	CHECK_EQUAL(a.day+1,b.day);
}

TEST(addOneDayToGetNextYear,Date){
	Date a(1900,12,31),b=addOneDay(a);
	CHECK_EQUAL(a.year+1,b.year);
	CHECK_EQUAL(Month::JAN,getMonth(b.month));
	CHECK_EQUAL(1,b.day);
}

TEST(addOneDayAndOneMonth,Date){
	Date a(1900,1,1),b=addOneDay(a);
	b=addOneMonth(b);
	CHECK_EQUAL(a.year,b.year);
	CHECK_EQUAL(a.month+1,b.month);
	CHECK_EQUAL(a.day+1,b.day);
}

TEST(addOneMonthToGetNextYear,Date){
	Date a(1900,12,1),b=addOneMonth(a);
	CHECK_EQUAL(a.year+1,b.year);
	CHECK_EQUAL(Month::JAN,getMonth(b.month));
	CHECK_EQUAL(a.day,b.day);
}

TEST(addOneMonthToGetMaxDay28From31,Date){
	Date a(1900,1,31),b=addOneMonth(a);
	CHECK_EQUAL(Month::FEB,getMonth(b.month));
	CHECK_EQUAL(28,b.day);
}

TEST(addOneMonthToGetMaxDay30From31,Date){
	Date a(1900,8,31),b=addOneMonth(a);
	CHECK_EQUAL(Month::SEP,getMonth(b.month));
	CHECK_EQUAL(30,b.day);
}

TEST(addOneYear,Date){
	Date a(1900,1,1),b=addOneYear(a);
	CHECK_EQUAL(a.year+1,b.year);
	CHECK_EQUAL(a.month,b.month);
	CHECK_EQUAL(a.day,b.day);
}