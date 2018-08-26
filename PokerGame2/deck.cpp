#include "stdafx.h"
#include "deck.h"

deck::deck() {
	for (int x = 0; x < static_cast<int>(card::suit::Count); x++) {
		for (int y = 0; y < static_cast<int>(card::rank::Count); y++) {
			deckArray[(x * static_cast<int>(card::rank::Count)) + y].Suit = card::suit(x);
			deckArray[(x * static_cast<int>(card::rank::Count)) + y].Rank = card::rank(y);
		}
	}
}

card deck::generateCard()
{
	card generatedCard;

	return generatedCard;
}

void deck::printFullDeck(){
	for (deckArray) {
	
	}
}

