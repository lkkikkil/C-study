#include <iostream>
#include <new>

using namespace std;

int main() {
	double* ptr[50];

	try {
		for (size_t i{ 0 }; i < 50; ++i) {
			ptr[i] = new double[50000000]{};
			cout << "ptr[" << i << "] points to 50,000,000 new double\n";
		}
	}
	catch (bad_alloc & memoryAllocationException) {
		cerr << "Exception occurred: " << memoryAllocationException.what() << endl;
	}
}
