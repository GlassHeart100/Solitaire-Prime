# include "Deck.h"
# include <time.h>
# include <iostream>
using namespace std;

// This method creates a deck of cards in a specific order
Deck::Deck() 
{	
	// Assigns remaining value
	remaining = 52;

	// Assigns index value
	index = 0;

	// Outer for loop iterates through each possible card suit
	for (int s = 0; s < 4; s++)
	{
		// Inner for loop iterates through each possible card rank
		for (int r = 0; r < 13; r++)
		{
			// Adds a card with a rank and suit
			storage[index].setCard(RANK[r], SUIT[s]);
			
			// Increments index
			index++;
		}
	}
}

// This method deals a card from the top of the deck
Card Deck::deal()
{
	// Assigns index value
	index = 0;

	// Stores the top card of the deck to a new variable
	Card deal = storage[0];

	// Calculates the size of the deck of cards
	int size = *(&storage + 1) - storage;

	// Removes the top card from the player's deck and shifts the rest
	for (int x = 0; x < size; x++)
	{
		storage[index] = storage[x + 1];
		index++;
	}

	// Decrements remaining value
	remaining--;

	// Returns the dealt card
	return deal;
}

// This method shuffles the cards in the deck
void Deck::shuffle()
{
	// Initialize seed randomly
	srand(time(0));
	
	// This for loop switches the positions of two cards
	for (index = 0; index < 52; index++)
	{
		// Assigns a random number to a variable
		int random = index + (rand() % (52 - index));

		// Swaps cards in the deck
		swap(storage[index], storage[random]);
	}
	// This if statement executes if there are insufficient cards in the player's deck
	if (remaining == 0)
		cout << "Out of Cards\n" << endl;
}

// This method shows all the cards in the deck in 13 columns and 4 rows
void Deck::showDeck()
{
	// Assigns index value
	index = 0;

	// This if statement executes if there are sufficient cards in the player's deck
	if (remaining != 0)
	{
		// Outer for loop is used to create four rows
		for (int s = 0; s < 4; s++)
		{
			// Inner for loop is used to create thirteen columns
			for (int r = 0; r < 13; r++)
			{
				// Prints the cards in the deck in a single row
				storage[index].showCard();
				cout << " ";

				// Increments index
				index++;
			}
			// Creates a new row
			cout << endl;
		}
	}
	// This else statement executes if there are insufficient cards in the player's deck
	else
		cout << "Out of Cards\n";

	// Starts on a new line at the end of calling this method
	cout << endl;
}

// This method resets the deck of cards so it appears as a brand new deck
void Deck::refreshDeck()
{
	// Assigns index value
	index = 0;

	// Outer for loop iterates through each possible card suit
	for (int s = 0; s < 4; s++)
	{
		// Inner for loop iterates through each possible card rank
		for (int r = 0; r < 13; r++)
		{
			// Adds a card with a rank and suit
			storage[index].setCard(RANK[r], SUIT[s]);

			// Increments index
			index++;
		}
	}
}

// This method returns the number of cards left
int Deck::cardsLeft()
{
	return remaining;
}
