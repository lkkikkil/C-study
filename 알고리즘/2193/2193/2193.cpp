#include <iostream>
#include <vector>

using namespace std;

vector <long long*> oneAndZero;

int main() {
	oneAndZero.push_back(new long long[2]{ 0,1 });

	int digit{ 0 };
	cin >> digit;
	for (int digitCounter = 1; digitCounter < digit; digitCounter++) {
		long long zero = oneAndZero[digitCounter - 1][0] + oneAndZero[digitCounter - 1][1];
		long long one = oneAndZero[digitCounter - 1][0];
		oneAndZero.push_back(new long long[2]{ zero, one });
	}

	cout << oneAndZero[digit - 1][0] + oneAndZero[digit - 1][1];
}
