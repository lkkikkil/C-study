#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include "ClientData.h"

using namespace std;

/*int main() {
	ofstream outCredit{ "credit.dat", ios::out | ios::binary };

	if (!outCredit) {
		cerr << "File could not be opened." << endl;
		exit(EXIT_FAILURE);
	}

	ClientData blankClinet;

	for (int i{ 0 }; i < 100; i++) {
		outCredit.write(reinterpret_cast<const char*>(&blankClinet), sizeof(ClientData));
	}
}*/

/*int main() {
	fstream outCredit{ "credit.dat", ios::in | ios::out | ios::binary };

	if (!outCredit) {
		cerr << "File could not be opened." << endl;
		exit(EXIT_FAILURE);
	}

	cout << "Enter account number (1 to 100, 0 to end input)\n? ";

	int accountNumber;
	string lastName;
	string firstName;
	double balance;

	cin >> accountNumber;

	while(accountNumber > 0 && accountNumber <= 100) {
		cout << "Enter lastname, firstname and balance\n? ";
		cin >> lastName;
		cin >> firstName;
		cin >> balance;

		ClientData client{ accountNumber, lastName, firstName, balance };

		outCredit.seekp((client.getAccountNumber() - 1) * sizeof(ClientData));

		outCredit.write(reinterpret_cast<char*>(&client), sizeof(ClientData));

		cout << "Enter account number\n? ";
		cin >> accountNumber;
	}
}*/

void outputLine(ostream&, const ClientData&);

int main() {
	ifstream inCredit{ "credit.dat", ios::in | ios::binary };

	if (!inCredit) {
		cerr << "File could not ne opened" << endl;
		exit(EXIT_FAILURE);
	}

	cout << left << setw(10) << "Account" << setw(16) << "Last Name" << setw(11) << "First Name" << setw(10) << right << "Balance" << "\n";

	ClientData client;

	inCredit.read(reinterpret_cast<char*>(&client), sizeof(ClientData));

	while (inCredit) {
		if (client.getAccountNumber() != 0) {
			outputLine(cout, client);
		}

		inCredit.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
	}
}

void outputLine(ostream& output, const ClientData& recode) {
	output << left << setw(10) << recode.getAccountNumber()
		<< setw(16) << recode.getLastName()
		<< setw(11) << recode.getFirstName()
		<< setw(10) << setprecision(2) << right << fixed
		<< showpoint << recode.getBalance() << endl;
}
