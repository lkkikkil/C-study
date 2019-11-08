#include <iostream>
#include "PhoneNumber.h"
using namespace std;

int main() {
	PhoneNumber phone;

	cout << "Enter phone number in the form (555) 555-5555:\n";
	cin >> phone;
	if (cin.fail()) {
		cout << "error.";
		cin.clear();
	}
	else {
		cout << "\nThe phone number entered was:\n";
		cout << phone << "\n";
	}
}
