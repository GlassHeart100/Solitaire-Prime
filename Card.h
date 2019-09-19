#ifndef CARD_H
#define CARD_H
#include <string>
#include <iostream>
using namespace std;

class Card
{
private:
	char rank;
	char suit;

public:
	Card();
	Card(char r, char s);
	int getValue();
	void setCard(char r, char s);
	void showCard();
};
#endif
