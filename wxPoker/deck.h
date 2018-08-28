#pragma once // Header Guard

#include "card.h" // Include Cards
#include <vector> // Include Vector for card vector

class deck
{
public:
	card deckArray[52];
	deck();
	card generateCard();
	void printFullDeck();
};