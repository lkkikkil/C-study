#include <iostream>

using namespace std;

int main() {
	int number[1000]{ 0 };

	int numberAmount{ 0 };
	cin >> numberAmount;

	for (int inCounter = 0; inCounter < numberAmount; inCounter++) {
		cin >> number[inCounter];
	}

	for (int counter = 0; counter < numberAmount; counter++) {
		for (int numberCounter = 0; numberCounter < numberAmount - 1; numberCounter++) {
			if (number[numberCounter] > number[numberCounter + 1]) {
				int changeNumber = number[numberCounter];
				number[numberCounter] = number[numberCounter + 1];
				number[numberCounter + 1] = changeNumber;
			}
		}
	}

	for (int outCounter = 0; outCounter < numberAmount; outCounter++) {
		cout << number[outCounter] << "\n";
	}
}
