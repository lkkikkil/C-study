#include <iostream>

using namespace std;

int factorial(int _number) {
	if (_number == 0 || _number == 1) {
		return 1;
	}
	else {
		return _number * factorial(_number - 1);
	}
}

int main() {
	int number;
	cin >> number;
	cout << factorial(number);
}