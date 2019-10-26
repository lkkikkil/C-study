#include <iostream>

using namespace std;

int main() {
	int number{ 0 };
	cin >> number;

	long long fibonacci[90]{ 0,1 };

	for (int fibonacciCounter = 2; fibonacciCounter <= number; fibonacciCounter++) {
		fibonacci[fibonacciCounter] = fibonacci[fibonacciCounter - 2] + fibonacci[fibonacciCounter - 1];
	}

	cout << fibonacci[number];
}
