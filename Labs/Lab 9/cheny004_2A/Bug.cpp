// Lab 9 Stretch 1
// Chenyi Wang 5513416
// Bug Class Implementation

#include "Bug.hpp"

Bug::Bug(): position(0), dir(1)
{}

Bug::Bug(int p): position(p), dir(1)
{}

void Bug::move()
{
	position++;
}

void Bug::turn()
{
	if (dir == 1)
		dir = -1;
	else
		dir = 1;
}

void Bug::display() const
{
	cout << "position = " << position
		<< ", direction = " << dir << endl;
}
