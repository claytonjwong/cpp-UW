#include "Date.h"

Month getMonth(int m){ // return 0-based index of month value
	switch (m){ 
		case 1: return Month::JAN;
		case 2: return Month::FEB;
		case 3: return Month::MAR;
		case 4: return Month::APR;
		case 5: return Month::MAY;
		case 6: return Month::JUN;
		case 7: return Month::JUL;
		case 8: return Month::AUG;
		case 9: return Month::SEP;
		case 10: return Month::OCT;
		case 11: return Month::NOV;
		case 12: return Month::DEC;
		default:
			return Month::JAN;
	}
}

int getMaxDay(const Date& d){
	static int daysPerMonth[]={31,28,31,30,31,30,31,31,30,31,30,31}; // key is 0-based index of month value
	return daysPerMonth[getMonth(d.month)];
}

bool isLeapYear(const Date& d){
	return ((d.year%4==0 && d.year%100!=0) || d.year%400==0);
}

Date addOneDay(const Date& d){
	Date res(d.year,d.month,d.day+1);
	int maxDay=getMaxDay(res);
	if (getMonth(res.month)==Month::FEB && isLeapYear(d)){
		++maxDay;
	}
	if (res.day > maxDay){
		res.day=1;
		++res.month;
	}
	if (res.month > MAX_MONTH){
		res.month=1;
		++res.year;
	}
	return res;
}

Date addOneMonth(const Date& d){
	Date res(d.year,d.month,d.day);
	res.month=1+getMonth(res.month)>MAX_MONTH ? getMonth(Month::JAN) : 1+res.month;
	switch (getMonth(res.month)){
		case Month::JAN:
			++res.year;
			break;
		case Month::FEB:
			if (res.day > 28){
				if (isLeapYear(res))
					res.day=29;
				else
					res.day=28;
			}
				
			break;
		case Month::APR:
		case Month::JUN:
		case Month::SEP:
		case Month::NOV:
			if (res.day > 30)
				res.day=30;
	}
	return res;
}

Date addOneYear(const Date& d){
	Date res(d.year,d.month,d.day);
	++res.year;
	return res;
}
