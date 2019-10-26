#include <iostream>
#include <string>

using namespace std;

int main() {
	string word;
	cin >> word;

	int size{ 0 };

	for (int checkCounter = 0; checkCounter < word.size(); checkCounter++) {
		if (word[checkCounter] == 'c') {
			if (word[checkCounter + 1] == '=' || word[checkCounter + 1] == '-') {
				size++;
				checkCounter++;
				continue;
			}
		}

		if(word[checkCounter] == 'd') {
			if (word[checkCounter + 1] == 'z' && word[checkCounter + 2] == '=') {
				size++;
				checkCounter += 2;
				continue;
			}

			if (word[checkCounter + 1] == '-') {
				size++;
				checkCounter++;
				continue;
			}
		}

		if (word[checkCounter] == 'l') {
			if (word[checkCounter + 1] == 'j') {
				size++;
				checkCounter++;
				continue;
			}
		}

		if (word[checkCounter] == 'n') {
			if (word[checkCounter + 1] == 'j') {
				size++;
				checkCounter++;
				continue;
			}
		}

		if (word[checkCounter] == 's') {
			if (word[checkCounter + 1] == '=') {
				size++;
				checkCounter++;
				continue;
			}
		}

		if (word[checkCounter] == 'z') {
			if (word[checkCounter + 1] == '=') {
				size++;
				checkCounter++;
				continue;
			}
		}

		size++;
	}

	cout << size;
}
