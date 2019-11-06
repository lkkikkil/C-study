#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(double _balance, double _fee)
	:Account(_balance) {
	fee = _fee;
}

void CheckingAccount::credit(double add) {
	Account::credit(add);
	Account::debit(fee);
}

void CheckingAccount::debit(double withdraw) {
	Account::debit(withdraw + fee);
}
