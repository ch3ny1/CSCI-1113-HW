// CSci 1113 HW 1
// 5513416 Chenyi Wang 02/04/2019
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int r, g, b;
	char action;
	cout << "Input r, g, b: ";
	cin >> r >> g >> b;
	cout << "Options:\nEnhance contrast (E)\nDecrease contrast (D)\nEnter E or D: ";
	cin >> action;
	if (action == 'E')
	{
		r = round(127.5*sin((r/255.0 - 0.5)*M_PI) + 127.5);
		g = round(127.5*sin((g/255.0 - 0.5)*M_PI) + 127.5);
		b = round(127.5*sin((b/255.0 - 0.5)*M_PI) + 127.5);
		cout<<"("<<r<<", "<<g<<", "<<b<<")";
	}
	else if (action == 'D')
	{
		r = round(255.0*((1/M_PI)*asin((r-127.5)/127.5)+0.5));
		g = round(255.0*((1/M_PI)*asin((g-127.5)/127.5)+0.5));
		b = round(255.0*((1/M_PI)*asin((b-127.5)/127.5)+0.5));
		cout<<"("<<r<<", "<<g<<", "<<b<<")";
	}
	else
	{
		cout << "Invalid option";
	}
	return 0;
}
