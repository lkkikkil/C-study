#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	cout.tie(NULL);
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int orderAmount{ 0 };
	cin >> orderAmount;

	vector <int> numbers;
	for (int orderCounter = 0; orderCounter < orderAmount; orderCounter++) {
		string order{ " " };
		cin >> order;

		if (order == "push") {
			int number{ 0 };
			cin >> number;
			numbers.push_back(number);
		}
		else if (order == "pop") {
			if (numbers.empty()) {
				cout << "-1\n";
			}
			else {
				cout << numbers.front() << "\n";
				numbers.erase(numbers.begin() + 0);
			}
		}
		else if (order == "size") {
			cout << numbers.size() << "\n";
		}
		else if (order == "empty") {
			cout << numbers.empty() << "\n";
		}
		else if (order == "front") {
			if (numbers.empty()) {
				cout << "-1\n";
			}
			else {
				cout << numbers[0] << "\n";
			}
		}
		else if (order == "back") {
			if (numbers.empty()) {
				cout << "-1\n";
			}
			else {
				cout << numbers.back() << "\n";
			}
		}
	}
}
