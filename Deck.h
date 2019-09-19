//	 Katherine Seng
//	 CECS 282-07
//	 Prog 1 - Solitaire Prime
//	 September 18, 2019

#ifndef DECK_H
#define DECK_H
#include "Card.h"
#include <iostream>
using namespace std;

class Deck
{
private:
	int index;
	int remaining;
	Card storage[52];
	char SUIT[4] = { 'S','H','D','C' };
	char RANK[13] = { 'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K' };

public:
	Deck();
	Card deal();
	void shuffle();
	void showDeck();
	void refreshDeck();
	int cardsLeft();
};
#endif