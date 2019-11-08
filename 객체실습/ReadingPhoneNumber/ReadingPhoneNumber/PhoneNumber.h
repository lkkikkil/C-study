#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <iostream>
#include <string>

class PhoneNumber {
	friend std::ostream& operator<<(std::ostream&, const PhoneNumber&);
	friend std::istream& operator>>(std::istream&, PhoneNumber&);

private:
	char areaCode[4];
	char exchange[4];
	char line[5];
	char numbers[15];
};

#endif
