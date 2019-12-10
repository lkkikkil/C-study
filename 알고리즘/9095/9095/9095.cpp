#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> sums{ 0, 1, 2, 4 };

int main() {
	int testCaseAmount{ 0 };
	cin >> testCaseAmount;

	vector <int> numbers;
	int biggestInt{ 0 };
	for (int testCaseCounter = 0; testCaseCounter < testCaseAmount; testCaseCounter++) {
		int number{ 0 };
		cin >> number;

		if (biggestInt < number) {
			biggestInt = number;
		}

		numbers.push_back(number);
	}

	for (int sumCounter = 4; sumCounter <= biggestInt; sumCounter++) {
		sums.push_back(sums[sumCounter - 3] + sums[sumCounter - 2] + sums[sumCounter - 1]);
	}

	for (int outCounter = 0; outCounter < testCaseAmount; outCounter++) {
		cout << sums[numbers[outCounter]] << "\n";
	}
}
