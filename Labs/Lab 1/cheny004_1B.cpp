#include <iostream>
using namespace std;         
int main()        
	{
		double tc, tf;
		cout << "Input temperature in degrees Fahrenheit:";
        cin >> tf;
        tc = (tf - 32.0) * (5.0/9.0);
        cout << tf << "F=" << tc << "C";
        return 0;
            }


