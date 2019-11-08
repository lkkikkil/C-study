#include <iomanip>
#include "PhoneNumber.h"

using namespace std;

ostream& operator<<(ostream& output, const PhoneNumber& number) {
	output << "Area code: " << number.areaCode << "\nExchange: "
		<< number.exchange << "\nLine: " << number.line << "\n"
		<< "(" << number.areaCode << ") " << number.exchange << "-"
		<< number.line << "\n";
	return output;
}

istream& operator>>(istream& input, PhoneNumber& number) {
	input.getline(number.numbers, 15);

	if (number.numbers[0] != '(') {
		input.clear(ios::failbit);
	}

	for (int checkCounter = 1; checkCounter <= 2; checkCounter++) {
		if (number.numbers[checkCounter] < 50 || number.numbers[checkCounter] > 57) {
			input.clear(ios::failbit);
		}
		else {
			number.areaCode[checkCounter - 1] = number.numbers[checkCounter];
		}
	}

	if (number.numbers[3] < 48 || number.numbers[1] > 57) {
		input.clear(ios::failbit);
	}
	else {
		number.areaCode[2] = number.numbers[3];
	}

	if (number.numbers[4] != ')') {
		input.clear(ios::failbit);
	}

	if (number.numbers[5] != ' ') {
		input.clear(ios::failbit);
	}

	if (number.numbers[6] < 50 || number.numbers[6] > 57) {
		input.clear(ios::failbit);
	}
	else {
		number.exchange[0] = number.numbers[6];
	}

	for (int checkCounter = 7; checkCounter <= 8; checkCounter++) {
		if (number.numbers[checkCounter] < 48 || number.numbers[checkCounter] > 57) {
			input.clear(ios::failbit);
		}
		else {
			number.exchange[checkCounter - 6] = number.numbers[checkCounter];
		}
	}

	if (number.numbers[9] != '-') {
		input.clear(ios::failbit);
	}	

	if (number.numbers[10] < 50 || number.numbers[10] > 57) {
		input.clear(ios::failbit);
	}

	for (int checkCounter = 10; checkCounter <= 13; checkCounter++) {
		if (number.numbers[checkCounter] < 48 || number.numbers[checkCounter] > 57) {
			input.clear(ios::failbit);
		}
		else { 
			number.line[checkCounter - 10] = number.numbers[checkCounter];

		}
	}

	number.numbers[14] = '\0';
	number.areaCode[3] = '\0';
	number.exchange[3] = '\0';
	number.line[4] = '\0';

	return input;
}
