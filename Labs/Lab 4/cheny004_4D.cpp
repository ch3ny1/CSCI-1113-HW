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

void nextDay(int &m, int &d, int &y)
{
	int lastday;
	lastday = lastDay(m, y);
	if (d+1 > lastday)
	{
		if (m+1 > 12)
		{
			y++;
			m = 1;
			d = 1;
		}
		else
		{
			m++;
			d = 1;
		}
	}
	else {d++;}
}

int main()
{
	int Month, Year, Day;
	char con = 'y';
	while (con == 'y'||con=='Y')
	{
		cout << "enter a date as mm dd yyyy: ";
		cin >> Month >> Day >> Year;
		nextDay(Month, Day, Year);
		cout << "next day is: " << Month << " " << Day << " " << Year;
		cout << "\ncontinue? (y/n): ";
		cin >> con;
	}
	return 0;
}
