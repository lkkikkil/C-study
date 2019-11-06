#include <sstream>
#include "Employee.h"

using namespace std;

Employee::Employee(const string& first, const string& last, const string& ssn, int month, int day, int year)
	:birthday(month, day, year), firstName(first), lastName(last), socialSecurityNumber(ssn) {}

void Employee::setFirstName(const string& first) { firstName = first; }
string Employee::getFirstName() const { return firstName; }

void Employee::setLastName(const string& last) { lastName = last; }
string Employee::getLastName() const { return lastName; }

void Employee::setSocialSecurityNumber(const string& ssn) { socialSecurityNumber = ssn; }
string Employee::getSocialSecurityNumber() const { return socialSecurityNumber; }

string Employee::toString() const {
	ostringstream output;
	output << getFirstName() + " " << getLastName()
		<< "\nsocial security number: " << getSocialSecurityNumber()
		<< "\nbirthday: " << birthday;

	return output.str();
}
