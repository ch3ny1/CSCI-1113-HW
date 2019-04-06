//Lab 6_Warm-up

//1)
//a.
int test[5][7];

//b. 5 rows c. 7 cols d. 35 elements.

//e.
test[1];

//2) a.
double declaration (double NUM)
{
	double max, min;
	int i = 0, j = 0;
	max = NUM[0][0];
	min = max;
	while (NUM[i]){
		while (NUM[i][j]{
			if (NUM[i][j] > max)
				max = NUM[i][j];
			else if (NUM[i][j] < max)
				min = NUM[i][j];
			j++;
		}
		i++;
	}
	return abs(max - min);
}

//2) b.
void density_Range(double NUM, double& densityRange)
{
	densityRange = range(NUM);
}

//3) a.
int numZeros(int test)
{
	int i, j, count;
	for (i = 0; i < ROWS; i++){
		for (j = 0; j < COLS; j++){
			if (test[i][j] == 0)
				count++;
			}
		}
	return count;
}

//3) b.
zeros = numZeros(test);

//4)
int matrix[][];
int i, j, val = 10;
for (i = 0; i < 3; i++){
	for (j = 0; j < 3; j++){
		matrix[i][j] = val;
		val--;
	}
}
