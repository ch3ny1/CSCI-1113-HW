#include<iostream>
using namespace std;

bool isLeapYear(int year)
{
	if (year%4 == 0)
	{
		return true;
	}
	else if (year%4 != 0)
	{
		return false;
	}
}

int main()
{
	int year;
	char con = 'y';
	while (con == 'y'||con == 'Y')
	{
		cout << "enter a year value: ";
		cin >> year;
		if (isLeapYear(year) == true)
		{
			cout << year << " is a leap year" << "\ncontinue? (y/n): ";
			cin >> con;
		}
		else if (isLeapYear(year) == false)
		{
			cout << year << " is not a leap year" << "\ncontinue? (y/n): ";
			cin >> con;
		}
	}
	return 0;
}
