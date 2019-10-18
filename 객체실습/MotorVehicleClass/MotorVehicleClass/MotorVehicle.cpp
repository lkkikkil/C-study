#include <iostream>
#include "MotorVehicle.h"

MotorVehicle::MotorVehicle(std::string InMake, std::string InFuelType, int InyearOfManufacture, std::string InColor, int InengineCapacity) {
	setmake(InMake);
	setfuelType(InFuelType);
	setyearOfManufacture(InyearOfManufacture);
	setcolor(InColor);
	setengineCapacity(InengineCapacity);
}

void MotorVehicle::setmake(std::string _make)
{
	make = _make;
}
std::string MotorVehicle::getmake()
{
	return make;
}

void MotorVehicle::setfuelType(std::string _fuelType)
{
	fuelType = _fuelType;
}
std::string MotorVehicle::getfuelType()
{
	return fuelType;
}

void MotorVehicle::setyearOfManufacture(int _yearOfManufacture)
{
	yearOfManufacture = _yearOfManufacture;
}
int MotorVehicle::getyearOfManufacture() {
	return yearOfManufacture;
}

void MotorVehicle::setcolor(std::string _color)
{
	color = _color;
}
std::string MotorVehicle::getcolor()
{
	return color;
}

void MotorVehicle::setengineCapacity(int _engineCapacity)
{
	engineCapacity = _engineCapacity;
}
int MotorVehicle::getengineCapacity()
{
	return engineCapacity;
}

void MotorVehicle::displayCarDetails()
{
	std::cout << "make : " << getmake() << "\n"
		<< "fuelType : " << getfuelType() << "\n"
		<< "yearOfManufactur : " << getyearOfManufacture() << "\n"
		<< "color : " << getcolor() << "\n"
		<< "engineCapacity : " << getengineCapacity() << "\n";
}

std::ostream& operator << (std::ostream& output, const MotorVehicle& _MotorVehicle) {
	output << "make : " << _MotorVehicle.make << "\n"
		<< "fuelType : " << _MotorVehicle.fuelType << "\n"
		<< "yearOfManufactur : " << _MotorVehicle.yearOfManufacture << "\n"
		<< "color : " << _MotorVehicle.color << "\n"
		<< "engineCapacity : " << _MotorVehicle.engineCapacity << "\n";
	return output;
}

bool MotorVehicle::operator == (MotorVehicle otherMotorVehicle) {
	if (make != otherMotorVehicle.make) {
		return false;
	}
	if (fuelType != otherMotorVehicle.fuelType) {
		return false;
	}
	if (yearOfManufacture != otherMotorVehicle.yearOfManufacture) {
		return false;
	}
	if (color != otherMotorVehicle.color) {
		return false;
	}
	if (engineCapacity != otherMotorVehicle.engineCapacity) {
		return false;
	}

	return true;
}

bool MotorVehicle::operator != (MotorVehicle otherMotorVehicle) {
	if (make == otherMotorVehicle.make && fuelType == otherMotorVehicle.fuelType && yearOfManufacture == otherMotorVehicle.yearOfManufacture
		&& color == otherMotorVehicle.color && engineCapacity == otherMotorVehicle.engineCapacity) {
		return false;
	}

	return true;
}

bool MotorVehicle::operator > (MotorVehicle otherMotorVehicle) {
	if (yearOfManufacture < otherMotorVehicle.yearOfManufacture) {
		return true;
	}

	return false;
}
