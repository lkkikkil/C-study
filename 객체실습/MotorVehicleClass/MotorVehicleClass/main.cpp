#include "MotorVehicle.h"

using namespace std;

int main()
{
	MotorVehicle motor1("Tico", "gasoline", 2000, "red", 3);
	MotorVehicle motor2("Tico", "gasoline", 2000, "red", 3);
	MotorVehicle motor3("Tico", "gasoline", 1999, "red", 3);
	MotorVehicle motor4("Lamborghini Huracan", "gasoline", 2013, "green", 5);

	cout << "motor1\n" << motor1;
	cout << "\nmotor2\n" << motor2;
	cout << "\nmotor3\n" << motor3;
	cout << "\nmotor4\n" << motor4;

	cout << "\nmotor1 == motor2 : " << ((motor1 == motor2) ? "true" : "false");
	cout << "\nmotor1 == motor3 : " << ((motor1 == motor3) ? "true" : "false");
	cout << "\nmotor1 == motor4 : " << ((motor1 == motor4) ? "true" : "false");

	cout << "\n\nmotor1 != motor2 : " << ((motor1 != motor2) ? "true" : "false");
	cout << "\nmotor1 != motor3 : " << ((motor1 != motor3) ? "true" : "false");
	cout << "\nmotor1 != motor4 : " << ((motor1 != motor4) ? "true" : "false");

	cout << "\n\nmotor1 > motor2 : " << ((motor1 > motor2) ? "true" : "false");
	cout << "\nmotor1 > motor3 : " << ((motor1 > motor2) ? "true" : "false");
	cout << "\nmotor1 > motor4 : " << ((motor1 > motor2) ? "true" : "false");
}
