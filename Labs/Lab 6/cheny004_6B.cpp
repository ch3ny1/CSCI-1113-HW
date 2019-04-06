//lab 6_Stretch
#include<iostream>
using namespace std;

void bsort(int array[], int len);
void swap(int *i, int *j);

int main()
{
	int list[50];
	int i, j, val = 100;
	for (i = 0; i < 50; i++){
		list[i] = val;
		val--;
	}
	bsort(list, 50);
	for (i = 0; i < 50; i){
		for (j = 0; j < 5; j++){
			cout << list[i] << " ";
			i++;
		}
		cout << endl;
	}
	return 0;
}

void swap(int *i, int *j)
{
	int temp;
	temp = *i;
	*i = *j;
	*j = temp;
}

void bsort(int array[], int len)
{
	int i, j;
	for (i = 0; i < len-1; i++){
		for (j = 0; j < len-i-1; j++){
				if (array[j] > array[j+1]){
					swap(&array[j], &array[j+1]);
				}
		}
	}
}
