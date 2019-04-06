// Lab 9 Stretch 1
// Chenyi Wang 5513416
// Bug Class Decleration

#ifndef BUG_HPP
#define BUG_HPP
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

#endif
