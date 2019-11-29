#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector <int> groupA;
	vector <int> reArrangeA;
	vector <int*> groupB;

	int caseAmount{ 0 };
	cin >> caseAmount;
	for (int ACounter = 0; ACounter < caseAmount; ACounter++) {
		int A{ 0 };
		cin >> A;

		groupA.push_back(A);
		reArrangeA.push_back(0);
	}

	for (int BCounter = 0; BCounter < caseAmount; BCounter++) {
		int B{ 0 };
		cin >> B;

		int bigCheck{ 0 };
		for (int bigCheckCounter = 0; bigCheckCounter < BCounter; bigCheckCounter++) {
			if (groupB[bigCheckCounter][0] < B) {
				bigCheck++;
			}
			else {
				groupB[bigCheckCounter][1]++;
			}
		}
		groupB.push_back(new int[2]{ B, bigCheck });
	}

	sort(groupA.begin(), groupA.end(), greater<int>());
	for (int reArrangeCounter = 0; reArrangeCounter < caseAmount; reArrangeCounter++) {
		reArrangeA[reArrangeCounter] = groupA[groupB[reArrangeCounter][1]];
	}

	int result{ 0 };
	for (int caseCounter = 0; caseCounter < caseAmount; caseCounter++) {
		result += reArrangeA[caseCounter] * groupB[caseCounter][0];
	}

	cout << result;
}
