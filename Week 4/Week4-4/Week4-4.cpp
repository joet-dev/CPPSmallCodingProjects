/*
 * File: shuffle.cpp
 * Creates a deck of cards, shuffles them and displays them.
 */

#include <iostream>
#include <iomanip>

#include "card.h"
#include "random.h"

using namespace std;

/* Constants */

const int NUM_CARDS = 52;
const int NUM_SUITS = 4;
const int NUM_RANKS = 13;
const int NUM_SHUFFLES = 1000;

/* Function Prototypes */

/* Creates the deck of cards */
Card* CreateDeck() {
	Card* deckArr = new Card[52];
	
	int pos = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
            deckArr[pos] = NewCard(static_cast<Rank>(j), static_cast<Suit>(i));
            pos++;
		}
	}
	return deckArr;
}

/* Shuffles the deck of cards */
void Shuffle(Card* deck) {
    Card temp;
    for (int i = 0; i < 1000; i++) {
        int randIdx1 = RandomInteger(0, 52);
        int randIdx2 = RandomInteger(0, 52);
        temp = deck[randIdx1];
        deck[randIdx1] = deck[randIdx2];
        deck[randIdx2] = temp;
    }
}

/* Displays the current configuration of the deck */
void DisplayDeck(Card* deck) {
	for (int i = 0; i < 52; i++) {
		cout << CardName(deck[i]) << " ";;
		if (((i+1) % 13) == 0) {
			cout << endl;
		}
	}
}

int main() {
	
	Card *deck;
	
	Randomize();
	deck = CreateDeck();

	DisplayDeck(deck);
	cout << endl;

	Shuffle(deck);
	DisplayDeck(deck);
	
    system("pause");
}

