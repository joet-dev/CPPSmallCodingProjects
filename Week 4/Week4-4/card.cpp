#include <iostream>
#include <string>
#include "card.h"

using namespace std;

Card NewCard(Rank rank, Suit suit) {
    Card newCard = {rank, suit};
    return newCard;
}

Rank GetRank(Card card) {
    return card.rank;
}

Suit GetSuit(Card card) {
    return card.suit;
}

std::string CardName(Card card) {
    std::string listRank[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "T", "J", "Q", "K", "A"};
    std::string listSuit[4] = {"H", "D", "S", "C"};
    
    std::string cardId = (listRank[card.rank] + listSuit[card.suit]);
    return cardId;
}




