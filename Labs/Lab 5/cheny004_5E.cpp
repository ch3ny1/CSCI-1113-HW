#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int main()
{
	ofstream Out;
	string number, sch, act;
	bool con = true;
	
	Out.open("flightData.dat");
	if (Out.fail()){
		cout << "Could not open " << endl;
		exit(1);
	}
	
	while (con == true)
	{
		cout << "Enter the flight number: ";
		cin >> number;
		if (number == "end")
			break;
		cout << "Enter the scheduled/actual arrival times: ";
		cin >> sch >> act;
		Out << number << " " << sch << " " << act << endl;
	}
	Out.close();
	
	return 0;
}
