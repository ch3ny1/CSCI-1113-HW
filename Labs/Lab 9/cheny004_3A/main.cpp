// Lab 9 Workout 1
// Chenyi Wang 5513416

#include "DeckOfCards.hpp"
#include <iostream>

using namespace std;

void display(int hand[4]);

int main()
{
	DeckOfCards DOC;
	int hand[4];
	int i = 0;
	while (i <= 51){
		for (int j = 0; j < 4; j++){
			hand[j] = DOC.dealCard();
			i++;
		}
		display(hand);
	}
	return 0;
}

void display(int hand[4])
{
	int value;
	for (int i = 0; i <= 3; i++){
		value = hand[i]%13;
		switch(value)
		{
			case 0: cout << "A ";
					break;
			case 10: cout << "J ";
					break;
			case 11: cout << "Q ";
					break;
			case 12: cout << "K ";
					break;
			default: cout << value << " ";
		}
	}
	cout << endl;
}
