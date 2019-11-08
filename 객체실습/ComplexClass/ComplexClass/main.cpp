#include <iostream>
#include "Complex.h"

using namespace std;

int  main() {
	Complex testComplex;

	cout << "Enter complex in the form 3 or 8i or 3 + 8i or -3 - 8i:\n";
	cin >> testComplex;

	if (cin.fail()) {
		cout << "error!\nEnter according to format.\n";
		cin.clear();
	}
	else {
		cout << "\nThe complex entered was:\n"
			<<testComplex;
	}
}
