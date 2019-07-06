//Jamil Khan
//Prog 1 - Solitaire Prime
//Sept 20, 2018

#include "Deck.h"
#include "Card.h"
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;
Deck::Deck()
{
	top = 0;
	int i = 0;
		for (int s = 0; s < 4; s++) {
			for (int r = 0; r < 13; r++) {
			storage[i++] = Card(ranks[r], suits[s]);
		}
	}
}
void Deck::refreshDeck()
{
	top = 0;
	int i = 0;
	for (int s = 0; s < 4; s++) {
		for (int r = 0; r < 13; r++) {
			storage[i++].setCard(ranks[r], suits[s]);
		}
	}

}
Card Deck::deal()
{
	return storage[top++];

}
void Deck::shuffle()
{
	int x;
	int y;
	Card temp;
	top = 0;

	for (int i = 0; i < 10000; i++) {
		x = rand() % 52;
		y = rand() % 52;

		temp = storage[x];
		storage[x] = storage[y];
		storage[y] = temp;
	}

}
int Deck::cardsLeft()
{
	return 52 - top;
}
void Deck::showDeck()
{
	int i = 0;
	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 13; col++) {
			storage[i++].showCard();
		}
		cout << endl;
	}
}
