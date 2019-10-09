#include "DeckOfCards.h"
#include <iostream>

DeckOfCards::DeckOfCards() {
	for (int initialCounter = 0; initialCounter < 52; initialCounter++) {
		deck.push_back(Card(initialCounter));
	}
}

void DeckOfCards::shuffle() {
	deck.clear();
	currentCard = 0;

	int number = rand() % 52;
	for (int cardCounter = 0; cardCounter < 52; cardCounter++) {
		while (count(cardNumber.begin(), cardNumber.end(), number)) {
			number = rand() % 52;
		}
		cardNumber.push_back(number);
	}

	for (int InCounter = 0; InCounter < 52; InCounter++) {
		deck.push_back(Card(cardNumber[InCounter]));
	}
}

std::string DeckOfCards::dealCard() {
	currentCard++;
	return deck[currentCard - 1].toString();
}

bool DeckOfCards::moreCards() {
	if (currentCard == 52) {
		return false;
	}
	return true;
}