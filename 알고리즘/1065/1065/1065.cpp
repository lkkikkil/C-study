#include <iostream>

using namespace std;

int main() {
	int number{ 0 };
	cin >> number;

	int result{ 0 };
	for (int checkCounter = 1; checkCounter <= number; checkCounter++) {
		if (checkCounter < 10) {
			result++;
		}
		else if (checkCounter < 100) {
			result++;
		}
		else if (checkCounter < 1000) {
			if (((checkCounter / 10) % 10) - checkCounter % 10 == checkCounter / 100 - ((checkCounter / 10) % 10)) {
				result++;
			}
		}
	}

	cout << result;
}
