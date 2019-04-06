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

int lastDay(int month, int year)
{
	int day;
	if (month == 2)
	{
		if (isLeapYear(year) == true)
		{
			day = 29;
		}
		else {day = 28;}
	}
	else if (month <= 8)
	{
		if ((month%8)%2 == 0)
		{
			day = 30;
		}
		else {day = 31;}
	}
	else if (month%2 == 0)
	{
		day = 31;
	}
	else {day = 30;}
	if (month < 1||month >12)
	{
		day = 0;
	}
	return day;
}

int main()
{
	int Month, Year, Day;
	char con = 'y';
	while (con == 'y'||con=='Y')
	{
		cout << "enter month and year: ";
		cin >> Month >> Year;
		Day = lastDay(Month, Year);
		cout << "days in month: "<< Day;
		cout << "\ncontinue? (y/n): ";
		cin >> con;
	}
	return 0;
}
