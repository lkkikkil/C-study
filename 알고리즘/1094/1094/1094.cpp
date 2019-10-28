#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> sticks;

int vectorSum() {
	int sum{ 0 };
	for (int sumCounter = 0; sumCounter < sticks.size(); sumCounter++) {
		sum += sticks[sumCounter];
	}
	return sum;
}

int main() {
	sticks.push_back(64);

	int cm{ 0 };
	cin >> cm;

	while (vectorSum() != cm) {
		int stick{ 0 };
		sort(sticks.begin(), sticks.end());

		int check{ 0 };
		while (sticks[check] == 1) {
			check++;
		}

		sticks[check] /= 2;
		stick = sticks[check];

		if (vectorSum() < cm) {
			sticks.push_back(stick);
		}
	}

	cout << sticks.size();
}
