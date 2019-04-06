// CSci 1113 HW 0
// Chenyi Wang
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x, y, z, r, theta, phi;
	cout << "Input Cartesian coordinates x, y, z: ";
	cin >> x >> y >> z;
	r = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	theta = atan2(y,x)*180.0/M_PI;
	phi = acos(z/r)*180.0/M_PI;
	cout << "Spherical coordinates: (" << r << ", " <<
	theta << ", " << phi << ")";
	return 0;
}
