#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>

class Package
{
protected:
	std::string name;
	std::string address;
	std::string city;
	std::string state;
	std::string ZIP;
	double weight;
	double costPerOunce;

public:
	Package(std::string, std::string, std::string, std::string, std::string, double, double);
	double calculateCost();
};

#endif PACKAGE_H
