#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> times;

int main() {
	int humanAmount{ 0 };
	cin >> humanAmount;

	for (int humanCounter = 0; humanCounter < humanAmount; humanCounter++) {
		int time{ 0 };
		cin >> time;

		times.push_back(time);
	}

	sort(times.begin(), times.end(), greater<int>());

	int sum{ 0 };
	while (humanAmount != 0) {
		sum += times[humanAmount - 1] * humanAmount;
		humanAmount--;
	}

	cout << sum;
}
