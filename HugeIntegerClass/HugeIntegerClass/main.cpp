#include "HugeInteger.h"
#include <iostream>

using namespace std;

int main() {
	int array1[40]{ 1,2,3,4,5,6,7,8,9,0,9,8,7,6,5,4,3,2,1,0,1,2,3,4,5,6,7,8,9,0,9,8,7,6,5,4,3,2,1,0 };
	int array2[40]{ 0,9,8,7,6,5,4,3,2,1,0,1,2,3,4,5,6,7,8,9,0,9,8,7,6,5,4,3,2,1,0,1,2,3,4,5,6,7,8,9 };
	int zeroArray[40]{ 0 };

	HugeInteger hugeInteger1;
	HugeInteger hugeInteger2;
	HugeInteger zero;

	hugeInteger1.input(array1);
	hugeInteger2.input(array2);
	zero.input(zeroArray);

	hugeInteger1.output();
	hugeInteger2.output();
	zero.output();

	cout << "\nhugeInteger1 = hugeInteger2 : " << hugeInteger1.isEqualTo(hugeInteger2) << "\n";
	cout << "hugeInteger1 != hugeInteger2 : " << hugeInteger1.isNotEqualTo(hugeInteger2) << "\n";
	cout << "hugeInteger1 > hugeInteger2 : " << hugeInteger1.isGreaterThan(hugeInteger2) << "\n";
	cout << "hugeInteger1 < hugeInteger2 : " << hugeInteger1.isLessThan(hugeInteger2) << "\n";
	cout << "hugeInteger1 >= hugeInteger2 : " << hugeInteger1.isGreaterThanOrEqualTo(hugeInteger2) << "\n";
	cout << "hugeInteger1 <= hugeInteger2 : " << hugeInteger1.isLessThanOrEqualTo(hugeInteger2) << "\n\n";
	
	cout << "hugeInteger1 = 0 : " << hugeInteger1.isZero() << "\n";
	cout << "hugeInteger2 = 0 : " << hugeInteger2.isZero() << "\n";
	cout << "zero = 0 : " << zero.isZero() << "\n\n";

	hugeInteger1.add(hugeInteger2);
	cout << "hugeInteger1 + hugeInteger2 = ";
	hugeInteger1.output();
	hugeInteger1.subtract(hugeInteger2);

	hugeInteger1.subtract(hugeInteger2);
	cout << "hugeInteger1 - hugeInteger2 = ";
	hugeInteger1.output();
	hugeInteger1.add(hugeInteger2);
}
