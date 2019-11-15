#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> numbers;

	int numberAmount{ 0 };
	cin >> numberAmount;

	for (int inCounter = 0; inCounter < numberAmount; inCounter++) {
		int number{ 0 };
		cin >> number;

		if (!(count(numbers.begin(), numbers.end(), number))) {
			numbers.push_back(number);
		}
	}
	
	sort(numbers.begin(), numbers.end(), less<int>());

	for (int outCounter = 0; outCounter < numbers.size(); outCounter++) {
		cout << numbers[outCounter] << " ";
	}
}
