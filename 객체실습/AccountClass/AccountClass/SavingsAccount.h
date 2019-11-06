#ifndef SAVING_H
#define SAVING_H

#include "Account.h";

class SavingsAccount : public Account
{
public:
	SavingsAccount(double, double);
	double calculateInterest();

private:
	double interestRate;
};

#endif SAVING_H
