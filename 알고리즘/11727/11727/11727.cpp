#include <iostream>
#include <vector>

using namespace std;

vector <int> methodAmount{ 1,1 };

int main() {
	int tileWidth{ 0 };
	cin >> tileWidth;

	for (int tileCounter = 2; tileCounter <= tileWidth; tileCounter++) {
		methodAmount.push_back((methodAmount[tileCounter - 2] * 2 + methodAmount[tileCounter - 1]) % 10007);
	}

	cout << methodAmount[tileWidth];
}
