//Jamil Khan
//Prog 1 - Solitaire Prime
//Sept 20, 2018

#include <iostream>
#include "Card.h"
#include <string>

using namespace std;

Card::Card()
{
	rank = 'Z';
	suit = 'Z';
}
Card::Card(int r, char s)
{
	rank = r;
	suit = s;
}
void Card::setCard(int r, char s)
{
	rank = r;
	suit = s;
}
int Card::getValue()
{
	if (rank <= 10) {
		return rank;
	}
	else{
		return 10;
	}
}
void Card::showCard()
{
	if (rank == 1) {
		cout << "A" << suit << ", ";
	}
	else if (rank == 11) {
		cout << "J" << suit << ", ";
	}
	else if (rank == 12) {
		cout << "Q" << suit << ", ";
	}
	else if (rank == 13) {
		cout << "K" << suit << ", ";
	}
	else {
		cout << rank << suit << ", ";
	}
}
