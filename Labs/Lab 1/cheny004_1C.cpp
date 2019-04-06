#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	char type;
	cout << "Are input components int of float (i/f)?  ";
	cin >> type;
	
	if (type == 'i')
	{
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		double r, g, b;
		cout << "Input r, g, b: ";
		cin >> r >> g >> b;
		r = r/255.0;
		g = g/255.0;
		b = b/255.0;
		cout << "Integer representation: " << r << ", " 
		<< g << ", " << b;
		}
	else if (type == 'f')
	{
		float r, g, b;
		cout << "Input r, g, b: ";
		cin >> r >> g >> b;
		r = round(r*255);
		g = round(g*255);
		b = round(b*255);
		cout << "Float representation: " << r << ", " 
		<< g << ", " << b;
		}
	else
	{
		cout << "Invalid option.";
		}
	return 0;
}
	
	
