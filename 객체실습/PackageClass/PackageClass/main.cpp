#include <iostream>
#include "OvernightPackage.h"
#include "TwoDayPackage.h"

using namespace std;

int main() {
	TwoDayPackage package1("seongmin", "Bupyeong", "Incheon", "Korea", "12345678", 1000, 4, 300);
	cout << package1.calculateCost() << "\n";

	OvernightPackage package2("friend", "Nanba", "Osaka", "Japan", "87654321", 1000, 4, 5);
	cout << package2.calculateCost();
}
