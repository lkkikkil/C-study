#include <iostream>

using namespace std;

int main() {
	unsigned int number{ 0 };
	cin >> number;
	
	int minusNumber{ 1 };
	while (number >= minusNumber) {
		number -= minusNumber;
		minusNumber++;
	}
	cout << minusNumber - 1;
}