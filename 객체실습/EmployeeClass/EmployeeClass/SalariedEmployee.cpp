#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "SalariedEmployee.h"

using namespace std;

SalariedEmployee::SalariedEmployee(const string& first, const string& last, const string& ssn, int month, int day, int year, double salary)
	: Employee(first, last, ssn, month, day, year) {
	setMonthSalary(salary);
}

void SalariedEmployee::setMonthSalary(double salary) {
	if (salary < 0.0) {
		throw invalid_argument("Weekly salary must be >= 0.0");
	}

	weeklySalary = salary;
}

double SalariedEmployee::getWeeklySalary() const { return weeklySalary; }

double SalariedEmployee::earnings(int _month) const { return getWeeklySalary() + (_month == getBirthdayMonth() ? 100 : 0); }

string SalariedEmployee::toString() const {
	ostringstream output;
	output << fixed << setprecision(2);
	output << "salaried employee: "
		<< Employee::toString()
		<< "\nweekly salary: " << getWeeklySalary();
	return output.str();
}
