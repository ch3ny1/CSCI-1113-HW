// Lab 9 Warm-up 1 Test_file
// Chenyi Wang 5513416

//#include "Bug.hpp"
#include <iostream>
using namespace std;

class Bug
{
public:
	Bug();
	Bug(int p);
	void move();
	void turn();
	void display() const;

private:
	int position;
	int dir;
};

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

int main()
{
	Bug b(10);
	b.display();
	b.move();
	b.display();
	b.turn();
	b.display();
	b.move();
	b.display();
	return 0;
}
