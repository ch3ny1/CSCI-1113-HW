#include<iostream>

using namespace std;

int main()
{
	int m, d, y;
	char slash;
	cout << "Enter a date in mm/dd/yyyy format: ";
	cin >> m >> slash >> d >> slash >> y;
	cout << "Year, month, day: " << y << "," << m << "," << d;
	return 0;
}
