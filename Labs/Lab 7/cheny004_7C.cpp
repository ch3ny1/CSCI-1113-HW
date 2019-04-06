// Lab 7 Stretch_2
#include<string>
#include<iostream>
using namespace std;

string nextString(string str, int startIndex);
int split(string str, string a[], int maxSize);

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

int main()
{
	int size = 10;
	string str;
	string a[size];
	int cnt;
	cout << "Input a string:\n";
	getline(cin, str);
	cnt = split(str, a, str.length());
	for(int i=0; i<cnt; i++)
		cout << a[i] << endl;
	return 0;
}
