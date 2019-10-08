class HugeInteger
{
private:
	int hugeInteger[40]{ 0 };

public:
	HugeInteger();

	void input(int[40]);
	void output();
	void add(HugeInteger);
	void subtract(HugeInteger);

	bool isEqualTo(HugeInteger);
	bool isNotEqualTo(HugeInteger);
	bool isGreaterThan(HugeInteger);
	bool isLessThan(HugeInteger);
	bool isGreaterThanOrEqualTo(HugeInteger);
	bool isLessThanOrEqualTo(HugeInteger);
	bool isZero();
};
