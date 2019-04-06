#include<iostream>

using namespace std;

int main()
{
	int f0 = 0, f1 = 1, f = 0, i;
	cout << "Please input i: ";
	cin >> i;
	if (i > 1)
	{
		for (i; i>1; i--)
		{
			f = f0 + f1;
			f0 = f1;
			f1 = f;
		}
	}
	else if (i == 1)
	{
		f = 1;
	}
	cout << "The number is " << f;
	return 0;
}
