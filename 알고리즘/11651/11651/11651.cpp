#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int* case1, int* case2) {
	if (case1[1] == case2[1]) {
		return case1[0] < case2[0];
	}
	else {
		return case1[1] < case2[1];
	}
}

int main() {
	int xyAmount{ 0 };
	cin >> xyAmount;

	vector<int*> xyCases;
	for (int xyInCounter = 0; xyInCounter < xyAmount; xyInCounter++) {
		int x{ 0 };
		int y{ 0 };
		cin >> x >> y;

		xyCases.push_back(new int[2]{ x, y });
	}

	sort(xyCases.begin(), xyCases.end(), compare);

	for (int outCounter = 0; outCounter < xyAmount; outCounter++) {
		cout << xyCases[outCounter][0] << " " << xyCases[outCounter][1] << "\n";
	}
}
