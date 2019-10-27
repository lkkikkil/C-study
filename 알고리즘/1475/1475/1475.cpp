#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	string roomNumber{ 0 };
	cin >> roomNumber;

	int set{ 0 };
	
	int numbers[9]{ 0 };
	
	for (int checkCounter = 0; checkCounter < roomNumber.size(); checkCounter++) {
		switch (roomNumber[checkCounter])
		{
		case '0':
			numbers[0]++;
			break;
		case '1':
			numbers[1]++;
			break;
		case '2':
			numbers[2]++;
			break;
		case '3':
			numbers[3]++;
			break;
		case '4':
			numbers[4]++;
			break;
		case '5':
			numbers[5]++;
			break;
		case '6':
		case '9':
			numbers[6]++;
			break;
		case '7':
			numbers[7]++;
			break;
		case '8':
			numbers[8]++;
			break;
		default:
			break;
		}
	}

	numbers[6]++;
	numbers[6] /= 2;

	for (int numberCounter = 0; numberCounter < 9; numberCounter++) {
		if (set < numbers[numberCounter]) {
			set = numbers[numberCounter];
		}
	}

	cout << set;
}
