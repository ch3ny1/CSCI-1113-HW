// Chenyi Wang
// Lab 8 Stretch 1
#include<iostream>
using namespace std;

double f(double x);

double derivEst(double x, double h, double n);

int main()
{
  char ch = 'y';
  double x, h, n;
  while (ch == 'y' || ch == 'Y'){
    cout << "Input x, h, n: ";
    cin >> x >> h >> n;
    cout << "nth derivative estimate: " << derivEst(x,h,n) << endl;
    cout << "\nContinue (y/n)? ";
    cin >> ch;
  }
  return 0;
}

double f(double x){
  return x * x * x;
}

double derivEst(double x, double h, double n){
	if (n == 0)
		return f(x);
	else
		return (derivEst(x+h, h, n-1) - derivEst(x, h, n-1))/h;
}
