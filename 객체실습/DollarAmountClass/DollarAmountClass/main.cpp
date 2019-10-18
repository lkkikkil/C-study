#include<cmath>
#include<string>
#include<iostream>
#include<iomanip>
#include"DollarAmount.h"

using namespace std;

int main()
{
	DollarAmount dollar1{ 123, 45 };
	DollarAmount dollar2{ 15, 76 };

	cout << "dollar1 :" << dollar1.toString() << "\n";
	cout << "dollar2 :" << dollar2.toString() << "\n\n";
	

	cout << "dollar1 + dollar2 = " << dollar1 + dollar2;
	cout << "\ndollar1 - dollar2 = " << dollar1 - dollar2;
	cout << "\ndollar1 * dollar2 = " << dollar1 * dollar2;
	cout << "\ndollar1 / dollar2 = " << dollar1 / dollar2;
}
