#include <iostream>
#include <algorithm>

using namespace std;

bool compare1(pair<int, int> front, pair<int, int> behind) {
	return front.first > behind.first;
}

bool compare2(pair<int, int> front, pair<int, int> behind) {
	return front.second < behind.second;
}

int main() {
	pair<int, int> scores[8]{ {0,0} };

	for (int inCounter = 0; inCounter < 8; inCounter++) {
		int score{ 0 };
		cin >> score;

		scores[inCounter].first = score;
		scores[inCounter].second = inCounter + 1;
	}

	sort(scores, scores + 8, compare1);
	sort(scores, scores + 5, compare2);

	int sum{ 0 };
	for (int sumCounter = 0; sumCounter < 5; sumCounter++) {
		sum += scores[sumCounter].first;
	}

	cout << sum << "\n";
	for (int outCounter = 0; outCounter < 5; outCounter++) {
		cout << scores[outCounter].second << " ";
	}
}
