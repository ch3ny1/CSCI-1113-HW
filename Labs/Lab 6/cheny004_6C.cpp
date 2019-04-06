//lab 6_Workout 1
#include<iostream>
#include<iomanip>
using namespace std;

const int NROWS = 5;
const int NCOLS = 5;

void input(double old[NROWS][NCOLS]);
void display(double temp[][NCOLS]);
void stablize(double temp[][NCOLS], double tol);

int main()
{
	double temp[NROWS][NCOLS];
	double tol;
	input(temp);
	cout << "Initial grid" << endl;
	display(temp);
	cout << "Please enter the tolerance: ";
	cin >> tol;
	stablize(temp, tol);
	cout << "Stablized grid" << endl;
	display(temp);
	return 0;
}

void display(double temp[][NCOLS])
{
	int i, j;
	for (i = 0; i < NROWS; i++){
		for (j = 0; j < NCOLS; j++){
			cout << setw(5) << temp[i][j] << "  ";
		}
		cout << endl;
	}
}

void input(double old[][NCOLS])
{
	using namespace std;
	int i = 0, j = 0;
	double temp;
	cout << "Please enter the edge temperatures for the top: ";
	cin >> temp;
	for (j = 0; j < NCOLS; j++){
		old[0][j] = temp;
	}
	cout << "Please enter the edge temperatures for the bottom: ";
	cin >> temp;
	for (j = 0; j < NCOLS; j++){
		old[NROWS-1][j] = temp;
	}
	cout << "Please enter the edge temperatures for the left: ";
	cin >> temp;
	for (i = 1; i < NROWS-1; i++){
		old[i][0] = temp;
	}
	cout << "Please enter the edge temperatures for the right: ";
	cin >> temp;
	for (i = 1; i < NROWS-1; i++){
		old[i][NCOLS-1] = temp;
	}
	cout << "Please enter the interior temperature: ";
	cin >> temp;
	for (i = 1; i < NROWS-1; i++){
		for (j = 1; j < NCOLS-1; j++){
			old[i][j] = temp;
		}
	}
}

void stablize(double temp[][NCOLS], double tol)
{
	int i, j;
	double old[NROWS][NCOLS];
	bool steady;
	do{
		steady = true;
		for (i = 0; i < NROWS; i++){
			for (j = 0; j < NCOLS; j++){
				old[i][j] = temp[i][j];
				}
			}
		for (i = 1; i < NROWS-1; i++){
			for (j = 1; j < NCOLS-1; j++){
				temp[i][j] = 0.25*(old[i][j+1]+old[i][j-1]+old[i+1][j]+old[i-1][j]);
				if (abs(temp[i][j] - old[i][j]) >= tol){
					steady = false;
				}
			}
		}
	}while (steady == false);
}
	
	
