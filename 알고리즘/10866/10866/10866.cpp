#include <iostream>
#include <vector>

using namespace std;

vector <int> deque;

int main() {
	int orderAmount{ 0 };
	cin >> orderAmount;

	for (int orderCounter = 0; orderCounter < orderAmount; orderCounter++) {
		string order{ "" };
		cin >> order;

		if (order == "push_front") {
			int number{ 0 };
			cin >> number;
			deque.insert(deque.begin() + 0, number);
		}
		else if (order == "push_back") {
			int number{ 0 };
			cin >> number;
			deque.push_back(number);
		}
		else if (order == "pop_front") {
			if (deque.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << deque.front() << "\n";
				deque.erase(deque.begin() + 0);
			}
		}
		else if (order == "pop_back") {
			if (deque.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << deque.back() << "\n";
				deque.pop_back();
			}
		}
		else if (order == "size") {
			cout << deque.size() << "\n";
		}
		else if (order == "empty") {
			cout << deque.empty() << "\n";
		}
		else if (order == "front") {
			if (deque.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << deque.front() << "\n";
			}
		}
		else if (order == "back") {
			if (deque.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << deque.back() << "\n";
			}
		}
	}
}
