#include "HugeInteger.h"
#include<iostream>

void overCheck(int*);
void underCheck(int*);

HugeInteger::HugeInteger() {
	for (int initialCounter = 0; initialCounter < 40; initialCounter++) {
		hugeInteger[initialCounter] = 0;
	}
}

void HugeInteger::input(int inputArray[40]) {
	for (int inputCounter = 0; inputCounter < 40; inputCounter++) {
		hugeInteger[inputCounter] = inputArray[inputCounter];
	}
}

void HugeInteger::output() {
	for (int outputCounter = 0; outputCounter < 40; outputCounter++) {
		std::cout << hugeInteger[outputCounter];
	}
	std::cout << "\n";
}

void HugeInteger::add(HugeInteger addHugeInteger) {
	for (int addCounter = 0; addCounter < 40; addCounter++) {
		hugeInteger[addCounter] += addHugeInteger.hugeInteger[addCounter];
	}
	overCheck(hugeInteger);
}

void overCheck(int* _hugeInteger) {
	for (int overCheckCounter = 39; overCheckCounter > 0; overCheckCounter--) {
		if (_hugeInteger[overCheckCounter] >= 10) {
			_hugeInteger[overCheckCounter] -= 10;
			_hugeInteger[overCheckCounter - 1]++;
		}
	}
}

void HugeInteger::subtract(HugeInteger subtractHugeInteger) {
	for (int subtractCounter = 0; subtractCounter < 40; subtractCounter++) {
		hugeInteger[subtractCounter] -= subtractHugeInteger.hugeInteger[subtractCounter];
	}
	underCheck(hugeInteger);
}

void underCheck(int* _hugeInteger) {
	for (int overCheckCounter = 39; overCheckCounter > 0; overCheckCounter--) {
		if (_hugeInteger[overCheckCounter] < 0) {
			_hugeInteger[overCheckCounter] += 10;
			_hugeInteger[overCheckCounter - 1]--;
		}
	}
}

bool HugeInteger::isEqualTo(HugeInteger otherHugeInteger) {
	for (int equalCounter = 0; equalCounter < 40; equalCounter++) {
		if (hugeInteger[equalCounter] != otherHugeInteger.hugeInteger[equalCounter]) {
			return false;
		}
	}
	return true;
}

bool HugeInteger::isNotEqualTo(HugeInteger otherHugeInteger) {
	if (!(isEqualTo(otherHugeInteger))) {
		return true;
	}
	return false;
}

bool HugeInteger::isGreaterThan(HugeInteger otherHugeInteger) {
	if (isEqualTo(otherHugeInteger)) {
		return false;
	}

	for (int greaterCheck = 0; greaterCheck < 40; greaterCheck++) {
		if (hugeInteger[greaterCheck] > otherHugeInteger.hugeInteger[greaterCheck]) {
			return true;
		}
		else if (hugeInteger[greaterCheck] < otherHugeInteger.hugeInteger[greaterCheck]) {
			return false;
		}
		else {
			;
		}
	}
}

bool HugeInteger::isLessThan(HugeInteger otherHugeInteger) {
	if (isEqualTo(otherHugeInteger)) {
		return false;
	}

	for (int greaterCheck = 0; greaterCheck < 40; greaterCheck++) {
		if (hugeInteger[greaterCheck] < otherHugeInteger.hugeInteger[greaterCheck]) {
			return true;
		}
		else if (hugeInteger[greaterCheck] > otherHugeInteger.hugeInteger[greaterCheck]) {
			return false;
		}
		else {
			;
		}
	}
}

bool HugeInteger::isGreaterThanOrEqualTo(HugeInteger otherHugeInteger) {
	if (!(isLessThan(otherHugeInteger))) {
		return true;
	}
	return false;
}

bool HugeInteger::isLessThanOrEqualTo(HugeInteger otherHugeInteger) {
	if (!(isGreaterThan(otherHugeInteger))) {
		return true;
	}
	return false;
}

bool HugeInteger::isZero() {
	for (int zeroCounter = 0; zeroCounter < 40; zeroCounter++) {
		if (hugeInteger[zeroCounter] != 0) {
			return false;
		}
	}
	return true;
}
