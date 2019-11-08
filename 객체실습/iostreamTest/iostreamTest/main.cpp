#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	//a)
	cout << "a)\n"<< setw(15) << left << 40000 << "\n\n";
	
	//b)
	cout << "b)\n";
	const char* word1{ "string" };
	cout << word1 << "\n\n";
	
	//c)
	cout << "c)\n" << showpos << 200 << noshowpos << "\n\n";
	
	//d)
	cout << "d)\n" << showbase << hex << 100 << "\n\n";
	
	//e)
	char word2[10]{ ' ' };
	cin.width(1);
	cout << "e)\n";
	cout << "test값을 입력해주세요. report 혹은 alphabet\n";
	for (int inCounter = 0; inCounter < 9; inCounter++) {
		cin >> word2[inCounter];
		if (word2[inCounter] == 'p') {
			break;
		}
	}
	word2[9] = '\0';
	cout << word2 << "\n\n";

	//f
	cout << "f)\n";
	cout << setw(9) << setfill('0') << right << 1.234;
}
