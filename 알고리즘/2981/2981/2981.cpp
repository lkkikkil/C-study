#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;

vector <int> differences;

int gcdFunc(int num1, int num2) {
	while (num2 != 0) {
		int copyNum = num1 % num2;
		num1 = num2;
		num2 = copyNum;
	}
	return num1;
}

int main() {
	cout.tie(NULL);
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int numberAmount{ 0 };
	cin >> numberAmount;

	int number1{ 0 }, number2{ 0 };
	cin >> number1;
	for (int numberCounter = 1; numberCounter < numberAmount; numberCounter++) {
		cin >> number2;

		differences.push_back(abs(number1 - number2));
		number1 = number2;
	}

	sort(differences.begin(), differences.end());

	int gcd = gcdFunc(differences[0], differences[1]);

	for (int differenceCounter = 2; differenceCounter < differences.size(); differenceCounter++) {
		gcd = gcdFunc(differences[differenceCounter], gcd);
	}

	vector<int> divisors;
	for (int checkCounter = 1; checkCounter * checkCounter <= gcd; checkCounter++) {
		if (gcd % checkCounter == 0) {
			if (find(divisors.begin(), divisors.end(), checkCounter) == divisors.end()) {
				divisors.push_back(checkCounter);
			}

			if (find(divisors.begin(), divisors.end(), gcd / checkCounter) == divisors.end()) {
				divisors.push_back(gcd / checkCounter);
			}
		}
	}

	sort(divisors.begin(), divisors.end(), less<int>());
	for (int outCounter = 1; outCounter < divisors.size(); outCounter++) {
		cout << divisors[outCounter] << " ";
	}
}
