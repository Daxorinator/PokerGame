#pragma once
#define RANK_COUNT
#define SUIT_COUNT

class card
{
public:
	enum class rank : unsigned char {
		Ace,
		Two,
		Three,
		Four,
		Five,
		Six,
		Seven,
		Eight,
		Nine,
		Ten,
		Jack,
		Queen,
		King,
	#ifdef RANK_COUNT
		Count
	#endif // Count of Ranks
	};

	enum class suit : unsigned char {
		Spades,
		Clubs,
		Hearts,
		Diamonds,
	#ifdef SUIT_COUNT
		Count
	#endif // Count of Suits
	};

	rank Rank;
	suit Suit;
};

