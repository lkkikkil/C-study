#include <iostream>
#include <vector>

using namespace std;

int main() {
	int caseAmount{0};
	cin >> caseAmount;

	vector <int> wNumbers;
	vector <int> eNumbers;

	for (int inCounter = 0; inCounter < caseAmount; inCounter++) {
		int wNumber, eNumber;
		cin >> wNumber >> eNumber;

		wNumbers.push_back(wNumber);
		eNumbers.push_back(eNumber);
	}

	vector <long long> results;
	for (int resultCounter = 0; resultCounter < caseAmount; resultCounter++) {
		long long result{ 1 };
		int wNumber{ wNumbers[resultCounter] };
		int eNumber{ eNumbers[resultCounter] };

		for (int counter = 0; counter < wNumbers[resultCounter]; counter++) {
			result *= eNumber;
			eNumber--;

			if (result % wNumber == 0 && wNumber != 1) {
				result /= wNumber;
				wNumber--;
			}
		}

		while (wNumber != 1) {
			result /= wNumber;
			wNumber--;
		}

		results.push_back(result);
	}

	for (int outCounter = 0; outCounter < caseAmount; outCounter++) {
		cout << results[outCounter] << "\n";
	}
}
