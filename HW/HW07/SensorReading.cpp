// CSci 1113 HW7
// Chenyi Wang 5513416
// sensorReading Class Inplementation

#include "SensorReading.hpp"

sensorReading::sensorReading(): time(0), pressure(0), windDirection(0), windSpeed(0)
{
	getTime(hours, minutes, seconds);
}

sensorReading::sensorReading(int t, double pr, double wd, double ws):
					time(t), pressure(pr), windDirection(wd), windSpeed(ws)
{
	if (time>=0&&time<86400)
		getTime(hours, minutes, seconds);
}

void sensorReading::getTime(int& hours, int& minutes, int& seconds)
{
	hours = time/3600;
	minutes = (time%3600)/60;
	seconds = time%60;
}

bool sensorReading::validate() const
{
	return (time>=0&&time<86400&&pressure>=0&&windDirection>=0
			&&windDirection<360&&windSpeed>=0);
}

void sensorReading::print() const
{
	if (time>=0&&time<86400){
		cout << "Time: " << hours;
		cout << ":" << setfill('0') << setw(2) << minutes;
		cout << ":" << setfill('0') << setw(2) << seconds << endl;
	}
	else
		cout << "Out of range" << endl;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	if (pressure>=0)
		cout << setprecision(1) << "Pressure: " << pressure << " Pa" << endl;
	else
		cout << "Out of range" << endl;
	if (windDirection>=0&&windDirection<360)
		cout << setprecision(1) << "Direction: " << windDirection << " Degrees" <<endl;
	else
		cout << "Out of range" << endl;
	if (windSpeed>=0)
		cout << setprecision(1) << "Speed: " << windSpeed << " m/s" <<endl;
	else
		cout << "Out of range" << endl;
}

void sensorReading::adjustWindDirection(double change)
{
	windDirection += change;
	while (windDirection < 0){
		windDirection += 360.0;
	}
	while (windDirection >= 360.0){
		windDirection -= 360.0;
	}
}

void sensorReading::adjustTime(int change)
{
	time += change;
	if (time>=0&&time<86400)
		getTime(hours, minutes, seconds);
}

void sensorReading::set(int t, double pr, double wd, double ws)
{
	time = t;
	pressure = pr;
	windDirection = wd;
	windSpeed = ws;
}
void sensorReading::printCSV(ostream& out) const
{
	out << time << "," << pressure << "," << windDirection << "," << windSpeed << endl;
}
