#include <iostream>

using namespace std;

int commonFactorCalculate(int _num1, int _num2) {
	while (_num2 != 0) {
		int checkNum = _num1 % _num2;
		_num1 = _num2;
		_num2 = checkNum;
	}

	return _num1;
}

int main() {
	int caseAmount{ 0 };
	cin >> caseAmount;

	for (int caseCounter = 0; caseCounter < caseAmount; caseCounter++) {
		int num1{ 0 }, num2{ 0 };
		cin >> num1 >> num2;

		cout << (num1 * num2) / commonFactorCalculate(num1, num2) << "\n";
	}
}
