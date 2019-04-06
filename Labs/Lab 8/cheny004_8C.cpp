// Chenyi Wang
// Lab 8 Warm-up 3

a)
	When the start index equals to the size-1.
	return max;
	
b)
	If the integer at the start position is bigger than the max,
	max = vals[start];
	call maxValue(int vals[], int size, int start+1);
	
c)
	Compare the current value to the maximum up till now, then move to the next position.

d)
	int max = vals[0];
	int maxValue(int vals[], int size, int start){
		if (start == size-1)
				return max;
		else{
			if (max <= vals[start])
				max = vals[start];
			maxValue(vals, size, start+1);
		}
	}

// Chenyi Wang
// Warm-up 3 Workout 2
#include<iostream>
using namespace std;

int maxValue(int vals[], int size, int start){
	if (start == size-1)
		return vals[start];
	else if (vals[start] >= maxValue(vals, size, start+1))
		return vals[start];
	else
		return maxValue(vals, size, start+1);
}


int main()
{
  char ch = 'y';
  int a[3];
  a[0] = 1;
  a[1] = 5;
  a[2] = 3;
  while (ch == 'y' || ch == 'Y'){
    cout << maxValue(a, 3, 0) << endl;
    cout << "\nContinue (y/n)? ";
    cin >> ch;
  }
  return 0;
}
