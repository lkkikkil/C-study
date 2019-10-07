#include "Rational.h"
#include <sstream>

Rational::Rational() {
	setRational(1, 1);
}

Rational::Rational(int _numerator, int _denominator) {
	setRational(_numerator, _denominator);
}

void Rational::setRational(int _numerator, int _denominator) {
	setNumerator(_numerator);
	setDenominator(_denominator);

	divideNumber = greatestDivisor();

	numerator /= divideNumber;
	denominator /= divideNumber;
}

void Rational::setNumerator(int _numerator) {
	numerator = _numerator;
}

void Rational::setDenominator(int _denominator) {
	denominator = _denominator;
}

int Rational::getNumerator() {
	return numerator;
}

int Rational::getDenominator() {
	return denominator;
}

void Rational::add(Rational addRational) {
	numerator = numerator * addRational.denominator + addRational.numerator * denominator;
	denominator = denominator * addRational.denominator;

	divideNumber = greatestDivisor();

	numerator /= divideNumber;
	denominator /= divideNumber;
}

void Rational::subtract(Rational subtractRational) {
	numerator = numerator * subtractRational.denominator - subtractRational.numerator * denominator;
	denominator = denominator * subtractRational.denominator;

	divideNumber = greatestDivisor();

	numerator /= divideNumber;
	denominator /= divideNumber;
}

void Rational::multiply(Rational multiplyRational) {
	numerator *= multiplyRational.numerator;
	denominator *= multiplyRational.denominator;

	divideNumber = greatestDivisor();

	numerator /= divideNumber;
	denominator /= divideNumber;
}

void Rational::divide(Rational divideRational) {
	numerator *= divideRational.denominator;
	denominator *= divideRational.numerator;

	divideNumber = greatestDivisor();

	numerator /= divideNumber;
	denominator /= divideNumber;
}

std::string Rational::toRationalString() {
	std::ostringstream output;
	output << getNumerator() << "/" << getDenominator();
	return output.str();
}

double Rational::toDouble() {
	return getNumerator() * 1.0 / getDenominator();
}

int Rational::greatestDivisor() {
	int number1 = getNumerator();
	int number2 = getDenominator();
	int number3;

	while (number2 != 0) {
		number3 = number1 % number2;
		number1 = number2;
		number2 = number3;
	}

	return number1;
}
