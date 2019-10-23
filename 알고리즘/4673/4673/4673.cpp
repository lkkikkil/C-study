#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int checkNumber(int);

int main() {
	vector <int> notSelfNumber;

	for (int numberCounter = 1; numberCounter <= 10000; numberCounter++) {
		notSelfNumber.push_back(checkNumber(numberCounter));
	}

	sort(notSelfNumber.begin(), notSelfNumber.end());

	cout << "1" << "\n";
	for (int outCounter = 1; outCounter < notSelfNumber.size(); outCounter++) {
		for (int selfNumber = notSelfNumber[outCounter] - 1; selfNumber > notSelfNumber[outCounter - 1]; selfNumber--) {
			if (selfNumber > 10000) {
				continue;
			}
			cout << selfNumber << "\n";
		}
	}
}

int checkNumber(int _number) {
	int number = _number;

	while (_number / 10 != 0) {
		number += _number % 10;
		_number /= 10;
	}

	number += _number;

	return number;
}
