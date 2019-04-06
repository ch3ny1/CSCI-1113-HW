// CSci 1113 HW7
// Chenyi Wang 5513416
// Problem A main

#include<iostream>
#include<cstdlib>
#include "SensorReading.hpp"

using namespace std;

int main()
{
	sensorReading sr(6722, 724.5, 340.8, 5.2);
	char option;
	while (true) {
		cout << "Validate(v), print(p), adjust time(t), adjust direction(d), or quit(q): ";
		cin >> option;
		switch (option)
		{
			case 'v': if (sr.validate() == true)
						cout << "Valid" << endl;
					  else
						cout << "NOT valid" << endl;
						break;
			case 'p': sr.print();
					  break;
			case 't': cout << "Amount of change: ";
					  int t;
					  cin >> t;
					  sr.adjustTime(t);
					  break;
			case 'd': cout << "Amount of change: ";
					  double d;
					  cin >> d;
					  sr.adjustWindDirection(d);
					  break;
			case 'q': exit(1);
			default: cout << "That character is not an option" << endl;
		}
	}
	return 0;
}
