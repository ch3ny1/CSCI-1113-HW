#include<iostream>
using namespace std;

double power(double x, int pow)
{
	int i;
	for (i = 1; i < pow; i++)
	{
		x = x*x;
	}
	return x;
}

double rootN(double value, int root)
{
	double g_new, g_old, g_old_pow;
	bool ind = false;
	g_old = value/2.0;
	while (ind == false)
	{
		g_old_pow = power(g_old, (root-1));
		g_new = (1.0/root)*((root-1)*g_old + (value/g_old_pow));
		if (abs(g_new - g_old)/g_old < 0.01)
			{ind = 1;
				break;}
		g_old = g_new;
	}
	return g_new;
}
	

int main()
{
	int Root;
	double Value, result;
	char con = 'y';
	while (con == 'y'||con=='Y')
	{
		cout << "enter value and root: ";
		cin >> Value >> Root;
		result = rootN(Value, Root);
		cout << "the root is: " << result;
		cout << "\ncontinue? (y/n): ";
		cin >> con;
	}
	return 0;
}
