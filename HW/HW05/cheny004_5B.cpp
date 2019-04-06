// CSci 1113 HW5
// Chenyi Wang 5513416
#include<iostream>
#include<iomanip>
#include<fstream>
#include<cstdlib>
#include<cmath>
using namespace std;

const int NROWS = 10;
const int NCOLS = 10;

// Read the file and create a matrix.
void input(double temp[][NCOLS], int& nrows, int& ncols);
void stablize(double temp[][NCOLS], double tol, int nrows, int ncols);
double computeDiff(double temp[][NCOLS], double old[][NCOLS], int nrows, int ncols);
void display(double temp[][NCOLS], int nrows, int ncols);


int main()
{
	double temp[NROWS][NCOLS], tol;
	int nrows, ncols ;
	input(temp, nrows, ncols);
	cout << "Input the tolerance: ";
	cin >> tol;
	if (tol <= 0){
		cout << "Tolerance must be positive";
		exit(1);
	}
	stablize(temp, tol, nrows, ncols);
	display(temp, nrows, ncols);
	return 0;
}



void input(double temp[][NCOLS], int& nrows, int& ncols){
	ifstream in;
	int i, j = 0;
	string name, line, values[10];
	cout << "Input the data file name: ";
	cin >> name;
	in.open(name.c_str());
	if (in.fail()){
		cout << "Cannot open file";
		exit(1);
	}
	in >> nrows >> ncols;
	for (i = 0; i < nrows; i++){
		for (j = 0; j < ncols; j++)
			in >> temp[i][j];
	}
	in.close();
}

void stablize(double temp[][NCOLS], double tol, int nrows, int ncols){
	int i, j;
	double old[NROWS][NCOLS];
	bool steady = false;
	while (steady == false){
		for (i = 0; i < nrows; i++){
			for (j = 0; j < ncols; j++){
				old[i][j] = temp[i][j];
				}
		}
		for (i = 1; i < nrows-1; i++){
			for(j = 1; j < ncols-1; j++){
				temp[i][j] = (1.0/ncols)*(old[i][j+1]+old[i][j-1]+old[i+1][j]+old[i-1][j]);
			}
		}
		//cout << "";
		//cout << computeDiff(temp, old, nrows, ncols);
		if (computeDiff(temp, old, nrows, ncols) < tol)
			steady = true;
	}
}

double computeDiff(double temp[][NCOLS], double old[][NCOLS], int nrows, int ncols){
	double diff = 0;
	for (int i = 0; i < nrows; i++){
		for (int j = 0; j < ncols; j++)
			diff += pow((temp[i][j]-old[i][j]),2.0);
	}
	diff = pow(diff, 0.5);
	return diff;
}

void display(double temp[][NCOLS], int nrows, int ncols){
	cout.setf(ios::fixed);
    cout.precision(3);
	for (int i = 0; i < nrows; i++){
		for (int j = 0; j < ncols; j++){
			cout << setw(9) << temp[i][j];
		}
		cout << endl;
	}
}

