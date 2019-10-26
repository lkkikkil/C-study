#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int wordAmount{ 0 };
	cin >> wordAmount;

	int groupWord{ 0 };
	for (int wordCounter = 0; wordCounter < wordAmount; wordCounter++) {
		string word;
		cin >> word;

		vector <char> alphabets;
		for (int wordLength = 0; wordLength < word.size(); wordLength++) {
			if (wordLength == 0) {
				alphabets.push_back(word[wordLength]);
				continue;
			}

			if(!(count(alphabets.begin(), alphabets.end(), word[wordLength]))) {
				alphabets.push_back(word[wordLength]);
				continue;
			}

			if (word[wordLength - 1] == word[wordLength]) {
				alphabets.push_back(word[wordLength]);
				continue;
			}

			break;
		}

		if (alphabets.size() == word.size()) {
			groupWord++;
		}
	}

	cout << groupWord;
}
