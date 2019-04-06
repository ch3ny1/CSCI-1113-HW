// CSci 1113 HW 2
// 5513416 Chenyi Wang 02/12/2019

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int tol, r, g, b;
	// This iter variable is later used to signal the end of the loop.
	bool iter = false;
	do
	{
		cout << "Input tolerance: ";
		cin >> tol;
		if (tol < 0)
		{
			cout << "Tolerance must be nonnegative.\n";
		}
	} while (tol < 0);
	
	do
	{
		cout << "Input red, green, and blue components: ";
		cin >> r >> g >> b;
		if (r<0||r>255)
		{
			cout << "All components must be between 0 and 255, inclusive.\n";
			iter = true;
		}
		else if (g<0||g>255)
		{
			cout << "All components must be between 0 and 255, inclusive.\n";
			iter = true;
		}
		else if (b<0||b>255)
		{
			cout << "All components must be between 0 and 255, inclusive.\n";
			iter = true;
		} 
	}while (iter == true);
		
	if (abs(r-g)>tol||abs(r-b)>tol||abs(g-b)>tol)
	{
		cout << "The color is not a near gray.";
	}
	else
	{
		cout << "The color is a near gray. ";
		if (r>g)
		{
			if (r>b)
			{
				cout << "The red component is largest.";
			}
			else if (r<b)
			{
				cout << "The blue component is largest.";
			}
			else
			{
				cout << "The red and blue components are largest.";
			}
		}
		else if (r<g)
		{
			if (g>b)
			{
				cout << "The green component is largest.";
			}
			else if (g<b)
			{
				cout << "The blue component is largest.";
			}
			else
			{
				cout << "The green and blue components are largest.";
			}
		}
		else if (r == g)
		{
			if (r>b)
			{
				cout << "The red and green components are largest.";
			}
			else if (r<b)
			{
				cout << "The blue component is largest.";
			}
			else
			{
				cout << "All components are equal.";
			}
		}		
	}
	return 0;
}
