#include <iostream>
#include <vector>

using namespace std;

char checkBoard1[8][8]{
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'}
};
char checkBoard2[8][8]{
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'}
};

int main() {
	int length{ 0 }, width{ 0 };
	cin >> length >> width;

	vector <vector<char>> board;
	for (int lengthCounter = 0; lengthCounter < length; lengthCounter++) {
		vector <char> line;
		for (int widthCounter = 0; widthCounter < width; widthCounter++) {
			char BW{ ' ' };
			cin >> BW;
			line.push_back(BW);
		}
		board.push_back(line);
	}

	vector <int> changeAmount;
	for (int lengthCheckCounter = 0; lengthCheckCounter < length - 7; lengthCheckCounter++) {
		for (int widthCheckCounter = 0; widthCheckCounter < width - 7; widthCheckCounter++) {
			int change1{ 0 };
			int change2{ 0 };
			for (int checkCounter = 0; checkCounter < 64; checkCounter++) {
				if (board[lengthCheckCounter + checkCounter / 8][widthCheckCounter + checkCounter % 8] != checkBoard1[checkCounter / 8][checkCounter % 8]) {
					change1++;
				}
				else {
					change2++;
				}
			}
			changeAmount.push_back((change1 <= change2 ? change1 : change2));
		}
	}

	int result{ changeAmount[0] };
	for (int smallCheckCounter = 1; smallCheckCounter < changeAmount.size(); smallCheckCounter++) {
		if (result > changeAmount[smallCheckCounter]) {
			result = changeAmount[smallCheckCounter];
		}
	}

	cout << result;
}
