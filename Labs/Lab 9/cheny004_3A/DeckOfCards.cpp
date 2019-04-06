// Lab 9 Workout 1
// Chenyi Wang 5513416
// Playing Card Class Implementation

#include "DeckOfCards.hpp"

DeckOfCards::DeckOfCards()
{
	for (i = 0; i <= 51; i++){
		card[i] = i;
	}
	shuffle();
	i = -1;
}

int DeckOfCards::dealCard()
{
	if (i <= 50){
		i++;
		return card[i];
	}
	else {
		shuffle();
		i = -1;
	}
}

void DeckOfCards::shuffle()
{
	srand(time(0));
	int j, temp;
	for (i = 51; i >= 1; i--){
		j = rand()%(i+1);
		temp = card[i];
		card[i] = card[j];
		card[j] = temp;
	}
	i = -1;
}
