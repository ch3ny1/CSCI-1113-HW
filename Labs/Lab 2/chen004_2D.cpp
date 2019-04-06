#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double timePerWeek, GrandTotal, SST, FIT, SIT, UD, HI=0, TakeHomePay;
	int deps;
	cout << "Please enter your number of hours worked in a week: ";
	cin >> timePerWeek;
	cout << "Please enter your number of dependents: ";
	cin >> deps;
	if (timePerWeek > 40.0)
	{
		GrandTotal = 40.0*16.78 + (timePerWeek - 40.0)*16.78*1.5;
	}
	else
	{
		GrandTotal = timePerWeek*16.78;
	}
	SST = GrandTotal*0.06;
	FIT = GrandTotal*0.14;
	SIT = GrandTotal*0.05;
	UD = 10;
	if (deps > 2)
	{
		HI = 35;
	}
	TakeHomePay = GrandTotal - SST - FIT - SIT - UD - HI;
	cout << "Your total pay is: " << GrandTotal;
	cout << "\nYour social security tax, federal income tax, state income tax, \nunion dues and additional cost of health insurance are:\n";
	cout << GrandTotal <<" "<< SST<<" "<<FIT<<" "<<SIT<<" "<<UD<<" "<<HI << " dollars.";
	cout << "\nYour final take home money is: \n" << TakeHomePay;
	return 0;
}
