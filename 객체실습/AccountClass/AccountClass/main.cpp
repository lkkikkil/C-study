#include <iostream>
#include <vector>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"

using namespace std;

int main() {
	SavingsAccount savingAccount{ 3000, .02 };
	CheckingAccount checkingAccount{ 5000, 5 };

	vector <Account*> accounts{ &savingAccount, &checkingAccount };

	for (Account* accountPtr : accounts) {
		accountPtr->getBalance();
	}

	cout << "savingAcoount interest : " << accounts[0]->calculateInterest() << "\n\n";

	accounts[1]->credit(1000);
	cout << "checkingAccount's balance : " << accounts[1]->getBalance() << "\n";
	accounts[1]->debit(2000);
	cout << "checkingAccount's balance : " << accounts[1]->getBalance() << "\n";
	accounts[1]->debit(10000);
	cout << "\ncheckingAccount's balance : " << accounts[1]->getBalance() << "\n";
}
