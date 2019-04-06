// Lab 7 Warm-up
#include<string>
#include<iostream>
using namespace std;

string str1; str2;
getline(cin, str1);

// a)
int i;
for (i=0; i < str1.length()-1; i++){
	cout << str1[i] << endl;
}

// b)
for (i=0; i < str1.length()-2; i++){
	str2[i] = str1[i];
}

// c)
str2 = str1.substr(0, str1.length());

// d)
str2 = str1.substr(0, str1.find("=")+1);

// e)
// Will return an empty string.

// f)
if (str1.find(",") != -1)
	cout << "the comma is at index: " << str1.find(",");
else
	cout << "no comma found";
