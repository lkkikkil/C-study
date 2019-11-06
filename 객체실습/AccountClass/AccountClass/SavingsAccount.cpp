#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(double _balance, double _interestRate)
	:Account(_balance) {
	interestRate = _interestRate;
}

double SavingsAccount::calculateInterest() {
	return getBalance() * interestRate;
}
