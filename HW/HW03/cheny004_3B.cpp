// CSci 1113 HW3
// Chenyi Wang 5513416
#include<iostream>

using namespace std;
int main()
{
	string bp;
	int posts, interval, min_d, distance = 0, p, f, S = 0;
	cout << "How many posts do you want to use?\n";
	cin >> posts;
	cout << "How many feet between posts?\n";
	cin >> interval;
	cout << "What is the minimum distance between signs (in feet)?\n";
	cin >> min_d;
	for (p = 1; p <= posts; p++){
		bp += '|';
		if (bp.length() != ((interval + 1)*(posts - 1) + 1)){
			for (f = 1; f <= interval; f++){
				if (f == 1||f == interval){
					bp += '-';
					distance++;
				}
				else if (distance >= min_d){
					bp += 'S';
					S++;
					distance = 0;
				}
				else {
					bp += '-';
					distance++;
				}
			}
		}
	}
	cout << bp << endl;
	cout << "Total Signs: " << S;
	return 0;
}
				
				
