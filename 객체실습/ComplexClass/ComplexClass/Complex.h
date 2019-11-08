#include <sstream>

class Complex
{
	friend std::ostream& operator<<(std::ostream&, const Complex&);
	friend std::istream& operator>>(std::istream&, Complex&);

private:
	int real;
	int imaginary;
	char sign1;
	char sign2;
};
