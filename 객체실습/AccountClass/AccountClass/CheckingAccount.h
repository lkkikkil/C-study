#ifndef CHECKING_H
#define CHECKING_H

#include "Account.h"

class CheckingAccount : public Account
{
public:
	CheckingAccount(double, double);
	virtual ~CheckingAccount() = default;

	void credit(double);
	void debit(double);

private:
	double fee;
};

#endif CHECKING_H
