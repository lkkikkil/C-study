#include <iostream>
#include <vector>

using namespace std;

int main() {
	int humanAmount{ 0 };
	cin >> humanAmount;

	vector <int> humans;
	for (int humanCounter = 0; humanCounter < humanAmount; humanCounter++) {
		humans.push_back(humanCounter + 1);
	}

	int removeCounter{ 0 };
	cin >> removeCounter;

	vector <int> result;
	int checkNumber{ 0 };
	for (int counter = 0; counter < humanAmount; counter++) {
		for (int repeatCounter = 0; repeatCounter < removeCounter - 1; repeatCounter++) {
			while(humans[checkNumber] == 0) {
				checkNumber++;
				if (checkNumber >= humans.size()) {
					checkNumber %= humans.size();
				}
			}

			checkNumber++;
			if (checkNumber >= humans.size()) {
				checkNumber %= humans.size();
			}

			while (humans[checkNumber] == 0) {
				checkNumber++;
				if (checkNumber >= humans.size()) {
					checkNumber %= humans.size();
				}
			}
		}

		result.push_back(humans[checkNumber]);
		humans[checkNumber] = 0;
		checkNumber++;
		if (checkNumber >= humans.size()) {
			checkNumber %= humans.size();
		}
	}

	cout << '<';
	for (int outCounter = 0; outCounter < result.size() - 1; outCounter++) {
		cout << result[outCounter] << ", ";
	}
	cout << result[result.size() - 1] << ">";
}
