#include <iostream>	
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

class Shape {
public:
	Shape(string _name, int _width, int _height) {
		name = _name;
		width = _width;
		height = _height;
	}
	virtual ~Shape() = default;

	virtual double shapeSpace() = 0;
	string getName() {
		return name;
	}

protected:
	string name;
	double width;
	double height;
};

class Rect : public Shape {
public:
	Rect(string _name, double _width, double _height) : Shape(_name, _width, _height) {}
	virtual ~Rect() = default;

	virtual double shapeSpace() override {
		return width * height;
	}
};

class Triangle : public Shape {
public:
	Triangle(string _name, double _width, double _height) : Shape(_name, _width, _height) {}
	virtual ~Triangle() = default;

	virtual double shapeSpace() override {
		return (width * height) / 2;
	}
};

void Swap(int*, int*);

int main() {
	ofstream outTest{ "Test.txt", ios::out };

	Rect shape1("��Ʈ��", 40, 25);
	Triangle shape2("�佺Ʈ", 20, 12);

	Shape* shapes[2]{ &shape1, &shape2 };

	for (int shapeCounter = 0; shapeCounter < 2; shapeCounter++) {
		outTest << setw(8) << shapes[shapeCounter]->getName() << " �� ���̴� " << showpoint << shapes[shapeCounter]->shapeSpace() << "\n";
	}

	int a{ 10 }, b{ 20 };

	outTest << setw(11) << "����" << " a, b�� " << a << " " << b << "\n";

	Swap(&a, &b);

	outTest << setw(11) << "�ٲ�" << " a, b�� " << a << " " << b << "\n";
}

void Swap(int* _a, int* _b) {
	int change{ *_a };
	*_a = *_b;
	*_b = change;
}
