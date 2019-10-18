#include "Quadratic.h"
#include <iostream>

using namespace std;

int main() {
	Quadratic Quadratic1(3, 5, 4);
	Quadratic Quadratic2(0, 8, 15);
	Quadratic test(2, 7, 3);

	cout << "Quadratic1 : " << Quadratic1.toString() << "\n";
	cout << "Quadratic2 : " << Quadratic2.toString() << "\n";
	cout << "Test : " << test.toString() << "\n";

	Quadratic1.add(test);
	cout << "Quadrati1c + test = " << Quadratic1.toString() << "\n";
	Quadratic1.subtract(test);

	Quadratic1.subtract(test);
	cout << "Quadratic1 - test = " << Quadratic1.toString() << "\n";
	Quadratic1.add(test);

	cout << "Quadratic1 solve : ";
	Quadratic1.solve();

	cout << "Quadratic2 solve : ";
	Quadratic2.solve();
}
