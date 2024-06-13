#include <iostream>
#include <stdlib.h>
#include <time.h> 
using namespace std;

int main()
{
	srand(time(NULL));
	const int row = 3, col = 3;
	int array[row][col], sum = 0, max = array[0][0];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			array[i][j] = rand() % 100;
			sum += array[i][j];
			cout << array[i][j] << " ";
			if (array[i][j] > max) max = array[i][j];
		}
		cout << "\n\n";
	}
	int min = array[0][0];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (array[i][j] < min) min = array[i][j];
		}
	}
	cout << "Sum = " << sum << endl;
	cout << "Arithmetic mean = " << sum / (row * col) << endl;
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;
	return 0;
}