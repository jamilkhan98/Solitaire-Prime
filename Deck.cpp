//Jamil Khan
//Prog 1 - Solitaire Prime
//Sept 20, 2018

#include "Deck.h"
#include "Card.h"
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

//Default constructor for Deck object (collection of Card objects)
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

//method to reset ranks and values of all Card objects in Deck object
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

//method to deal top Card object from Deck
Card Deck::deal()
{
	return storage[top++];

}

//method to randomly shuffle Card objects in Deck
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

//method to return number of Card objects remaining
int Deck::cardsLeft()
{
	return 52 - top;
}

//display method to display all Card objects in Deck in 4x13 matrix
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
