//Jamil Khan
//Prog 1 - Solitaire Prime
//Sept 20, 2018

#include <iostream>
#include "Card.h"
#include <string>

using namespace std;

//Default constructor initializes rank and suit of Card object
Card::Card()
{
	rank = 'Z';
	suit = 'Z';
}

//Overloaded constructor takes in rank and suit parameters for Card object
Card::Card(int r, char s)
{
	rank = r;
	suit = s;
}

//setter method to set updated rank and suit of Card object
void Card::setCard(int r, char s)
{
	rank = r;
	suit = s;
}

//getter method to return rank of Card object
int Card::getValue()
{
	if (rank <= 10) {
		return rank;
	}
	else{
		return 10;
	}
}

//display method for Card object, showing rank and suit
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
