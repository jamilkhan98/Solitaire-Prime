//Jamil Khan
//Prog 1 - Solitaire Prime
//Sept 20, 2018

#include "Card.h"
#include "Deck.h"
#include <iostream>
#include <string>

using namespace std;

bool isPrime(int x);
void play_game(Deck deck);

int main()
{
	int selection;
	bool going = true;
	Deck deck = Deck();
	
	while (going) {
		cout << "Welcome to Solitaire Prime!" << endl;
		cout << "1) New Deck" << endl;
		cout << "2) Display Deck" << endl;
		cout << "3) Shuffle Deck" << endl;
		cout << "4) Play Solitaire Prime" << endl;
		cout << "5) Exit" << endl;

		cin >> selection;

		if (selection == 1) {
			deck.refreshDeck();
			cout << endl;
		}
		else if (selection == 2) {
			deck.showDeck();
			cout << endl;
		}
		else if (selection == 3) {
			deck.shuffle();
			cout << endl;
		}
		else if (selection == 4) {
			cout << "Playing Solitaire Prime!!!!" << endl;
			play_game(deck);
			cout << endl;
		}

		else if (selection == 5) {
			going = false;
			cout << endl;
		}

		else {
			cout << "Must enter 5 to quit game!\n" << endl;
			continue;
			cout << endl;
		}
		getchar();
	}
}

void play_game(Deck deck) {
	int pileCounter = 0;
	int sum = 0;
	while (deck.cardsLeft() > 0 && deck.cardsLeft() <= 52) {
		Card dealt = deck.deal();
		dealt.showCard();
		sum = dealt.getValue();
		while (!isPrime(sum) && deck.cardsLeft() > 0) {
			dealt = deck.deal();
			dealt.showCard();
			sum += dealt.getValue();
		}
		if (isPrime(sum)) {
			cout << "Prime: " << sum << endl;
			pileCounter += 1;
		}
	}
	if (isPrime(sum)) {
		cout << "Winner in " << pileCounter << " piles." << endl;
	}
	else {
		cout << "Loser" << endl;
	}
}

bool isPrime(int x) {
	if (x == 2) {
		return true;
	}

	if (x == 1 || x % 2 == 0) {
		return false;
	}
	else {
		for (int i = 3; i * i <= x; i += 2) {
			if (x % i == 0) {
				return false;
			}
		}
	}
	return true;
}
