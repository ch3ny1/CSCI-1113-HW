// CSci 1113 HW 2
// 5513416 Chenyi Wang 02/12/2019

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int hours, minutes, breakH, breakM;
    //Calculate if it is required to flip the ampm.
    bool flip = false;
    char ampm;
    cout << "Input the current time as hours minutes and A (for am) or P (for pm) ";
    cin >> hours >> minutes >> ampm;

	//Check if the initial hour is 12 to make the later flipping correct.
	if (hours == 12)
	{
		flip = !flip;
	}

    cout << "Input the break time as hours minutes ";
    cin >> breakH >> breakM;

    minutes = minutes + breakM;
    hours = hours + breakH % 24 + minutes/60;
    minutes = minutes % 60;
    
    //Calculate whether we need to flip the ampm.
    if (hours >= 12)
    {
		if ((hours/12)%2 != 0)
		{
			flip = !flip;
		}
	}
	
	if (hours > 12)
	{
		hours -= 12;
	}
	
		cout << "Break is done at ";
		cout << hours << ":";
   
    // Note, the following syntax works with the iomanip include above.
    // This has the effect of forcing the computer to print 2 digits (I.E. 06 instead of 6)
    // The following line is bug-free.
    cout << setfill('0') << setw(2) << minutes;
    
    // Output the correct ampm according the flip.
    if (flip == true)
    {
		if (ampm == 'P')
		{
			cout << "AM";
		}
		else
		{
			cout << "PM";
		}
    }
    else
    {
        if (ampm == 'P')
		{
			cout << "PM";
		}
		else
		{
			cout << "AM";
		}
    }
    cout << endl;
    return 0;
}
