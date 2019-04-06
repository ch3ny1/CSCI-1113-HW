#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	double g_old, g_new = 0;
	bool ind = 0;
	cout << "Please input a positive integer value: ";
	cin >> n;
	if (n < 0)
	{
		cout << "Invalid input.";
		return 0;
	}
	g_old = n/2.0;
	while (ind == 0)
	{
		g_new = (g_old + (n/g_old))/2;
		if (abs(g_new - g_old)/g_old < 0.01)
			{ind = 1;
				break;}
		cout << g_new << endl;
		g_old = g_new;
	}
	cout << "The Babylonian guess is: " << g_new << endl;
	cout << "The more accurate value is: " << sqrt(n);
	return 0;
}
