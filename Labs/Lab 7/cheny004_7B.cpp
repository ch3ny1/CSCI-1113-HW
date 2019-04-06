// Lab 7 Stretch_1
#include<string>
#include<iostream>
using namespace std;

string nextString(string str, int startIndex)
{
	return str.substr(startIndex, str.find(",", startIndex)-startIndex);
}

int main()
{
	string str;
	int index;
	cout << "Input a string:\n";
	getline(cin, str);
	cout << "What is the start index?\n";
	cin >> index;
	cout << nextString(str, index);
	return 0;
}
	
