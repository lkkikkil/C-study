#include <iostream>

using namespace std;

int main() {
	int humanAmount{ 0 };
	cin >> humanAmount;

	int** humanPtr = new int*[humanAmount];
	for (int humanCounter = 0; humanCounter < humanAmount; humanCounter++) {
		int kg{ 0 }, cm{ 0 }, number{ 1 };
		cin >> kg >> cm;

		humanPtr[humanCounter] = new int[3];

		humanPtr[humanCounter][0] = kg;
		humanPtr[humanCounter][1] = cm;
		humanPtr[humanCounter][2] = number;
	}

	for (int humanCounter = 1; humanCounter < humanAmount; humanCounter++) {
		for (int checkCounter = 0; checkCounter < humanCounter; checkCounter++) {
			if (humanPtr[checkCounter][0] > humanPtr[humanCounter][0] && humanPtr[checkCounter][1] > humanPtr[humanCounter][1]) {
				humanPtr[humanCounter][2]++;
			}
			else if (humanPtr[checkCounter][0] < humanPtr[humanCounter][0] && humanPtr[checkCounter][1] < humanPtr[humanCounter][1]) {
				humanPtr[checkCounter][2]++;
			}
			else {
				;
			}
		}
	}

	for (int outCounter = 0; outCounter < humanAmount; outCounter++) {
		cout << humanPtr[outCounter][2] << " ";
	}
}
