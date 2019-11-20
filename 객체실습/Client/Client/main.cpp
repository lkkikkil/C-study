#include <iostream>
#include <fstream>
#include <cstdlib>
#include "ClientData.h"

using namespace std;

int main() {
	ofstream outCredit{ "credit.dat", ios::out | ios::binary };

	if (!outCredit) {
		cerr << "File could not be opened." << endl;
		exit(EXIT_FAILURE);
	}

	ClientData blankClinet;

	for (int i{ 0 }; i < 100; i++) {
		outCredit.write(reinterpret_cast<const char*>(&blankClinet), sizeof(ClientData));
	}
}
