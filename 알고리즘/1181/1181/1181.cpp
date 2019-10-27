#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string _frontWord, string _behindWord) {
	if (_frontWord.length() == _behindWord.length()) {
		return _frontWord < _behindWord;
	}
	else {
		return _frontWord.length() < _behindWord.length();
	}
}

int main() {
	int wordAmount{ 0 };
	cin >> wordAmount;

	vector <string> words;
	for (int inCounter = 0; inCounter < wordAmount; inCounter++) {
		string word;
		cin >> word;

		if (!(count(words.begin(), words.end(), word))) {
			words.push_back(word);
		}
	}

	sort(words.begin(), words.end(), compare);

	for (int outCounter = 0; outCounter < words.size(); outCounter++) {
		cout << words[outCounter] << "\n";
	}
}
