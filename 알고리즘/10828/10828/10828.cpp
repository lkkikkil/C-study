#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
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
				cout << numbers.back() << "\n";
				numbers.pop_back();
			}
		}
		else if (order == "size") {
			cout << numbers.size() << "\n";
		}
		else if (order == "empty") {
			cout << numbers.empty() << "\n";
		}
		else {
			if (numbers.empty()) {
				cout << "-1\n";
			}
			else {
				cout << numbers.back() << "\n";
			}
		}
	}
}
