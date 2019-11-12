#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	cout.tie(NULL);
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int array1Size{ 0 };
	int array2Size{ 0 };
	cin >> array1Size >> array2Size;

	vector<int> numbers;
	for (int inCounter = 0; inCounter < array1Size; inCounter++) {
		int number{ 0 };
		cin >> number;
		numbers.push_back(number);
	}

	for (int inCounter = 0; inCounter < array2Size; inCounter++) {
		int number{ 0 };
		cin >> number;
		numbers.push_back(number);
	}

	sort(numbers.begin(), numbers.end(), less<int>());

	for (int outCounter = 0; outCounter < array1Size + array2Size; outCounter++) {
		cout << numbers[outCounter] << " ";
	}
}
