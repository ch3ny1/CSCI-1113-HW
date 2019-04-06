// Lab 9 Stretch 2
// Chenyi Wang 5513416
// Complex Class Decleration

#ifndef COMPLEX_HPP
#define COMPLEX_HPP
#include <iostream>

using namespace std;

class Complex
{
public:
	Complex();
	void input(istream& in);
	void output(ostream& out);
	double getReal() const;
	double getImag() const;
	void setReal(double);
	void setImag(double);
private:
	double real, imag;
};

#endif
