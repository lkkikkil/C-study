#include <iostream>

using namespace std;

int check(int _number) {
	if (_number == 1 || (_number != 2 && _number % 2 == 0)) {
		return 0;
	}
	else if (_number == 2) {
		return 1;
	}

	for (int checkNumber = 2; checkNumber < _number; checkNumber++) {
		if (_number % checkNumber == 0) {
			return 0;
		}
	}

	return 1;
}

int main() {
	int numberAmount{ 0 };
	cin >> numberAmount;

	int result{ 0 };
	for (int numberCounter = 0; numberCounter < numberAmount; numberCounter++) {
		int number{ 0 };
		cin >> number;

		result += check(number);
	}

	cout << result;
}
