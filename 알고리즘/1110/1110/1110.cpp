#include <iostream>

using namespace std;

int main() {
	int number{ 0 };
	cin >> number;
	int copyNumber{ number };

	int counter{ 0 };
	do {
		copyNumber = ((copyNumber % 10) * 10) + (((copyNumber / 10) + (copyNumber % 10)) % 10);
		counter++;
	} while (copyNumber != number);

	cout << counter;
}
