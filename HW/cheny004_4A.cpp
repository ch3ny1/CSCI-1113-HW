// CSci 1113 HW 4
// Chenyi Wang 5513416

#include<iostream>
#include<cmath>
using namespace std;

double arctanApprox(double x, double Tol);

int main()
{
	double tol, pi;
	char con = 'y';
	while (con == 'y' || con == 'Y')
	{
		cout << "Input tolerance: ";
		cin >> tol;
		while (tol <= 0){
			cout << "Tolerance must be positive. Input tolerance: ";
			cin >> tol;
		}
		pi = 16.0 * arctanApprox(1.0/5.0, tol/20.0) - 4 * arctanApprox(1.0/239.0, tol/20.0);
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(13);
		cout << "Pi approximation: " << pi << endl;
		cout << "Do you wish to approximate pi again? ";
		cin >> con;
	}
	return 0;
}

double arctanApprox(double x, double Tol)
{
	double approx1 = 0, approx2 = 0, i = 1.0;
	approx2 = approx2 + (pow(-1.0, ((i+1.0)/2.0 + 1.0)) * pow(x, i)/i);
	do {
		i += 2;
		approx1 = approx2;
		approx2 = approx2 + pow(-1.0, (i+1.0)/2.0 + 1.0) * pow(x, i)/i;
	} while (abs(approx2 - approx1) > Tol);
	return approx2;
}

	
