#include <iostream>

using namespace std;

int main() {
	int amountA{ 1 };
	int amountB{ 0 };

	int pressAmount{ 0 };
	cin >> pressAmount;

	for (int pressCounter = 0; pressCounter < pressAmount; pressCounter++) {
		int copyA{ amountA }, copyB{ amountB };

		amountA = copyB;
		amountB = copyA + copyB;
	}

	cout << amountA << " " << amountB;
}
