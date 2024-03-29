#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "BasePlusCommissionEmployee.h"

using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string& first, const string& last, const string& ssn, int month, int day, int year, double sales, double rate, double salary)
	: CommissionEmployee(first, last, ssn, month, day, year, sales, rate) {
	setBaseSalary(salary);
}

void BasePlusCommissionEmployee::setBaseSalary(double salary) {
	if (salary < 0.0) {
		throw invalid_argument("Salary must be >= 0.0");
	}

	baseSalary = salary;
}

double BasePlusCommissionEmployee::getBaseSalary() const { return baseSalary; }

double BasePlusCommissionEmployee::earnings(int _month) const {
	return getBaseSalary() + CommissionEmployee::earnings(_month);
}

string BasePlusCommissionEmployee::toString() const {
	ostringstream output;
	output << fixed << setprecision(2);
	output << "base-salaried " << CommissionEmployee::toString()
		<< "; base salary: " << getBaseSalary();
	return output.str();
}
