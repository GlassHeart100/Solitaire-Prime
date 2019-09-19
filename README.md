# Solitaire-Prime

Unique take on the game of Solitaire. Written using C++.

## Rules
1. Draw the top card from the deck and place it face-up.
2. The Sum is now the value of that card (Ace = 1, 2 = 2, ... 10 = 10, Jack = 10, Queen = 10, King = 10)
3. If the Sum is a prime number, discard that pile, and start over at Instruction #1
4. If the Sum is not a prime number, take the next card from the top of the deck and place it on the top of the card stack
5. The Sum is now the sum of all cards in the card stack
6. Go to Instruction #3

## How to Play?
Choose an option from the main menu by entering a number from 1 - 5

## How to Use?
Place the header (.h) and source code (.cpp) files in the same folder, then compile "main.cpp" using any C++ compiler.
