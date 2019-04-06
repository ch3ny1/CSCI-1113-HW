// CSci 1113 HW 1
// 5513416 Chenyi Wang 02/04/2019
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	char unit;
	float d, h, m, s, totalMin, m1,s1;
	cout << "Is distance in kilometers (k) or miles (m)? ";
	cin >> unit;
	if (unit != 'k'&& unit!='m')
	{
		cout << "Invalid distance option";
		return 0;
	}
	cout << "Input distance: ";
	cin >> d;
	cout << "\nInput target time in hours, minutes, and seconds.\n";
	cout << "Hours: ";
	cin >> h;
	cout << "Minutes: ";
	cin >> m;
	cout << "Seconds: ";
	cin >> s;
	totalMin = (s/60) + m + 60*h;
	if (unit == 'k')
	{ 
		d = 0.62137119 * d;
	}
	m1 = floor(totalMin/d);
	s1 = (totalMin/d-m1)*60.0;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "The average time per mile is " << m1 << " minutes " << s1 << " seconds";
	return 0;
}
