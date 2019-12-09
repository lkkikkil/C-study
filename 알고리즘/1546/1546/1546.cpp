#include <iostream>
#include <vector>
#include <algorithm>]
#include <iomanip>

using namespace std;

vector <double> grades;

int main() {
	int subjectAmount{ 0 };
	cin >> subjectAmount;

	for (int subjectCounter = 0; subjectCounter < subjectAmount; subjectCounter++) {
		double grade{ 0 };
		cin >> grade;
		grades.push_back(grade);
	}

	sort(grades.begin(), grades.end(), less<int>());

	double average{ 0 };
	for (int subjectCounter = 0; subjectCounter < subjectAmount; subjectCounter++) {
		average += grades[subjectCounter] / grades[subjectAmount - 1] * 100;
	}

	cout << fixed << setprecision(2) << average / subjectAmount * 1.00;
}
