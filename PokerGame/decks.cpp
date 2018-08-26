void card::generateCard() {

}

void card::printDetails() {	
	static const char* suitStrings[] = {"Hearts", "Diamonds", "Spades", "Clubs"};
	std::cout << static_cast<int>(this->value) + 1 << " of " << suitStrings[static_cast<int>(this->suit)] << std::endl;
}