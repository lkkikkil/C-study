#include <array>

class HugeInteger
{
	friend std::ostream& operator<<(std::ostream&, const HugeInteger&);
public:
	static const int digits{ 40 };

	HugeInteger(long = 0);
	HugeInteger(const std::string&);

	bool isEqualTo(HugeInteger&);
	bool isNotEqualTo(HugeInteger&);
	bool isGreaterThan(HugeInteger&);
	bool isLessThan(HugeInteger&);
	bool isGreaterThanOrEqualTo(HugeInteger&);
	bool isLessThanOrEqualTo(HugeInteger&);

	bool operator == (HugeInteger&);
	bool operator != (HugeInteger&);
	bool operator > (HugeInteger&);
	bool operator < (HugeInteger&);
	bool operator >= (HugeInteger&);
	bool operator <= (HugeInteger&);

	HugeInteger add(HugeInteger&);
	void subtract(HugeInteger&);

	HugeInteger operator * (HugeInteger&);
	HugeInteger operator / (HugeInteger&);

private:
	std::array<short, digits> integer{};
};
