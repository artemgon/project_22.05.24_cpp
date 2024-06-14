#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	const int row = 3, col = 4;
	int array[row][col],sum_3 = 0;
	cout << endl;
	for (int i = 0; i < row; i++)
	{
		int sum_1 = 0;
		for (int j = 0; j < col; j++)
		{
			array[i][j] = rand() % 65;
			cout << " " << array[i][j] ;
			sum_1 += array[i][j];
			sum_3 += array[i][j];
		}
		cout << "\t  |  " << sum_1 << endl;
	}
	cout << "-----------------------\n";
	for (int j = 0; j < col; j++)
	{
		int sum_2 = 0;
		for (int i = 0; i < row; i++)
		{
			sum_2 += array[i][j];
		}
		cout << " " << sum_2;
		if (j == col - 1) cout << "\t |  " << sum_3;
	}
	return 0;
}