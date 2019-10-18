#include<cmath>
#include<string>

using namespace std;

class DollarAmount
{
public:
	explicit DollarAmount(long long dollar, long long cent);
	void add(DollarAmount right);
	void subtract(DollarAmount right);
	void addInterest(int, int);
	void divide(int);

	string toString() const;

	std::string operator +(DollarAmount);
	std::string operator -(DollarAmount);
	std::string operator *(DollarAmount);
	std::string operator /(DollarAmount);

private:
	long long amount{ 0 };
	long long dollar{ 0 };
	long long cent{ 0 };
};
