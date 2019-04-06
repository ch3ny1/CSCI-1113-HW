// CSci 1113 HW 5
// Chenyi Wang 5513416
#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;

double leftHeight(double h[], int i);
double rightHeight(double h[], int i);
double waterHeight(double h[], int i);

int main()
{
	double h[10], strg, total;
	int i;
	cout << "Input 10 heights: ";
	for (i = 0; i < 10; i++){
		cin >> h[i];
		if (h[i] <= 0){
			cout << "Invalid heights!";
			exit(1);
		}
	}
	for (i = 0; i < 10; i++){
		//Add storage at this position to total 
		//if it is greater than 0 (can hold water).
		strg = max(0.0, (waterHeight(h, i) - h[i]));
		total += strg;	
	}
	cout << "Amount of water: " << total;
	return 0;
}

double leftHeight(double h[], int i){
	double left = 0, current = h[i];
	for (i; i >= 0; i--){
		if (h[i] > left)
			left = h[i];
		}
	if (left <= current)
		left = 0;
	return left;
}

double rightHeight(double h[], int i){
	double right = 0, current = h[i];
	for (i; i < 10; i++){
		if (h[i] > right)
			right = h[i];
		}
	if (right <= current)
		right = 0;
	return right;
}

double waterHeight(double h[], int i){
	return min(leftHeight(h, i), rightHeight(h, i));
}
	
