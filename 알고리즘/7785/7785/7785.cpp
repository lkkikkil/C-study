#include <iostream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

set<string, greater<string>> humans;

int main() {
	cout.tie(NULL);
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int logAmount{ 0 };
	cin >> logAmount;

	for (int logCounter = 0; logCounter < logAmount; logCounter++) {
		string name{ "" };
		cin >> name;
		string log{ "" };
		cin >> log;

		if (log == "enter") {
			humans.insert(name);
		}
		else {
			humans.erase(name);
		}
	}

	for (auto human = humans.begin(); human != humans.end(); human++) {
		cout << *human << "\n";
	}
}
