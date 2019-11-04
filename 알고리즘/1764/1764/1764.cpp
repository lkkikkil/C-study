#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	cout.tie(NULL);
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int notHearHumanAmount{ 0 }, notShowHumanAmount{ 0 };
	cin >> notHearHumanAmount >> notShowHumanAmount;

	vector <string> notHearHumans;
	vector <string> notShowHumans;
	for (int notHearCounter = 0; notHearCounter < notHearHumanAmount; notHearCounter++) {
		string notHearHuman{ " " };
		cin >> notHearHuman;
		notHearHumans.push_back(notHearHuman);
	}
	for (int notShowCounter = 0; notShowCounter < notShowHumanAmount; notShowCounter++) {
		string notShowHuman{ " " };
		cin >> notShowHuman;
		notShowHumans.push_back(notShowHuman);
	}

	sort(notShowHumans.begin(), notShowHumans.end(), less<string>());

	vector <string> notHearShowHumans;
	for (int checkCounter = 0; checkCounter < notHearHumanAmount; checkCounter++) {
		if (binary_search(notShowHumans.begin(), notShowHumans.end(), notHearHumans[checkCounter])) {
			notHearShowHumans.push_back(notHearHumans[checkCounter]);
		}
	}

	sort(notHearShowHumans.begin(), notHearShowHumans.end(), less<string>());

	cout << notHearShowHumans.size() << "\n";
	for (int outCounter = 0; outCounter < notHearShowHumans.size(); outCounter++) {
		cout << notHearShowHumans[outCounter] << "\n";
	}
}
