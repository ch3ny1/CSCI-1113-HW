#include<iostream>

using namespace std;

int main()
{
	char gender;
	double weight, height, age, nOfC, BMR;
	cout << "Please enter your gender (M for male, F for female):";
	cin >> gender;
	cout << "Please enter your weight (pounds), height (inch), and age (year):\n";
	cin >> weight >> height >> age;
	if (gender == 'M')
	{
		BMR = 66 + (6.3*weight) + (12.9*height) - (6.8*age);
	}
	else if (gender == 'F')
	{
		BMR = 655 + (4.3*weight) + (4.7*height) - (4.7*age);
	}
	nOfC = (BMR/230.0);
	cout << "You should eat " << nOfC << " chocolate bar(s) a day!";
	return 0;
}
