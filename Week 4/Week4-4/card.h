/*
 * File: card.h
 * --------------
 * This interface provides several functions for card.cpp
 */

#ifndef _card_h
#define _card_h

enum Rank { TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE };
enum Suit { HEARTS, DIAMONDS, SPADES, CLUBS };

//small container for similar root things
struct Card {
	Rank rank;
	Suit suit;
};


Card NewCard(Rank rank, Suit suit);

Rank GetRank(Card card);

Suit GetSuit(Card card);

std::string CardName(Card card);

#endif
