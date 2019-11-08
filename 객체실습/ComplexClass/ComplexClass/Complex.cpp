#include "Complex.h"
#include <string>
#include <iostream>

using namespace std;

ostream& operator<<(ostream& output, const Complex& _complex) {
	output << _complex.sign1 << _complex.real << " " << _complex.sign2 << " " << _complex.imaginary << "i";
	return output;
}

istream& operator>>(istream& input, Complex& _complex) {
	char checkComplex[10];
	input.getline(checkComplex, 10);

	int check{ 0 };

	if (checkComplex[1] == '\0') {
		if (checkComplex[check] < 48 || checkComplex[check] > 57) {
			input.clear(ios::failbit);
			return input;
		}
		else {
			_complex.real = (int)checkComplex[check] - '0';
			_complex.sign1 = '\0';
			_complex.sign2 = '+';
			_complex.imaginary = 0;
		}
	}
	else if (checkComplex[2] == '\0') {
		if (checkComplex[check] == '-') {
			_complex.sign2 = '+';
			_complex.imaginary = 0;
			_complex.sign1 = '-';
			check++;

			if (checkComplex[check] < 48 || checkComplex[check] > 57) {
				input.clear(ios::failbit);
				return input;
			}
			else {
				_complex.real = (int)checkComplex[check] - '0';
				check++;
			}
		}
		else if (checkComplex[check] >= 48 && checkComplex[check] <= 57) {
			_complex.sign1 = '\0';
			_complex.real = 0;
			_complex.sign2 = '+';
			_complex.imaginary = (int)checkComplex[check] - '0';
			check++;
			if (checkComplex[check] != 'i') {
				input.clear(ios::failbit);
				return input;
			}
		}
		else {
			input.clear(ios::failbit);
			return input;
		}
	}
	else if (checkComplex[3] == '\0') {
		if (checkComplex[check] == '-') {
			_complex.sign1 = '\n';
			_complex.real = 0;
			_complex.sign2 = '-';
			check++;
		}
		else {
			input.clear(ios::failbit);
			return input;
		}

		if (checkComplex[check] < 48 || checkComplex[check] > 57) {
			input.clear(ios::failbit);
			return input;
		}
		else {
			_complex.imaginary = (int)checkComplex[check] - '0';
			check++;
		}

		if (checkComplex[check] != 'i') {
			input.clear(ios::failbit);
			return input;
		}
	}
	else {

		if (checkComplex[check] == '-') {
			_complex.sign1 = '-';
			check++;
		}
		else if (checkComplex[check] < 48 || checkComplex[check] > 57) {
			input.clear(ios::failbit);
			return input;
		}
		else {
			_complex.sign1 = '\0';
		}

		if (checkComplex[check] < 48 || checkComplex[check] > 57) {
			input.clear(ios::failbit);
			return input;
		}
		else {
			_complex.real = (int)checkComplex[check] - '0';
			check++;
		}

		if (checkComplex[check] != ' ') {
			input.clear(ios::failbit);
			return input;
		}
		else {
			check++;
		}

		if (checkComplex[check] == '+' || checkComplex[check] == '-') {
			_complex.sign2 = checkComplex[check];
			check++;
		}
		else {
			input.clear(ios::failbit);
			return input;
		}

		if (checkComplex[check] != ' ') {
			input.clear(ios::failbit);
			return input;
		}
		else {
			check++;
		}

		if (checkComplex[check] < 48 || checkComplex[check] > 57) {
			input.clear(ios::failbit);
			return input;
		}
		else {
			_complex.imaginary = (int)checkComplex[check] - '0';
			check++;
		}

		if (checkComplex[check] != 'i') {
			input.clear(ios::failbit);
			return input;
		}
	}

	return input;
}
