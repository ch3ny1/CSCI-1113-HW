// Lab 8 Stretch Problem
// CSci 1113
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
  // Complete the function specification here.
}
