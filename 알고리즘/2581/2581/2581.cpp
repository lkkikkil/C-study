#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector <int> numbers;

void check(int _number) {
	if (_number == 1) {
		return;
	}

	int checkNumber = sqrt(_number);
	for (int checkCounter = 2; checkCounter <= checkNumber; checkCounter++) {
		if (_number % checkCounter == 0) {
			return;
		}
	}
	numbers.push_back(_number);
}

int main() {
	int num1{ 0 }, num2{ 0 };
	cin >> num1 >> num2;

	for (int checkNumber = num1; checkNumber <= num2; checkNumber++) {
		check(checkNumber);
	}

	if (numbers.size() == 0) {
		cout << -1;
		return 0;
	}

	int sum{ 0 };
	for (int sumCounter = 0; sumCounter < numbers.size(); sumCounter++) {
		sum += numbers[sumCounter];
	}

	cout << sum << "\n" << numbers[0];
}
