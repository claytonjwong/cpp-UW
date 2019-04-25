/*

2. Define a table of the names of months of the year and the number of days in each month.
Write out that table to a stringstream. Do this twice; once using an array of char
for the names and an array for the number of days and a second time using an array of structures,
with each structure holding the name of a month and the number of days in it.

*/

#include <string>
#include <sstream>

using namespace std;

string getMonthsTwoArrays(){
	constexpr int MonthSize=12;
	const char* names[MonthSize] = {
		"JAN", "FEB", "MAR", "APR", "MAY", "JUN",
		"JUL", "AUG", "SEP", "OCT", "NOV", "DEC",
	};
	const int days[MonthSize] = {
		31, 28, 31, 30, 31, 30,
		31, 31, 30, 31, 30, 31,
	};
	stringstream ss;
	for (int i=0; i<MonthSize; ++i)
		ss << names[i] << ": " << days[i] << endl;
	return ss.str();
}

string getMonthsOneArrayStruct(){
	constexpr int MonthSize=12;
	struct Month {
		string name;
		int days;
		Month(string name, int days) : name{name}, days{days} {}
	};
	auto jan=Month("JAN",31),feb=Month("FEB",28),mar=Month("MAR",31),apr=Month("APR",30),
		 may=Month("MAY",31),jun=Month("JUN",30),jul=Month("JUL",31),aug=Month("AUG",31),
		 sep=Month("SEP",30),oct=Month("OCT",31),nov=Month("NOV",30),dec=Month("DEC",31);
	const Month months[MonthSize] = {
		jan,feb,mar,apr,
		may,jun,jul,aug,
		sep,oct,nov,dec,
	};
	stringstream ss;
	for (const auto& m: months)
		ss << m.name << ": " << m.days << endl;
	return ss.str();
}