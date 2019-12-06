#include <iostream>

using namespace std;

int main() {
	int sugar{ 0 };
	cin >> sugar;

	int counter{ 0 };
	while (sugar > 2) {
		if (sugar % 5 == 0) {
			sugar -= 5;
		}
		else {
			sugar -= 3;
		}
		counter++;
	}

	cout << (sugar == 0 ? counter : -1);
}
