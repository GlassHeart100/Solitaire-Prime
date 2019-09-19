//	 Katherine Seng
//	 CECS 282-07
//	 Prog 1 - Solitaire Prime
//	 September 18, 2019

# include "Card.h"
# include <iostream>
using namespace std;

// This method creates a "blank" Card
Card::Card()
{
	rank = NULL;
	suit = NULL;
}

// This constructor creates a Card with a set suit and with a set rank
Card::Card(char r, char s)
{
	rank = r;
	suit = s;
}

// This method returns the point value of the card
int Card::getValue()
{
	// Returns the point value as the respective number
	if (rank >= '2' && rank <= '9')
		return (int) (rank - 48);
	// Returns 'A' as the number 1
	else if (rank == 'A')
		return 1;
	// Returns 'T' or 'J' or 'Q' or 'K' as the number 10
	else if (rank == 'T' || rank == 'J' || rank == 'Q' || rank == 'K')
		return 10;
}

// This method sets an existing blank card to a particular value
void Card::setCard(char r, char s)
{
	rank = r;
	suit = s;
}

// This method displays the Card using two fields
void Card::showCard()
{
	// This if statement prints 'T' as integer 10
	if (rank == 'T') 
		cout << 10;
	// This else statement prints other card ranks as their assigned ranks
	else 
		cout << rank;

	// These conditional statements print the appropriate suit for each card
	if (suit == 'S')
		cout << "S";
	else if (suit == 'H')
		cout << "H";
	else if (suit == 'D')
		cout << "D";
	else if (suit == 'C')
		cout << "C";
}