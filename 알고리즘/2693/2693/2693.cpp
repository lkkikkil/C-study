#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> thirdNumbers;

int main() {
	int caseAmount{ 0 };
	cin >> caseAmount;

	for (int caseCounter = 0; caseCounter < caseAmount; caseCounter++) {
		int numbers[10]{ 0 };
		for (int numberCounter = 0; numberCounter < 10; numberCounter++) {
			cin >> numbers[numberCounter];
		}
		sort(numbers, numbers + 10, greater<int>());
		thirdNumbers.push_back(numbers[2]);
	}

	for (int outCounter = 0; outCounter < caseAmount; outCounter++) {
		cout << thirdNumbers[outCounter] << "\n";
	}
}
