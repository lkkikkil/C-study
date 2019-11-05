#include "TwoDayPackage.h"

using namespace std;

TwoDayPackage::TwoDayPackage(string _name, string _address, string _city, string _state, string _ZIP, double _weight, double _costPerOunce, double _flatFee)
	: Package(_name, _address, _city, _state, _ZIP, _weight, _costPerOunce) {
	flatFee = _flatFee;
}

double TwoDayPackage::calculateCost() {
	return Package::calculateCost() + flatFee;
}
