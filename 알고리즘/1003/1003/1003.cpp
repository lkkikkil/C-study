#include <iostream>
#include <vector>

using namespace std;

vector <int*> oneAndZero;

int main() {
	oneAndZero.push_back(new int[2]{ 1,0 });
	oneAndZero.push_back(new int[2]{ 0,1 });

	int caseAmount{ 0 };
	cin >> caseAmount;

	vector <int> numbers;
	int biggestNumber{ 0 };
	for (int caseCounter = 0; caseCounter < caseAmount; caseCounter++) {
		int number{ 0 };
		cin >> number;

		if (number > biggestNumber) {
			biggestNumber = number;
		}

		numbers.push_back(number);
	}

	for (int oneAndZeroCheckCounter = 2; oneAndZeroCheckCounter <= biggestNumber; oneAndZeroCheckCounter++) {
		int zero = oneAndZero[oneAndZeroCheckCounter - 1][0] + oneAndZero[oneAndZeroCheckCounter - 2][0];
		int one = oneAndZero[oneAndZeroCheckCounter - 1][1] + oneAndZero[oneAndZeroCheckCounter - 2][1];
		oneAndZero.push_back(new int[2]{ zero, one });
	}

	for (int outCounter = 0; outCounter < caseAmount; outCounter++) {
		cout << oneAndZero[numbers[outCounter]][0] << ' ' << oneAndZero[numbers[outCounter]][1] << "\n";
	}
}
