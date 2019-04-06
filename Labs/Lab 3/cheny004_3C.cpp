#include<iomanip>
#include<iostream>
using namespace std;

int main()
{
	int m, n = 1, out = 1;
	for (m = 1; m <= 10; m++)
	{
		for (n = 1; n <= 10; n++)
		{
			out = m * n;
			cout << setw(4) << out;
		}
		cout << endl;
	}
	return 0;
}
