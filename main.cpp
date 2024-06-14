#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	const int row_1 = 5, col_1 = 10, row_2 = 5, col_2 = 5;
	int array_1[row_1][col_1], array_2[row_2][col_2];
	cout << '\n';
	for (int i = 0; i < row_1; i++)
	{
		for (int j = 0; j < col_1; j++)
		{
			array_1[i][j] = rand() % 50;
			cout << " " << array_1[i][j];
		}
		cout << "\n\n";
	}
	cout << "\n-----------------\n";
	for (int i = 0; i < row_2; i++)
	{
		for (int j = 0; j < col_2 * 2; j += 2)
		{
			array_2[i][j] = array_1[i][j] + array_1[i][j+1];
			cout << " " << array_2[i][j];
		}
		cout << "\n\n";
	}
	return 0;
}