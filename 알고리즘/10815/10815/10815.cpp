#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int humanCards[20000005]{ 0 };
int humanCardAmount{ 0 };
int cardAmount{ 0 };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> humanCardAmount;
	for (int inCounter = 0; inCounter < humanCardAmount; inCounter++) {
		int card{ 0 };
		cin >> card;
		humanCards[card + 10000000]++;
	}

	cin >> cardAmount;
	for (int checkCounter = 0; checkCounter < cardAmount; checkCounter++) {
		int card{ 0 };
		cin >> card;
		cout << humanCards[card + 10000000] << " ";
	}
}
