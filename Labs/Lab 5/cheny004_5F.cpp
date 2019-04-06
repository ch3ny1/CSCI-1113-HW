#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
using namespace std;

void minutesToTime(int minute_value, int& hours, int& mins);
void elapsedTime(int h1, int m1, int h2, int m2, int& h, int& m);
int timeToMinutes (int hours, int mins);

int main()
{
	ifstream in;
	string fileName, flight, flight_max, flight_min;
	int h, m, h1, h2, m1, m2, max = 0, min = 1440, count;
	int Del, TotalDel;
	char colon;
	
	cout << "Please enter the file name: ";
	cin >> fileName;
	in.open(fileName.c_str());
	if (in.fail()){
		cout << "Could not open " << fileName << endl;
		exit(1);
	}
	while (in >> flight){
		in >> h1 >> colon >> m1 >> h2 >> colon >> m2;
		Del = timeToMinutes(h2, m2) - timeToMinutes(h1, m1);
		if (Del > 0){
			count ++;
			TotalDel += Del;
			if (Del > max){
				flight_max = flight;
				max = Del;
			}
			if (Del < min){
				flight_min = flight;
				min = Del;
			}
			minutesToTime(Del, h, m);
			cout << "Flight " << flight << " delayed " << h << ":" << m <<endl;
		}
	}
	minutesToTime(TotalDel/count, h, m);
	cout << "The average flight delay is " << h << ":" << m << endl;
	minutesToTime(min, h, m);
	cout << "Flight " << flight_min << " delayed the minimum time of " 
		 << h << ":" << m << endl;
	minutesToTime(max, h, m);
	cout << "Flight " << flight_max << " delayed the maximum time of " 
		 << h << ":" << m << endl;
	in.close();
}

void minutesToTime(int minute_value, int& hours, int& mins)
{
	hours = minute_value / 60;
	mins = minute_value % 60;
}

void elapsedTime(int h1, int m1, int h2, int m2, int& h, int& m)
{
	m1 = m1 + h1 * 60;
	m2 = m2 + h2 * 60;
	h = abs((m1 - m2)/60);
	m = abs((m1 - m2)%60);
}

int timeToMinutes (int hours, int mins)
{
	return hours * 60 + mins;
}
