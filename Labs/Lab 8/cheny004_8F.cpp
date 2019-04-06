// Chenyi Wang
// Lab 8 Workout 2
#include<iostream>
using namespace std;

int GCD(int a, int b);

int main()
{
  char ch = 'y';
  double a, b;
  while (ch == 'y' || ch == 'Y'){
    cout << "Input a, b: ";
    cin >> a >> b;
    cout << "The GCD between a and b is: " << GCD(a, b) << endl;
    cout << "\nContinue (y/n)? ";
    cin >> ch;
  }
  return 0;
}

int GCD(int a, int b){
	if (b == 0)
		return a;
	else{
		return GCD(b, a%b);
	}
}
