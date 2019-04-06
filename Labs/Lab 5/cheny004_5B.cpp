#include<iostream>

using namespace std;

int timeToMinutes (int hours, int mins)
{
	return hours * 60 + mins;
}

int main()
{
	int h, m;
	char con = 'y', colon;
	while (con == 'y' || con == 'Y'){
		cout << "Enter a time duration (hh:mm) ";
		cin >> h >> colon >> m;
		cout << "Total minutes: " << timeToMinutes(h, m) << endl;
		cout << "Continue? (y/n): ";
		cin >> con;
	}
	return 0;
}
