#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class human {
	
public:
	int old;
	string name;
	int number;
	human(int _old, string _name, int _number) {
		old = _old;
		name = _name;
		number = _number;
	}
};

bool compare(human human1, human human2) {
	if (human1.old == human2.old) {
		return human1.number < human2.number;
	}
	else {
		return human1.old < human2.old;
	}
}

int main() {
	int humanAmount{ 0 };
	cin >> humanAmount;

	vector <human> humans;

	for (int humanCounter = 0; humanCounter < humanAmount; humanCounter++) {
		int old;
		string name;

		cin >> old >> name;
		humans.push_back(human(old, name, humanCounter));
	}
	
	stable_sort(humans.begin(), humans.end(), compare);

	for (int outCounter = 0; outCounter < humanAmount; outCounter++) {
		cout << humans[outCounter].old << " " << humans[outCounter].name << "\n";
	}
}
