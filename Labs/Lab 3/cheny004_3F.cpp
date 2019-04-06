#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter an integer value from 1 to 999: ";
	cin >> n;
	if (n<=0||n>999)
	{
		cout << "Invalid input. Program terminated.";
		return 0;
	}
	do
	{
		if (n>=1 && n<=3)
		{cout<<"I";
	     n -= 1; continue;}
		else if (n==4)
		{cout<<"IV";
		 n -= 4; continue;}
		else if (n>=5 && n<=8)
		{cout<<"V";
		 n -= 5; continue;}
		else if (n == 9)
		{cout<<"IX";
		 n -= 9; continue;}
		else if (n>=10 && n<=39)
		{cout<<"X";
		 n -=10; continue;}
		else if (n>=40 && n<= 49)
		{cout<<"XL";
		 n -= 40; continue;}
		else if (n>=50 && n<= 89)
		{cout<<"L";
		 n -= 50; continue;}
		else if (n>=90 && n<= 99)
		{cout<<"XC";
		 n -= 90; continue;}
		else if (n>=100 && n<= 399)
		{cout<<"C";
		 n -= 100; continue;}
		else if (n>=400 && n<= 499)
		{cout<<"CD";
		 n -= 400; continue;}
		else if (n>=500 && n<= 899)
		{cout<<"D";
		 n -= 500; continue;}
		else if (n>=900 && n<= 999)
		{cout<<"CM";
		 n -= 900; continue;}
	}while (n!= 0);
	return 0;
}
