#include "Card.h"

std::string Card::faces[13]{ "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
std::string Card::suits[4]{ "Spades", "Diamonds", "Hearts", "Clubs" };

Card::Card(int number) {
	setCard(number);
}

void Card::setCard(int _number) {
	setFace(_number % 13);
	setSuit(_number / 13);
}

void Card::setFace(int _face) {
	face = faces[_face];
}

void Card::setSuit(int _suit) {
	suit = suits[_suit];
}

std::string Card::toString() {
	return face + " of " + suit;
}