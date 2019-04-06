#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double temp_1, temp_2;
	char unit, unit_1;
	cout << "Enter the temperature: ";
	cin >> temp_1;
	cout << "Enter Celsius (c) or Fahrenheit (f): ";
	cin >> unit;
	if (unit == 'c')
	{
		temp_2 = (temp_1 * (9.0/5.0) + 32.0);
		cout << "The temperature in Fahrenheit is " << temp_2;
	}
	else if (unit == 'f')
	{
		temp_2 = (temp_1 - 32.0) * (5.0/9.0);
		cout << "The temperature in Celsius is " << temp_2;
	}
	return 0;
}
