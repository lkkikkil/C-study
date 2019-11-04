#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int S[21]{ 0 };

int main() {
	cout.tie(NULL);
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int operatorAmount{ 0 };
	cin >> operatorAmount;

	for (int operatorCounter = 0; operatorCounter < operatorAmount; operatorCounter++) {
		string operatorName{ " " };
		int number{ 0 };
		cin >> operatorName;

		if (operatorName == "add") {
			cin >> number;
			if (S[number] == 0) {
				S[number] = 1;
			}
		}
		else if (operatorName == "remove") {
			cin >> number;
			if (S[number] == 1) {
				S[number] = 0;
			}
		}
		else if (operatorName == "check") {
			cin >> number;
			cout << S[number] << "\n";
		}
		else if (operatorName == "toggle") {
			cin >> number;
			if (S[number] == 0) {
				S[number] = 1;
			}
			else {
				S[number] = 0;
			}
		}
		else if (operatorName == "all") {
			for (int counter = 1; counter <= 20; counter++) {
				S[counter] = 1;
			}
		}
		else if (operatorName == "empty") {
			for (int counter = 1; counter <= 20; counter++) {
				S[counter] = 0;
			}
		}
	}
}
