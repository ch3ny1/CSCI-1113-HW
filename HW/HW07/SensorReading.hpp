// CSci 1113 HW7
// Chenyi Wang 5513416
// sensorReading Class Interface

#ifndef SENSORREADING_HPP
#define SENSORREADING_HPP
#include <iostream>
#include <iomanip>
using namespace std;

class sensorReading
{
public:
	sensorReading();
	sensorReading(int t, double pr, double wd, double ws);
	void getTime(int& hours, int& minutes, int& seconds);
	bool validate() const;
	void print() const;
	void adjustWindDirection(double change);
	void adjustTime(int change);
	void set(int t, double pr, double wd, double ws);
	void printCSV(ostream& out) const;
private:
	int time;
	double pressure, windDirection, windSpeed;
	int hours, minutes, seconds;
};

#endif
