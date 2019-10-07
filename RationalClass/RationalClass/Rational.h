#include <string>

class Rational
{
private:
	int numerator{ 1 };
	int denominator{ 1 };
	int divideNumber{ 1 };

public:
	Rational();
	Rational(int, int);

	void setRational(int, int);
	void setNumerator(int);
	void setDenominator(int);
	int getNumerator();
	int getDenominator();

	void add(Rational);
	void subtract(Rational);
	void multiply(Rational);
	void divide(Rational);
	std::string toRationalString();
	double toDouble();

	int greatestDivisor();
};
