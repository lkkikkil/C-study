#include "HugeInteger.h"
#include<iostream>

std::ostream& operator<<(std::ostream& output, const HugeInteger& num) {
	int counter;

	for (counter = 0; (counter < HugeInteger::digits) && (0 == num.integer[counter]); ++counter) {
		;
	}

	if (counter == HugeInteger::digits) {
		output << 0;
	}
	else {
		for (; counter < HugeInteger::digits; ++counter) {
			output << num.integer[counter];
		}
	}

	return output;
}



HugeInteger::HugeInteger(long value) {
	for (int j{ digits - 1 }; value != 0 && j >= 0; j--) {
		integer[j] = value % 10;
		value /= 10;
	}
}

HugeInteger::HugeInteger(const std::string& number) {
	int lenght{ int(number.size()) };

	for (int j{ digits - lenght }, k{ 0 }; j < digits; ++j, ++k) {
		if (isdigit(number[k])) {
			integer[j] = number[k] - '0';
		}
	}
}

HugeInteger HugeInteger::add(HugeInteger& addHugeInteger) {
	HugeInteger temp;
	int carry = 0;

	for (int counter{ digits - 1 }; counter >= 0; counter--) {
		temp.integer[counter] = integer[counter] + addHugeInteger.integer[counter] + carry;

		if (temp.integer[counter] > 9) {
			temp.integer[counter] %= 10;
			carry++;
		}
		else {
			carry = 0;
		}
	}
	return temp;
}

void HugeInteger::subtract(HugeInteger& subtractHugeInteger) {
	for (int subtractCounter = 0; subtractCounter < 40; subtractCounter++) {
		integer[subtractCounter] -= subtractHugeInteger.integer[subtractCounter];
	}

	for (int overCheckCounter = 39; overCheckCounter > 0; overCheckCounter--) {
		if (integer[overCheckCounter] < 0) {
			integer[overCheckCounter] += 10;
			integer[overCheckCounter - 1]--;
		}
	}
}

bool HugeInteger::isEqualTo(HugeInteger& otherHugeInteger) {
	for (int equalCounter = 0; equalCounter < 40; equalCounter++) {
		if (integer[equalCounter] != otherHugeInteger.integer[equalCounter]) {
			return false;
		}
	}
	return true;
}

bool HugeInteger::isNotEqualTo(HugeInteger& otherHugeInteger) {
	if (!(isEqualTo(otherHugeInteger))) {
		return true;
	}
	return false;
}

bool HugeInteger::isGreaterThan(HugeInteger& otherHugeInteger) {
	if (isEqualTo(otherHugeInteger)) {
		return false;
	}

	for (int greaterCheck = 0; greaterCheck < 40; greaterCheck++) {
		if (integer[greaterCheck] > otherHugeInteger.integer[greaterCheck]) {
			return true;
		}
		else if (integer[greaterCheck] < otherHugeInteger.integer[greaterCheck]) {
			return false;
		}
		else {
			;
		}
	}
}

bool HugeInteger::isLessThan(HugeInteger& otherHugeInteger) {
	if (isEqualTo(otherHugeInteger)) {
		return false;
	}

	for (int greaterCheck = 0; greaterCheck < 40; greaterCheck++) {
		if (integer[greaterCheck] < otherHugeInteger.integer[greaterCheck]) {
			return true;
		}
		else if (integer[greaterCheck] > otherHugeInteger.integer[greaterCheck]) {
			return false;
		}
		else {
			;
		}
	}
}

bool HugeInteger::isGreaterThanOrEqualTo(HugeInteger& otherHugeInteger) {
	if (!(isLessThan(otherHugeInteger))) {
		return true;
	}
	return false;
}

bool HugeInteger::isLessThanOrEqualTo(HugeInteger& otherHugeInteger) {
	if (!(isGreaterThan(otherHugeInteger))) {
		return true;
	}
	return false;
}

bool HugeInteger::operator == (HugeInteger& otherHugeInteger) {
	if (isEqualTo(otherHugeInteger)) {
		return true;
	}
	return false;
}

bool HugeInteger::operator != (HugeInteger& otherHugeInteger) {
	if (isNotEqualTo(otherHugeInteger)) {
		return true;
	}
	return false;
}

bool HugeInteger::operator > (HugeInteger& otherHugeInteger) {
	if (isGreaterThan(otherHugeInteger)) {
		return true;
	}
	return false;
}

bool HugeInteger::operator < (HugeInteger& otherHugeInteger) {
	if (isLessThan(otherHugeInteger)) {
		return true;
	}
	return false;
}

bool HugeInteger::operator >= (HugeInteger& otherHugeInteger) {
	if (isGreaterThanOrEqualTo(otherHugeInteger)) {
		return true;
	}
	return false;
}

bool HugeInteger::operator <= (HugeInteger& otherHugeInteger) {
	if (isLessThanOrEqualTo(otherHugeInteger)) {
		return true;
	}
	return false;
}

HugeInteger HugeInteger::operator * (HugeInteger& multiplyHugeInteger) {
	HugeInteger product(0), temp(0);
	int carry = 0;

	for (int numberB = digits - 1, counter = 0; numberB >= 0; numberB--, counter++) {
		temp = 0;

		for (int numberA = digits - 1; numberA >= counter; numberA--) {
			temp.integer[numberA - counter] = multiplyHugeInteger.integer[numberB] * integer[numberA] + carry;

			if (temp.integer[numberA - counter] >= 10) {
				carry = temp.integer[numberA - counter] / 10;
				temp.integer[numberA - counter] %= 10;
			}
			else {
				carry = 0;
			}
		}
		product = product.add(temp);
	}

	return product;
}

HugeInteger HugeInteger::operator / (HugeInteger& divideHugeInteger) {
	HugeInteger temp;

	for (; *this > divideHugeInteger; this->subtract(divideHugeInteger)) {
		temp.integer[digits - 1]++;

		for (int overCounter = digits - 1; overCounter >= 0; overCounter--) {
			if (temp.integer[overCounter] >= 10) {
				temp.integer[overCounter] %= 10;
				temp.integer[overCounter - 1]++;
			}
		}
	}

	return temp;
}
