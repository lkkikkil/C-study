#include "Quadratic.h"
#include <iostream>
#include <sstream>
#include <cmath>

Quadratic::Quadratic(double _a, double _b, double _c) {
	setABC(_a, _b, _c);
}

void Quadratic::setABC(double _a, double _b, double _c) {
	setA(_a);
	setB(_b);
	setC(_c);
}

void Quadratic::setA(double _a) {
	if (_a == 0) {
		a = 1;
	}
	else {
		a = _a;
	}
}

void Quadratic::setB(double _b) {
	b = _b;
}

void Quadratic::setC(double _c) {
	c = _c;
}

double Quadratic::getA() {
	return a;
}

double Quadratic::getB() {
	return b;
}

double Quadratic::getC() {
	return c;
}

void Quadratic::add(Quadratic addObject) {
	a += addObject.a;
	b += addObject.b;
	c += addObject.c;
}

void Quadratic::subtract( Quadratic subtractObject) {
	a -= subtractObject.a;
	b -= subtractObject.b;
	c -= subtractObject.c;
}

std::string Quadratic::toString() {
	std::ostringstream output;
	output << "(" << getA() << ")x^2 + (" << getB() << ")x + (" << getC() << ")";
	return output.str();
}

void Quadratic::solve() {
	if (pow(getB(), 2) - 4 * getA() * getC() <= 0) {
		std::cout << "No Real Roots.\n";
		return;
	}

	double root = sqrt(pow(getB(), 2) - 4 * getA() * getC());

	double answer1 = (-getB() + root) / (2 * getA());
	double answer2 = (-getB() - root) / (2 * getA());

	std::cout << "answer = " << answer1 << ", " << answer2 << "\n";
}
