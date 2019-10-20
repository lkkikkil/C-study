#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector <int> tileCase;
	tileCase.push_back(0);
	tileCase.push_back(1);
	tileCase.push_back(2);

	int tileWidth{ 0 };

	cin >> tileWidth;

	for (int counter = 3; counter <= tileWidth; counter++) {
		tileCase.push_back((tileCase[counter - 2] + tileCase[counter - 1]) % 10007);
	}

	cout << tileCase[tileWidth];
}
