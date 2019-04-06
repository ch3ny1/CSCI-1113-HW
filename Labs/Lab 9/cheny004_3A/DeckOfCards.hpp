// Lab 9 Workout 1
// Chenyi Wang 5513416
// Playing Card Class Decleration

#ifndef DECKOFCARDS_HPP
#define DECKOFCARDS_HPP
#include <random>
#include <ctime>

using namespace std;

class DeckOfCards
{
public:
	DeckOfCards();
	int dealCard();
	void shuffle();
	
private:
	int card[52];
	int i;
};

#endif
	
