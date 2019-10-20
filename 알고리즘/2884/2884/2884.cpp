#include <iostream>

using namespace std;

int main() {
	int hour, min;
	cin >> hour >> min;

	int answer[2]{ 0 };

	if (min < 45) {
		answer[0] = hour - 1;
		answer[1] = 15 + min;
	}
	else {
		answer[0] = hour;
		answer[1] = min - 45;
	}

	if (answer[0] == -1) {
		answer[0] = 23;
	}

	cout << answer[0] << " " << answer[1];
}
