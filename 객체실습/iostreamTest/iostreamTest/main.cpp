#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	//fig. 13.3
	const int SIZE{ 80 };
	char buffer1[SIZE];
	char buffer2[SIZE];

	cout << "Enter a sentence :\n";
	cin >> buffer1;

	cout << "\nThe string read with cin was :\n" << buffer1 << "\n\n";
	cin.get(buffer2, SIZE);

	cout << "The string read with cin.get was :\n" << buffer2 << "\n\n\n";

	//fig. 13.11
	cout << "Before using showpointer"
		<< "\n9.9900 prints as : " << 9.9900
		<< "\n9.9000 prints as : " << 9.9000
		<< "\n9.0000 prints as : " << 9.0000;

	cout << showpoint
		<< "After using showpointer"
		<< "\n9.9900 prints as : " << 9.9900
		<< "\n9.9000 prints as : " << 9.9000
		<< "\n9.0000 prints as : " << 9.0000 << "\n\n\n";

	//fig. 13.12
	int x{ 12345 };

	cout << "Default is right justify x:\n\"" << setw(10) << x << "\"";

	cout << "\n\nUse left to left justify x:\n\"" << left << setw(10) << x << "\"";

	cout << "\n\nUse right to right justify x:\n\"" << right << setw(10) << x << "\"" << "\n\n\n";

	//fig. 13.13
	cout << internal << showpos << setw(10) << 123 << "\n\n\n";
	cout << noshowpos;

	//fig. 13.14
	int y{ 10000 };

	cout << y << " printed as int right and left justified\n"
		<< "and as hex with internal justification.\n"
		<< "Using the default pad character (space):\n";

	cout << setw(10) << y << "\n";

	cout << left << setw(10) << y << "\n";

	cout << showbase << internal << setw(10) << hex << y << "\n\n";

	cout << "Using various padding characters:" << "\n";

	cout << right;
	cout.fill('*');
	cout << setw(10) << dec << y << "\n";


	cout << left << setw(10) << setfill('%') << y << "\n";

	cout << internal << setw(10) << setfill('^') << hex << y << "\n\n\n";

	cout << dec;
	//fig. 13.15
	int z{ 100 };

	cout << "Printing octal and hexadecimal values with showbase:\n"
		<< showbase;

	cout << z << "\n";
	cout << oct << z << "\n";
	cout << hex << z << "\n";
}
