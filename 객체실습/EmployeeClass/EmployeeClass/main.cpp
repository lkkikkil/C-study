#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

using namespace std;

void virtualViaPointer(const Employee* const, int);

int main() {
	cout << fixed << setprecision(2);

	SalariedEmployee salariedEmployee{
		"John", "Smith", "111-11-1111", 3, 23, 2000, 800};
	CommissionEmployee commissionEmployee{
		"Sue", "Jones", "333-33-3333", 1, 3, 1999, 10000, .06 };
	BasePlusCommissionEmployee basePlusCommissionEmployee{
		"Bob", "Lewis", "444-44-4444", 6, 4, 1999, 5000, .04, 300 };

	vector<Employee* > employees{ &salariedEmployee, &commissionEmployee, &basePlusCommissionEmployee };

	cout << "EMPLOYEES PROCESSED POLYMORPHICALLY VIA DYNAMIC BINDING\n\n";
	
	cout << "VIRTUAL FUNCTION CALLS MADE OFF BASE-CLASS POINTERS\n\n\n";
	for (int month = 1; month <= 12; month++) {
		cout << month << "¿ù\n";
		for (const Employee* employeePtr : employees) {
			virtualViaPointer(employeePtr, month);
		}
		cout << "\n";
	}
}

void virtualViaPointer(const Employee* const baseClassPtr, int month) {
	cout << baseClassPtr->toString()
		<< "\nearned $" << baseClassPtr->earnings(month) << "\n\n";
}
