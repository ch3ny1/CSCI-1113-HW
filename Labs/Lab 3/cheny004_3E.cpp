#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	double temp, temp_sur, k, time_step, len, count = 0.0;
	cout << "Enter the initial temperature: ";
	cin >> temp;
	cout << "Enter the temperature of the surroundings: ";
	cin >> temp_sur;
	cout << "Enter the growth (decay) rate: ";
	cin >> k;
	cout << "Enter the time step in hours: ";
	cin >> time_step;
	cout << "Enter the simulation length in hours: ";
	cin >> len;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(6);
	while (count <= len)
	{
		temp = temp + k*(temp_sur-temp)*time_step;
		count += time_step;
		cout << count << setw(12) << temp << endl;
	}
	return 0;
}
