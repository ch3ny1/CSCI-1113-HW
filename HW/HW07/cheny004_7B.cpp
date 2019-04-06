// CSci 1113 HW7
// Chenyi Wang 5513416
// Problem B main

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "SensorReading.hpp"

using namespace std;

int main()
{
	ifstream in;
	ofstream out;
	string name;
	int t, i;
	double pr, wd, ws;
	sensorReading sr[10];
	for (i = 0; i < 10; i++)
		sr[i] = sensorReading();
	cout << "Input file: ";
	cin >> name;
	in.open(name.c_str());
	if (in.fail()){
		cout << "Unable to open file" << endl;
		exit(1);
	}
	i = 0;
	while (in >> t){
		in >> pr >> wd >> ws;
		sr[i].set(t, pr, wd, ws);
		i++;
	}
	in.close();
	cout << "Output file: ";
	cin >> name;
	out.open(name.c_str());
	if (out.fail()){
		cout << "Unable to open file" << endl;
		exit(1);
	}
	int j, valid = 0;
	for (j = 0; j < i; j++){
		sr[j].adjustTime(-24);
		if (sr[j].validate() == true){
			valid++;
			sr[j].printCSV(out);
		}
	}
	cout << "Number of invalid readings: " << i-valid << endl;
	cout << "Number of readings written to output file: " << valid << endl;
	out.close();
	return 0;
}
