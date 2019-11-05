#include "Package.h"

class TwoDayPackage : public Package
{
private:
	double flatFee;

public:
	TwoDayPackage(std::string, std::string, std::string, std::string, std::string, double, double, double);
	double claculateCost();
};
