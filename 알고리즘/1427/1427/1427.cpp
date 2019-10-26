#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	long long number;
	cin >> number;

	vector <short> numbers;
	while (number / 10 != 0) {
		numbers.push_back(number % 10);
		number /= 10;
	}
	numbers.push_back(number % 10);

	sort(numbers.begin(), numbers.end(), greater<short>());

	for (int outCounter = 0; outCounter < numbers.size(); outCounter++) {
		cout << numbers[outCounter];
	}
}
