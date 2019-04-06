// Lab 9 Stretch 2
// Chenyi Wang 5513416
// Complex Class Implementation

#include "Complex.hpp"

Complex::Complex():real(0), imag(0)
{}

void Complex::input(istream& in)
{
	in >> real >> imag;
}

void Complex::output(ostream& out)
{
	out << real << " + " << imag << "i" << endl;
}

double Complex::getReal() const
{
	return real;
}

double Complex::getImag() const
{
	return imag;
}

void Complex::setReal(double r)
{
	real = r;
}
	
void Complex::setImag(double i)
{
	imag = i;
}
