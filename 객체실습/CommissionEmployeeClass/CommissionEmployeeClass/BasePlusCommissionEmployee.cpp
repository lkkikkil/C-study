#include <stdexcept>
#include <sstream>
#include "BasePlusCommissionEmployee.h"

using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(
	const std::string& first, const std::string& last, const std::string& ssn,
	double sales, double rate, double salary)
	: CommissionEmployee(first, last, ssn, sales, rate) {
	setBaseSalary(salary);
	}

void BasePlusCommissionEmployee::setBaseSalary(double salary) {
	if (salary < 0.0) {
		throw invalid_argument("Salary must be >= 0.0");
	}

	baseSalary = salary;
}

double BasePlusCommissionEmployee::getBaseSalary() const {
	return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const {
	return getBaseSalary() + CommissionEmployee::earnings();
}

string BasePlusCommissionEmployee::toString() const {
	ostringstream output;
	output << "base-salaried " << CommissionEmployee::toString()
		<< "\nbase salary : " << getBaseSalary();
	return output.str();
}
