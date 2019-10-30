#include <iostream>

using namespace std;

class parent {
public:
	void print1() {
		cout << "parent print1" << "\n";
	}
	virtual void print2() {
		cout << "parent print2" << "\n";
	}
	virtual void print3() {
		cout << "parent print3" << "\n";
	}
};

class child : public parent {
public:
	void print2() override {
		cout << "child print2" << "\n";
	}
	void print3(int x) {
		cout << "child print3" << "\n";
	}
};

int main() {
	parent p;
	child c;
	parent* cPtr = &c;

	cPtr->print1();
	cPtr->print2();
	cPtr->print3();
}
