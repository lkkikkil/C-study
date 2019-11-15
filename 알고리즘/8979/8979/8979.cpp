#include <iostream>
#include <vector>

using namespace std;

int main() {
	int countryAmount{ 0 }, countryCheckNumber{ 0 };
	cin >> countryAmount >> countryCheckNumber;

	vector<int*> countries;

	for (int inCounter = 0; inCounter < countryAmount; inCounter++) {
		int countryNumber{ 0 }, gold{ 0 }, sliver{ 0 }, bronze{ 0 };
		cin >> countryNumber >> gold >> sliver >> bronze;

		int rank{ 1 };
		for (int rankCheckCounter = 0; rankCheckCounter < countries.size(); rankCheckCounter++) {
			if (countries[rankCheckCounter][1] < gold) {
				countries[rankCheckCounter][4]++;
			}
			else if (countries[rankCheckCounter][1] > gold) {
				rank++;
			}
			else if (countries[rankCheckCounter][2] < sliver) {
				countries[rankCheckCounter][4]++;
			}
			else if (countries[rankCheckCounter][2] > sliver) {
				rank++;
			}
			else if (countries[rankCheckCounter][3] < bronze) {
				countries[rankCheckCounter][4]++;
			}
			else if (countries[rankCheckCounter][3] > bronze) {
				rank++;
			}
			else {
				;
			}
		}

		countries.push_back(new int[5]{ countryNumber, gold, sliver, bronze, rank });
	}

	for (int countryCheckCounter = 0; countryCheckCounter < countryAmount; countryCheckCounter++) {
		if (countries[countryCheckCounter][0] == countryCheckNumber) {
			cout << countries[countryCheckCounter][4];
			break;
		}
	}
}
