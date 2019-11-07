#include <iostream>

using namespace std;

int main() {
	int paperAmount{ 0 };
	cin >> paperAmount;

	int board[100][100]{ 0 };
	
	for (int paperCounter = 0; paperCounter < paperAmount; paperCounter++) {
		int height{ 0 };
		int width{ 0 };
		cin >> height >> width;

		for (int heightCounter = 0; heightCounter < 10; heightCounter++) {
			for (int widthCounter = 0; widthCounter < 10; widthCounter++) {
				board[height + heightCounter][width + widthCounter] = 1;
			}
		}
	}

	int result{ 0 };
	for (int heightCheckCounter = 0; heightCheckCounter < 100; heightCheckCounter++) {
		for (int widthCheckCounter = 0; widthCheckCounter < 100; widthCheckCounter++) {
			result += board[heightCheckCounter][widthCheckCounter];
		}
	}

	cout << result;
}
