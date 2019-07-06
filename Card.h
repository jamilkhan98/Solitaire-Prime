//Jamil Khan
//Prog 1 - Solitaire Prime
//Sept 20, 2018

#ifndef CARD_H
#define CARD_H
class Card
{
private:
	int rank;
	char suit;
public:
	Card();
	Card(int r, char s);
	void setCard(int r, char s);
	int getValue();
	void showCard();
};
#endif
