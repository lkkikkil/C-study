#include <iostream>

using namespace std;

int main() {
	int num1, num2;
	int greatestDivide, leastMultiple;

	cin >> num1 >> num2;

	int copyNum1{ num1 }, copyNum2{ num2 };
	while (copyNum2 != 0) {
		int num;
		num = copyNum1 % copyNum2;
		copyNum1 = copyNum2;
		copyNum2 = num;

		greatestDivide = copyNum1;
	}

	leastMultiple = num1 * num2 / greatestDivide;

	cout << greatestDivide << "\n" << leastMultiple;
}
