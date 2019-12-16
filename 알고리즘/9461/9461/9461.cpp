#include <iostream>
#include <vector>

using namespace std;

vector <long long> widthsAns{ 0, 1, 1, 1, 2, 2 };

int main() {
	int caseAmount{ 0 };
	cin >> caseAmount;

	vector <int> widths;
	int biggestWidth{ 0 };
	for (int caseCounter = 0; caseCounter < caseAmount; caseCounter++) {
		int width{ 0 };
		cin >> width;
		if (biggestWidth < width) {
			biggestWidth = width;
		}
		widths.push_back(width);
	}

	for (int widthCounter = 6; widthCounter <= biggestWidth; widthCounter++) {
		widthsAns.push_back(widthsAns[widthCounter - 1] + widthsAns[widthCounter - 5]);
	}

	for (int outCounter = 0; outCounter < caseAmount; outCounter++) {
		cout << widthsAns[widths[outCounter]] << "\n";
	}
}
