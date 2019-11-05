#include "OvernightPackage.h"

using namespace std;

OvernightPackage::OvernightPackage(string _name, string _address, string _city, string _state, string _ZIP, double _weight, double _costPerOunce, double _feePerOunce)
	: Package(_name, _address, _city, _state, _ZIP, _weight, _costPerOunce) {
	feePerOunce = _feePerOunce;
}

double OvernightPackage::calculateCost() {
	return weight * (costPerOunce + feePerOunce);
}
