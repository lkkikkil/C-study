#include <iostream>

using namespace std;

int main() {
	int E{ 0 }, S{ 0 }, M{ 0 };
	cin >> E >> S >> M;

	int year{ 1 };
	while (!(E == 1 && S == 1 && M == 1)) {
		E--;
		S--;
		M--;
		year++;

		if (E == 0) {
			E = 15;
		}
		if (S == 0) {
			S = 28;
		}
		if (M == 0) {
			M = 19;
		}
	}
	cout << year;
}
