#include "DollarAmount.h"
#include <string>
#include <cmath>

using namespace std;

DollarAmount::DollarAmount(long long dollar, long long cent) : dollar{ dollar }, cent{ cent }
{
	amount = dollar * 100 + cent;
}

void DollarAmount::add(DollarAmount right)
{
	amount += right.amount;
}

void DollarAmount::subtract(DollarAmount right)
{
	amount -= right.amount;
}

void DollarAmount::addInterest(int rate, int divisor)
{
	long long plus = (amount * rate + divisor / 2) / divisor;
	DollarAmount interest
	{
		plus / 100, plus % 100
	};

	add(interest);
}

void DollarAmount::divide(int divide)
{
	amount /= divide;
}

string DollarAmount::toString() const
{
	string dollars{ to_string(amount / 100) };
	string cents{ to_string(abs(amount % 100)) };
	return dollars + "." + (cents.size() == 1 ? "0" : "") + cents;
}

std::string DollarAmount::operator +(DollarAmount addDollarAmount) {
	DollarAmount result(0, 0);

	result.amount = amount + addDollarAmount.amount;
	return result.toString();
}

std::string DollarAmount::operator -(DollarAmount subtractDollarAmount) {
	DollarAmount result(0, 0);

	result.amount = amount - subtractDollarAmount.amount;
	return result.toString();
}

std::string DollarAmount::operator *(DollarAmount multiplyDollarAmount) {
	DollarAmount result(0, 0);

	result.amount = (amount * multiplyDollarAmount.amount) / 100;
	return result.toString();
}

std::string DollarAmount::operator /(DollarAmount divideDollarAmount) {
	DollarAmount result(0, 0);

	result.amount = amount * 100 / divideDollarAmount.amount;
	return result.toString();
}
