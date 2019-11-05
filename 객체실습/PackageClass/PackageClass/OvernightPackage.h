#ifndef OVERNIGHT_H
#define OVERNIGHT_H

#include "Package.h"

class OvernightPackage : public Package
{
private:
	double feePerOunce;

public:
	OvernightPackage(std::string, std::string, std::string, std::string, std::string, double, double, double);
	double calculateCost();
};

#endif OVERNIGHT_H
