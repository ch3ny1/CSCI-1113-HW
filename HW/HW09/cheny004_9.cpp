// CSci 1113 HW09
// Chenyi Wang 5513416

#include "SensorReading.hpp"
#include<string>
#include<iostream>
#include<fstream>

using namespace std;

int size(ifstream& fin);
void readingLog(SensorReading* SR);
void deltaLog(SensorReading *SR);

int main()
{
  ifstream fin;
  ofstream fout;
  string fileName;
  int size, i=1;
  double oldt, t, pr, wd, ws;
  cout << "Input file name: ";
  cin >> fileName;
  fin.open(fileName.c_string());
  size = size(fin);
  SensorReading *SR;
  SR = new SensorReading[size];
  fin.close();
  fin.open(fileName.c_string());
  fin >> oldt >> pr >> wd >> ws;
  SR[0].set(oldt, pr, wd, ws);
  while (fin >> t >> pr >> wd >> ws){
    if (t > oldt)
      SR[i].set(t, pr, wd, ws);
    i++;
    }
  fin.close()
  readingLog(SR);
  deltaLog(SR);
  delete [] SR;
  return 0;
}
  
  
