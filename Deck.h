//Jamil Khan
//CECS 282-05
//Prog 1 - Solitaire Prime
//Sept 20, 2018

#include "Card.h"
#include <string>
#ifndef DECK_H
#define DECK_H
class Deck
{
private:
	Card storage[52];
	int top;
	int ranks[13] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
	char suits[4] = { 'S', 'H', 'D', 'C' };

public:
	Deck();
	void refreshDeck();
	Card deal();
	void shuffle();
	int cardsLeft();
	void showDeck();
};
#endif