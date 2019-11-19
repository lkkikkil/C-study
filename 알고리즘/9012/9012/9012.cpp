#include <iostream>
#include <vector>

using namespace std;

int parenthesesCounter[2]{ 0 };

string check(string _parentheses) {
	parenthesesCounter[0] = 0;
	parenthesesCounter[1] = 0;

	if (_parentheses.size() % 2 != 0) {
		return "NO";
	}

	for (int checkCounter = 0; checkCounter < _parentheses.size(); checkCounter++) {
		if (_parentheses[checkCounter] == '(') {
			parenthesesCounter[0]++;
		}
		else {
			parenthesesCounter[1]++;
		}

		if (parenthesesCounter[0] < parenthesesCounter[1]) {
			return "NO";
		}
	}

	if (parenthesesCounter[0] == parenthesesCounter[1]) {
		return "YES";
	}
	else {
		return "NO";
	}
}

int main() {
	int amount{ 0 };
	cin >> amount;

	vector <string> answer;
	for (int inCounter = 0; inCounter < amount; inCounter++) {
		string parentheses;
		cin >> parentheses;
		answer.push_back(check(parentheses));
	}

	for (int outCounter = 0; outCounter < amount; outCounter++) {
		cout << answer[outCounter] << "\n";
	}
}
