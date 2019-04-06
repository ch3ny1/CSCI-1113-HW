// Lab 9 Stretch 2
// Chenyi Wang 5513416

#include "Complex.hpp"

using namespace std;

int main()
{
	Complex c1, c2;
	double r, i;
	cout << "Enter values for real and imaginary coefficients: ";
	cin >> r >> i;
	c1.setReal(r);
	c1.setImag(i);
	cout << "Enter values for real and imaginary coefficients: ";
	cin >> r >> i;
	c2.setReal(r);
	c2.setImag(i);
	c1.output(cout);
	c2.output(cout);
	cout << "Enter a new value for the real coefficient: ";
	cin >> r;
	cout << "The new real coefficient is " << r << endl;
	c2.setReal(r);
	c2.output(cout);
	return 0;
}
