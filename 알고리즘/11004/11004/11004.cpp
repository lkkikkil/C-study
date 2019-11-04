#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	cout.tie(NULL);
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int numberAmount{ 0 }, outNumber{ 0 };
	cin >> numberAmount >> outNumber;

	vector <int> numbers;
	for (int inCounter = 0; inCounter < numberAmount; inCounter++) {
		int number{ 0 };
		cin >> number;

		numbers.push_back(number);
	}

	sort(numbers.begin(), numbers.end(), less<int>());
	
	cout << numbers[outNumber - 1];
}
