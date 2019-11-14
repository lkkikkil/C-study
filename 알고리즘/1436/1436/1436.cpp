#include <iostream>
#include <vector>

using namespace std;

int main() {
	int number{ 0 };
	cin >> number;

	vector<int> threeSixs{ 666 };
	int threeSix{ 1666 };
	while (threeSixs.size() != number) {
		int checkNumber{ 0 };
		checkNumber = threeSix;
		while (checkNumber / 10 != 0) {
			if ((checkNumber - 666) % 1000 == 0) {
				threeSixs.push_back(threeSix);
				break;
			}
			else {
				checkNumber /= 10;
			}
		}
		threeSix++;
	}
	cout << threeSixs[number - 1];
}
