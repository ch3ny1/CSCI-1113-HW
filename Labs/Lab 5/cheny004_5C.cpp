#include<iostream>
#include<iomanip>

using namespace std;

void minutesToTime(int minute_value, int& hours, int& mins)
{
	hours = minute_value / 60;
	mins = minute_value % 60;
}

int main()
{
	int hours, mins, minute_values;
	char con = 'y';
	while (con == 'y' || con == 'Y'){
		cout << "Enter a number of minutes: ";
		cin >> minute_values;
		minutesToTime(minute_values, hours, mins);
		cout << "Hours:minutes is " << hours << ":"
			 << setfill('0') << setw(2) << mins << endl;
		cout << "Continue? (y/n): ";
		cin >> con;
	}
	return 0;
}
