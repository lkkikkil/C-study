#include "Date.h"
#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;

int main() {
	Date date1(83, 2000);
	Date date2(3, 23, 2000);
	Date date3("March", 23, 2000);

	cout << "date1(83, 2000) -> " << date1.toString1()
		<< "\n                -> " << date1.toString2()
		<< "\n                -> " << date1.toString3() << "\n\n";

	cout << "date2(3, 23, 2000) -> " << date2.toString1()
		<< "\n                   -> " << date2.toString2()
		<< "\n                   -> " << date2.toString3() << "\n\n";

	cout << "date3(March, 23, 2000) -> " << date3.toString1()
		<< "\n                       -> " << date3.toString2()
		<< "\n                       -> " << date3.toString3() << "\n\n";

	Date date4(155, 1999);
	Date date5(6, 4, 1999);
	Date date6("June", 4, 1999);

	cout << "date4(155, 1999) -> " << date4.toString1()
		<< "\n                 -> " << date4.toString2()
		<< "\n                 -> " << date4.toString3() << "\n\n";

	cout << "date5(6, 4, 1999) -> " << date5.toString1()
		<< "\n                  -> " << date5.toString2()
		<< "\n                  -> " << date5.toString3() << "\n\n";

	cout << "date6(June, 4, 1999) -> " << date6.toString1()
		<< "\n                     -> " << date6.toString2()
		<< "\n                     -> " << date6.toString3() << "\n\n";

	time_t nowTime = time(0);
	Date now(& nowTime);

	cout << "Now -> " << now.toString1()
		<< "\n    -> " << now.toString2()
		<< "\n    -> " << now.toString3() << "\n";
}
