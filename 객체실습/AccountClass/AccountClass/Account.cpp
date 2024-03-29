#include <iostream>
#include <stdexcept>
#include "Account.h"

using namespace std;

Account::Account(double _balance) {
	setBalance(_balance);
}

void Account::setBalance(double checkBalance) {
	if (checkBalance < 0.0) {
		throw invalid_argument("Balance must be >= 0.0");
	}
	else {
		balance = checkBalance;
	}
}

double Account::getBalance() {
	return balance;
}

void Account::credit(double add) {
	balance += add;
}

void Account::debit(double withdraw) {
	if (balance < withdraw) {
		cout << "Debit amount exceed account balance";
	}
	else {
		balance -= withdraw;
	}
}

double Account::calculateInterest() {
	return 0.0;
}
