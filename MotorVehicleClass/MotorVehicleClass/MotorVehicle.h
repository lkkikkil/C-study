#include <string>
#include <iostream>

class MotorVehicle
{
	friend std::ostream& operator << (std::ostream&, const MotorVehicle&);

private:
	std::string make;
	std::string fuelType;
	std::string color;
	int yearOfManufacture;
	int engineCapacity;

public:
	MotorVehicle(std::string InMake, std::string InFuelType, int inyearOfManufacture, std::string InColor, int engineCapacity);

	void setmake(std::string);
	std::string getmake();
	void setfuelType(std::string);
	std::string getfuelType();
	void setyearOfManufacture(int);
	int getyearOfManufacture();
	void setcolor(std::string);
	std::string getcolor();
	void setengineCapacity(int);
	int getengineCapacity();

	void displayCarDetails();

	bool operator == (MotorVehicle);
	bool operator != (MotorVehicle);
	bool operator > (MotorVehicle);
};
