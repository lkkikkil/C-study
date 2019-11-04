#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	string number{ " " };
	cin >> number;

	int sum{ 0 };
	for (int sumCounter = 0; sumCounter < number.size(); sumCounter++) {
		sum += number[sumCounter] - '0';
	}

	if (count(number.begin(), number.end(), '0') && sum % 3 == 0) {
		sort(number.begin(), number.end(), greater<char>());
		cout << number;
	}
	else {
		cout << -1;
	}
}
