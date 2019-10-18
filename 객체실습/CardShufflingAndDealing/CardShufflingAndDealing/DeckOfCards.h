#include "Card.h"
#include <vector>

class DeckOfCards
{
private:
	std::vector <Card> deck;
	int currentCard{ 0 };
	std::vector <int> cardNumber;
public:
	DeckOfCards();
	void shuffle();
	std::string dealCard();
	bool moreCards();
};
