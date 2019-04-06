// CSci 1113 HW 4
// Chenyi Wang 5513416

#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

void printResult(int win1, int win2, string team1, string team2);
void count(string team1, string team2, string com1, string com2,
		   int score1, int score2, int& win1, int& win2);

int main()
{
	string team1, team2, com1, com2;
	int score1, score2, win1, win2, season;
	ifstream fin;
	cout << "Please input the two teams you are interested in: ";
	cin >> com1 >> com2;
	fin.open("sports.dat");
	if (fin.fail()){
		cout << "Could not open sports.dat";
		exit(1);
	}
	while (fin >> season){
		fin >> team1 >> team2
			>> score1 >> score2;
		count(team1, team2, com1, com2, score1, score2, win1, win2);
		}
	printResult(win1, win2, com1, com2);
	fin.close();
	return 0;
}

void count(string team1, string team2, string com1, string com2,
		   int score1, int score2, int& win1, int& win2)
{
	if (team1 == com1 && team2 == com2){
		if (score1 > score2)
			win1 ++;
		else
			win2 ++;
		}
	else if (team1 == com2 && team2 == com1){
		if (score1 > score2)
			win2 ++;
		else
			win1 ++;
		}
}


void printResult(int win1, int win2, string team1, string team2)
{
	cout << "The " << team1 << " and " << team2
		 << " played " << win1+win2 << " times.\n";
	cout << "The " << team1 << " won " << win1 << " times.\n";
	cout << "The " << team2 << " won " << win2 << " times.\n";
	if (win1 > win2)
		cout << "The " << team1 << " are the better team!";
	else if (win2 > win1)
		cout << "The " << team2 << " are the better team!";
	else
		cout << "The teams are equally matched!";
}
