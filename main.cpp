//	 Katherine Seng
//	 CECS 282-07
//	 Prog 1 - Solitaire Prime
//	 September 18, 2019

#include "Card.h"
#include "Deck.h"
#include <iostream>
 using namespace std;

// This function determines if a number is a prime
int isPrime(int value)
 {
	// Returns 0 if the number is a non-prime 1
	if (value == 1)
		return 0;

	// This for loop iterates through all possible factors of the number starting from the first prime number 2
	for (int v = 2; v < value; v++)
	{
		// Returns 0, thus determining the number is not a prime
		if (value % v == 0)
			return 0;
	}

	// Returns 1, thus determining the number is a prime
	return 1;
 }

// Main function
int main()
{
	// Starts with a brand new deck
	Deck deck;

	// Creates a variable for the player's choice
	int choice;

	// Prints introduction to the game
	cout << "Welcome to Solitaire Prime!\n" << endl;

	// While loop
	while (1)
	{
		// Displays the main menu
		cout << "1) New Deck\n" << "2) Display Deck\n" << "3) Shuffle Deck\n" << "4) Play Solitaire Prime\n" << "5) Exit\n" << endl;

		// Records the user's choice
		cin >> choice;

		// Starts on a new line to show the results of the player's options
		cout << endl;

		// Switch Case of the game options
		switch (choice)
		{
		// Entering '1' as the option creates a new deck
		case 1:
			deck = Deck();
			cout << "New Deck created\n" << endl;
			break;
		// Entering '2' as the option displays the deck
		case 2:
			deck.showDeck();
			break;
		// Entering '3' as the option shuffles the deck
		case 3:
			deck.shuffle();
			break;
		// Entering '4' as the option plays a game of Solitaire Prime
		case 4:
		{
			// Prints that the player is now playing Solitaire Prime
			if (deck.cardsLeft() != 0)
				cout << "Playing Solitaire Prime!!!\n" << endl;

			// Assigns variables
			int stack = 0;
			int sum = 0;

			// While loop executes if the player has at least one card in their deck
			while (deck.cardsLeft() > 0)
			{
				// Deals a new card
				Card card = deck.deal();

				// Shows the dealt card to the player
				card.showCard();

				// Prints concatenations for visual clarity
				cout << "," << " ";

				// Increments the value of the card to a sum total
				sum = sum + card.getValue();
				
				// Executes if statement if the sum is a prime number
				if (isPrime(sum) != 0)
				{
					// Prints the prime sum
					cout << "Prime: " << sum << endl;
					// Resets the value of the sum variable
					sum = 0;
					// Increments the stack variable
					stack++;
				}
			}

			// Prints that the player lost
			if (sum != 0)
				cout << "Loser!\n" << endl;
			// Prints that the player won with their number of prime piles
			else if (sum == 0 && stack != 0)
				cout << endl << "Winner in " << stack << " piles!\n" << endl;
			// Else statement executes if the player tries to play without enough cards
			else
				cout << "Out of Cards\n" << endl;

			// End of the game
			break;
		}
		// Entering '5' as the option exits the program
		case 5:
			exit(0);
		// If the user enters something that is not 1 - 5, return to the main menu
		default:
			cout << "Invalid Choice\n" << endl;
			break;
		}
	}
	// Exit status
	return 0;
}