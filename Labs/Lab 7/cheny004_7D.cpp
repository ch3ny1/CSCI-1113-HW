// Lab 7 Workout_1
#include<string>
#include<iostream>
#include<fstream>
using namespace std;

string nextString(string str, int startIndex);
int split(string str, string a[], int maxSize);

int main()
{
	ifstream in;
	int len, i;
	string line;
	in.open("2.5_day.csv");
	getline(in, line);
	string value[line.length()];
	len = split(line, value, line.length());
	for (i = 0; i < len - 1; i++)
		cout << i << " " << value[i] << endl;
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
