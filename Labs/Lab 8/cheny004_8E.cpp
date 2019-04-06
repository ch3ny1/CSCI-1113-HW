// Chenyi Wang
// Lab 8 Workout 1
#include<iostream>
using namespace std;
int choose(int n, int k);

int main()
{
  char ch = 'y';
  double n, k;
  while (ch == 'y' || ch == 'Y'){
    cout << "Input n, k: ";
    cin >> n >> k;
    cout << "The n choose k value is: " << choose(n, k) << endl;
    cout << "\nContinue (y/n)? ";
    cin >> ch;
  }
  return 0;
}

int choose(int n, int k){
	if (k == 0||k == n)
		return 1;
	else
		return choose(n-1, k-1) + choose(n-1, k);
	}
