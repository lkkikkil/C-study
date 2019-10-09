#include <iostream>
#include "Rational.h"

using namespace std;

int main() {
	Rational Rational1;
	Rational Rational2(6, 9);
	Rational testRational(10, 20);

	cout << "Rational1() : " << Rational1.toRationalString() << "\n";
	cout << "Rational2(6, 9) : " << Rational2.toRationalString() << "\n";
	cout << "testRational(10, 20) : " << testRational.toRationalString() << "\n";

	Rational2.add(testRational);
	cout << "Rational2 + testRational = " << Rational2.toRationalString() << "\n";
	Rational2.subtract(testRational);

	Rational2.subtract(testRational);
	cout << "Rational2 - testRational = " << Rational2.toRationalString() << "\n";
	Rational2.add(testRational);

	Rational2.multiply(testRational);
	cout << "Rational2 * testRational = " << Rational2.toRationalString() << "\n";
	Rational2.divide(testRational);

	Rational2.divide(testRational);
	cout << "Rational2 / testRational = " << Rational2.toRationalString() << "\n";
	Rational2.multiply(testRational);

	cout << "Rational2 string : " << Rational2.toRationalString() << "\n";
	cout << "Rational2 double = " << Rational2.toDouble();
}
