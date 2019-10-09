#include <iostream>
#include "DeckOfCards.h"

using namespace std;

int main()
{
	DeckOfCards deck1;
	
	cout << "No shuffle\n";
	for (int cardCounter = 0; cardCounter < 52; cardCounter++) {
		cout << "\n" << cardCounter + 1 << " card : " << deck1.dealCard();
		cout << "\nmore cards ? " << (deck1.moreCards() ? "true" : "false");
	}

	deck1.shuffle();
	cout << "\n\nAfter shuffle\n";
	for (int cardCounter = 0; cardCounter < 52; cardCounter++) {
		cout << "\n" << cardCounter + 1 << " card : " << deck1.dealCard();
		cout << "\nmore cards ? " << (deck1.moreCards() ? "true" : "false");
	}

	return 0;
}