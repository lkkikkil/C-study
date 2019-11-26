#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int caseAmount{ 0 };
	cin >> caseAmount;

	for (int caseCounter = 0; caseCounter < caseAmount; caseCounter++) {
		int x1{ 0 }, y1{ 0 }, x2{ 0 }, y2{ 0 };
		double r1{ 0 }, r2{ 0 };
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		double distance{ pow(pow((x1 - x2), 2) + pow((y1 - y2), 2), 0.5) };
		
		if (distance == 0) {
			if (r1 == 0 && r2 == 0) {
				cout << 1;
			}
			else if (r1 == r2) {
				cout << -1;
			}
			else {
				cout << 0;
			}
		}
		else {
			if (r1 + r2 > distance&& abs(r1 - r2) < distance) {
				cout << 2;
			}
			else if (r1 + r2 == distance || abs(r1 - r2) == distance) {
				cout << 1;
			}
			else {
				cout << 0;
			}
		}
	}
}
