#include "Package.h"

using namespace std;

Package::Package(string _name, string _address, string _city, string _state, string _ZIP, double _weight, double _costPerOunce) {
	name = _name;
	address = _address;
	city = _city;
	state = _state;
	ZIP = _ZIP;
	weight = _weight;
	costPerOunce = _costPerOunce;
}

double Package::calculateCost() {
	return weight * costPerOunce;
}
