#include <iostream>

using namespace std;

int numbers[10001]{ 0 };

int main() {
	cout.tie(NULL);
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int numberAmount{ 0 };
	cin >> numberAmount;

	for (int numberCounter = 0; numberCounter < numberAmount; numberCounter++) {
		int number{ 0 };
		cin >> number;

		numbers[number]++;
	}

	for (int numberCheck = 1; numberCheck <= 10000; numberCheck++) {
		for (int outCounter = 0; outCounter < numbers[numberCheck]; outCounter++) {
			cout << numberCheck << "\n";
		}
	}
}
