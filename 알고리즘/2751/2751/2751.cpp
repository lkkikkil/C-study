#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int numberAmount;
	cin >> numberAmount;

	vector <int> numbers;
	for (int inCounter = 0; inCounter < numberAmount; inCounter++) {
		int number;
		cin >> number;

		numbers.push_back(number);
	}

	sort(numbers.begin(), numbers.end());

	for (int outCounter = 0; outCounter < numberAmount; outCounter++) {
		cout << numbers[outCounter] << "\n";
	}
}
