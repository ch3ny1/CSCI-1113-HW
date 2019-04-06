// CSci 1113 HW6
// Chenyi Wang 5513416
#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>
using namespace std;

void input(int& size);
int findOverlap(string s1, string s2);
void order(int i);
void display();

ifstream in;
int size = 0;
string lines[30];

int main()
{
	input(size);
	order(0);
	display();
	return 0;
}

void input(int& size){
	string name;
	cout << "Input filename: ";
	cin >> name;
	in.open(name.c_str());
	if (in.fail()){
		cout << "Unable to open file";
		exit(1);
	}
	string line;
	while (getline(in, line)){
		lines[size] = line;
		size++;
	}
	in.close();
} 

int findOverlap(string s1, string s2){
	int lap = 0;
	int len = 0;
	while (len <= s1.length() && len <= s2.length()){
		if (s1.substr(s1.length()-len, len) == s2.substr(0, len))
			lap = len;
		len++;
	}
	return lap;
}

void order(int i){
	if (i >= size-1)
		return;
	else{
		int max = 0;
		int lap = 0;
		int maxInd;
		for (int j = size-1; j > i; j--){
			lap = findOverlap(lines[i], lines[j]);
			if (lap >= max){
				max = lap;
				maxInd = j;
			}
		}
		string temp = lines[i+1];
		lines[i+1] = lines[maxInd];
		lines[maxInd] = temp;
		order(i+1);
	}
}
	
	
	
void display(){
	for (int i = 0; i < size; i++){
		cout << lines[i] << endl;
	}
}
		
				
		
		
