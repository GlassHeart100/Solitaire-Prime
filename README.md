# Solitaire-Prime

Unique take on the game of Solitaire. Written using C++.

## Rules
1. Using one standard deck of cards, draw the top card and deal it face up
2. Find the value of the card
3. If the card value is a prime number, start from Instruction #1 while discarding the current pile
4. If the card value is not a prime number, start from Instruction #1 while adding to the current pile
5. Add the total values of all the cards drawn in their respective piles
6. If the sum of the player's final pile is a prime number, they are declared winner
7. If the sum of the player's final pile is not a prime number, they are declared loser

## Card Values
Ace = 1 , 2 = 2 , ... , 10 = 10 , Jack = 10 , Queen = 10 , King = 10

## How to Play?
Choose an option from the main menu by entering a number from 1 - 5

## How to Use?
Place the header (.h) and source code (.cpp) files in the same folder, then compile "main.cpp" using any C++ compiler
