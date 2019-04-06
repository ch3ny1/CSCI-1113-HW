// CSci 1113 HW3
// Chenyi Wang 5513416

#include<iostream>
#include<cstdlib>
using namespace std;

char Capitalize(char x)
{
	if (x >= 97 && x <= 122){
		x = x - 32;}
	else if (x >= 65 && x <=90){}
	else {return 0;}
	return x;
}

int main() 
{
	string Upper, output;
	int i;
	char ch;
	//START DO NOT MODIFY
	int rotate;
	char mode;
	string message;
	cout << "Encrypt (e/E) or Decrypt (d/D)?\n";
	cin >> mode;
	cout << "What is the cipher rotation value?\n";
	cin >> rotate;
	cout << "What is the message?\n";
	cin.ignore();
	getline(cin, message);
	//END DO NOT MODIFY
	//BEGIN YOUR CODE HERE:
	if (rotate < 0||rotate > 25)
	{
		cout << "INVALID ROTATION... TERMINATING";
		exit(1);
	}
	if (mode == 'D'||mode =='d'){
		rotate = -rotate;
	}
	else if (mode != 'E'&&mode != 'e'){
		cout << "INVALID MODE... TERMINATING";
		exit(1);
	}
	for (i = 0; i < message.length(); i++){
		ch = message.at(i);
		if (Capitalize(ch) != 0){
			Upper += Capitalize(ch);
		}
	}
	for (i = 0; i < Upper.length(); i++){
		ch = Upper.at(i);
		if (ch + rotate > 90){
			ch = ch + rotate - 26;
		}
		else if (ch + rotate < 65){
			ch = ch + rotate + 26;
		}
		else{
			ch += rotate;
		}
		output += ch;
	}
	cout << "Translated Message: " << output;
	return 0;
}
