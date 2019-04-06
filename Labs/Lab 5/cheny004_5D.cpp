#include<iostream>
#include<iomanip>

using namespace std;

void elapsedTime(int h1, int m1, int h2, int m2, int& h, int& m);

int main()
{
	int h1, m1, h2, m2, h, m;
	char con = 'y', colon;
	while (con == 'y'||con == 'Y'){
		cout << "Enter first time (hours:minutes) : ";
		cin >> h1 >> colon >> m1;
		cout << "Enter second time (hours:minutes) :";
		cin >> h2 >> colon >> m2;
		elapsedTime(h1, m1, h2, m2, h, m);
		cout << "Elapsed time is: " << h << ":"
			 << setfill('0') << setw(2) << m << endl;
		cout << "Continue? (y/n): ";
		cin >> con;
	}
	return 0;
}

void elapsedTime(int h1, int m1, int h2, int m2, int& h, int& m)
{
	m1 = m1 + h1 * 60;
	m2 = m2 + h2 * 60;
	h = abs((m1 - m2)/60);
	m = abs((m1 - m2)%60);
}
