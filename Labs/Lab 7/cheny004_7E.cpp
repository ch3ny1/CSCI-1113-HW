// Lab 7 Workout_2
#include<string>
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

string nextString(string str, int startIndex);
int split(string str, string a[], int maxSize);

int main()
{
	ifstream in;
	string line;
	in.open("2.5_day.csv");
	getline(in, line);
	string value[line.length()];
	while (getline(in, line)){
		split(line, value, line.length());
		if (value[14] == "earthquake")
			value[14] = value[13].substr(1);
		cout << left << setw(5) << value[4] << left << setw(15) 
		<< value[14].substr(0, value[14].length()-1) << endl;
	}
	in.close();
	return 0;
}

string nextString(string str, int startIndex)
{
	return str.substr(startIndex, str.find(",", startIndex)-startIndex);
}

int split(string str, string a[], int maxSize)
{
	int i = 0, startIndex = 0;
	while (startIndex < maxSize -1){
		a[i] = nextString(str, startIndex);
		startIndex = startIndex + a[i].length() + 1;
		i ++;
	}
	return i+1;
}
