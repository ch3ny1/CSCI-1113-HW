#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double L, v, c = 3.0e10, LR;
	cout << "Please input values of L and v (in cm):";
	cin >> L >> v;
	LR = L*sqrt((1.0-(pow(v,2.0)/pow(c,2.0))));
	cout << "The LR is:" << LR << "cm";
	return 0;
}
