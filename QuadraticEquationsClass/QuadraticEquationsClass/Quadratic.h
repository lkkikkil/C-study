#include <string>

class Quadratic
{
private:
	double a{ 1 };
	double b{ 0 };
	double c{ 0 };

public:
	Quadratic(double _a, double _b, double _c);

	void setABC(double, double, double);
	void setA(double);
	void setB(double);
	void setC(double);
	double getA();
	double getB();
	double getC();

	void add(Quadratic);
	void subtract(Quadratic);
	std::string toString();
	void solve();
};
