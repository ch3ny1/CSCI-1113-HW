// CSci 1113 HW 6
// Chenyi Wang 5513416
#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;

ifstream in;
ofstream out;

void input();
void output();
string trans(string word, bool capital, int len);
char lower(char x);
string change(string str);

int main(){
	input();
	output();
	in.close();
	out.close();
	return 0;
}

void input(){
	in.open("input.txt");
	if (in.fail()){
		cout << "Unable to open file";
		exit(1);
	}
}

void output(){
	string line;
	out.open("output.txt");
	while (getline(in, line)){
		line = change(line);
		out << line << endl;
	}
}

string nextWord(string str, int startIndex, int& len, int& nextIndex){
	len = 0;
	while (str.at(nextIndex) != ' '&& str.at(nextIndex) != '.'&& 
		   str.at(nextIndex) != '!'&& str.at(nextIndex) != '?'&& 
		   str.at(nextIndex) != ';' && str.at(nextIndex) != ','){
			   len++;
			   nextIndex++;
		   }
	while ((str.at(nextIndex) < 65)||(str.at(nextIndex) > 90 &&
			str.at(nextIndex) < 97)||(str.at(nextIndex) > 122)){
				nextIndex++;
				if (nextIndex >= str.length())
					break;
			}
	return str.substr(startIndex, len);
}

string change(string str){
	int startIndex = 0, len = 0, nextIndex = 0;
	string word, line;
	bool capital = false;
	while (startIndex < str.length()){
		if (startIndex < nextIndex){
			line += str.at(startIndex);
			startIndex++;
		}
		else {
			word = nextWord(str, startIndex, len, nextIndex);
			if (word.at(0) >= 65 && word.at(0) <= 90)
				capital = true;
			word = trans(word, capital, len);
			line += word;
			startIndex += len;
			capital = false;
		}
	}
	return line;
}

string trans(string word, bool capital, int len){
	if (word.at(0) != 'a'&& word.at(0) != 'e'&& word.at(0) != 'i'&& 
		word.at(0) != 'o'&& word.at(0) != 'u'&& word.at(0) != 'y'&& 
		word.at(0) != 'A'&& word.at(0) != 'E'&& word.at(0) != 'I'&& 
		word.at(0) != 'O'&& word.at(0) != 'U'&& word.at(0) != 'Y'){
			if (word.at(1) == 'a'|| word.at(1) == 'e'|| word.at(1) == 'i'|| 
				word.at(1) == 'o'|| word.at(1) == 'u'|| word.at(1) == 'y'|| 
				word.at(1) == 'A'|| word.at(1) == 'E'|| word.at(1) == 'I'|| 
				word.at(1) == 'O'|| word.at(1) == 'U'|| word.at(1) == 'Y'){
					word = word + lower(word.at(0));
					word = word.substr(1, len) + "oi";
				}
			else if (len >= 2) {
				 word = word + lower(word.at(0)) + word.at(1);
				 word = word.substr(2, len) + "ah";
				}
			if (capital == true)
				word.at(0) -= 32;
			}
	else
		word += "eeh";	
	
	return word;
}
	
		
char lower(char x){
	if (x >= 65 && x <=90)
		x = x + 32;
	return x;
}
