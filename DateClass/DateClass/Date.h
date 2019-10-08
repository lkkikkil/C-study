#include <string>
#include <ctime>

#ifndef DATE_H
#define DATE_H

class Date {
public:
	static const unsigned int monthsPerYear{ 12 };

	explicit Date(int = 1, unsigned int = 1900);
	explicit Date(unsigned int = 1, unsigned int = 1, unsigned int = 1900);
	explicit Date(std::string = "January", unsigned int = 1, unsigned int = 1900);
	explicit Date(time_t*);

	std::string toString1() const;
	std::string toString2() const;
	std::string toString3() const;

private:
	unsigned int month1;
	std::string month2;
	unsigned int day1;
	unsigned int day2;
	unsigned int year;

	void checkDay(int) const;
};

#endif
