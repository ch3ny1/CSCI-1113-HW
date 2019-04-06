#include<iostream>
using namespace std;

double babylonianRoot (double n)
{
	double g_new, g_old;
	bool ind = false;
	g_old = n/2.0;
	while (ind == false)
	{
		g_new = (g_old + (n/g_old))/2;
		if (abs(g_new - g_old)/g_old < 0.01)
			{ind = 1;
				break;}
		g_old = g_new;
	}
	return g_new;
}


int main()
{
	char con = 'y';
	while (con == 'y'||con == 'Y')
	{
		double n;
		cout << "enter a value: ";
		cin >> n;
		cout << "square root of " << n << " is " << babylonianRoot(n);
		cout << "\ncontinue? (y/n): ";
		cin >> con;
	}
	return 0;
}
