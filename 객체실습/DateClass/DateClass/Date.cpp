#include <array>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include<ctime>
#include "Date.h"

using namespace std;

array <int, 13> daysPerMonth{
	0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

array <string, 13> monthName{
	"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
};

Date::Date(int dy, unsigned int yr)
	: day2{ (unsigned int)dy }, year{ yr } {
	checkDay(yr);

	int _month{ 0 };

	while (dy > 0) {
		_month++;
		dy -= daysPerMonth[_month];
	}

	month1 = _month;	
	month2 = monthName[_month];
	day1 = dy + daysPerMonth[_month];
}

Date::Date(unsigned int mn, unsigned int dy, unsigned int yr)
	: month1{ mn }, day1{ dy }, year{ yr } {
	checkDay(yr);

	unsigned int _day{ day1 };

	for (int monthCounter = mn - 1; monthCounter > 0; monthCounter--) {
		_day += daysPerMonth[monthCounter];
	}

	month2 = monthName[mn];
	day2 = _day;
}

Date::Date(string mn, unsigned int dy, unsigned int yr) 
	:month2{ mn }, day1{ dy }, year{ yr } {
	checkDay(yr);

	for (int monthCounter = 1; monthCounter <= 12; monthCounter++) {
		if (mn == monthName[monthCounter]) {
			month1 = monthCounter;
		}
	}

	unsigned int _day{ day1 };

	for (int monthCounter = month1 - 1; monthCounter > 0; monthCounter--) {
		_day += daysPerMonth[monthCounter];
	}

	day2 = _day;
}

Date::Date(time_t* now) {
	struct tm datetime;

	localtime_s(&datetime ,now);

	year = datetime.tm_year + 1900;
	month1 = datetime.tm_mon + 1;
	day1 = datetime.tm_mday;

	unsigned int _day{ day1 };

	for (int monthCounter = month1 - 1; monthCounter > 0; monthCounter--) {
		_day += daysPerMonth[monthCounter];
	}

	month2 = monthName[month1];
	day2 = _day;
}

string Date::toString1() const {
	ostringstream output;
	output << day2 << ' ' << year;
	return output.str();
}

string Date::toString2() const {
	ostringstream output;
	output << month1 << '/' << day1 << '/' << year % 100;
	return output.str();
}

string Date::toString3() const {
	ostringstream output;
	output << month2 << ' ' << day1 << ", " << year;
	return output.str();
}

void Date::checkDay(int _year) const {
	if (_year % 400 == 0 || (_year % 4 == 0 && _year % 100 != 0)) {
		daysPerMonth[2] = 29;
	}
	else {
		daysPerMonth[2] = 28;
	}
}
