#include <string>
#include "ClientData.h"

using namespace std;

ClientData::ClientData(int accountNumberValue, const string& lastName, const string& firstName, double balanceValue)
	: accountNumber(accountNumberValue), balance(balanceValue) {
	setLastName(lastName);
	setFirstName(firstName);
}

void ClientData::setAccountNumber(int accountNumberValue) {
	accountNumber = accountNumberValue;
}

int ClientData::getAccountNumber() const { return accountNumber; }

void ClientData::setLastName(const string& lastNameString) {
	size_t length{ lastNameString.size() };
	length = (length < 15 ? length : 14);
	lastNameString.copy(lastName, length);
	lastName[length] = '\0';
}

string ClientData::getLastName() const { return lastName; }

void ClientData::setFirstName(const string& firstNameString) {
	size_t length{ firstNameString.size() };
	length = (length < 10 ? length : 9);
	firstNameString.copy(firstName, length);
	firstName[length] = '\0';
}

string ClientData::getLastName() const { return firstName; }

void ClientData::setBalance(double balanceValue) {
	balance = balanceValue;
}

double ClientData::getBalance() const { return balance; }
