#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector <int> numbers;

	int numberAmount{ 0 };
	cin >> numberAmount;

	for (int inCounter = 0; inCounter < numberAmount; inCounter++) {
		int number{ 0 };
		cin >> number;
		numbers.push_back(number);
	}

	int checkNumberAmount{ 0 };
	cin >> checkNumberAmount;

	sort(numbers.begin(), numbers.end());

	for (int checkCounter = 0; checkCounter < checkNumberAmount; checkCounter++) {
		int number{ 0 };
		cin >> number;
		cout << binary_search(numbers.begin(), numbers.end(), number) << "\n";
	}
}
