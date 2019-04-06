// CSci 1113 HW 4
// Chenyi Wang 5513416

#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstdlib>
using namespace std;

double vectorLength(double u, double v, double w);
void vectorNormalize(double& u, double& v, double& w);
void interpolateVectors(double a, double u1, double v1, double w1,
double u2, double v2, double w2, double& u, double& v, double& w);

int main()
{
	double u, v, w, u1, v1, w1, u2, v2, w2, a = 0, step;
	int n;
	cout << "Input the first vector u1 v1 w1: ";
	cin >> u1 >> v1 >> w1;
	cout << "Input the second vector u2 v2 w2: ";
	cin >> u2 >> v2 >> w2;
	if ((u1 == 0 && v1 == 0 && w1 == 0)||
		(u2 == 0 && v2 == 0 && w2 ==0)){
		cout << "Vectors must be non-zero.";
		exit(1);
	}
	vectorNormalize(u1, v1, w1);
	vectorNormalize(u2, v2, w2);
	cout << "Enter the number of interpolation vectors to compute: ";
	cin >> n;
	step = 1.0/(n - 1);
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);
	for (n; n > 0; n--){
		interpolateVectors(a, u1, v1, w1, u2, v2, w2, u, v, w);
		cout << setw(8) << u
			 << setw(8) << v
			 << setw(8) << w << endl;
		a += step;
	}
	return 0;
}

double vectorLength(double u, double v, double w)
{
	return pow((u * u + v * v + w * w), 0.5);
}

void vectorNormalize(double& u, double& v, double& w)
{
	double len;
	len = vectorLength(u, v, w);
	u /= len;
	v /= len;
	w /= len;
}

void interpolateVectors(double a, double u1, double v1, double w1,
double u2, double v2, double w2, double& u, double& v, double& w)
{
	u = (1 - a) * u1 + a * u2;
	v = (1 - a) * v1 + a * v2;
	w = (1 - a) * w1 + a * w2;
	vectorNormalize(u, v, w);
}
