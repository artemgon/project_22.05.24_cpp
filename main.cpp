#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	const int row = 3, col = 6;
	int array[row][col], moves, temp = 0;
	char direction;
	cout << '\n';
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			array[i][j] = rand() % 10;
			cout << " " << array[i][j];
		}
		cout << "\n\n";
	}
	cout << "Enter how many moves do you want."
	<< "\nAnd, please, do not enter numbers greater than five for left and right."
	<< " And numbers greater than 2 for up and down. It's impractical: ";
	cin >> moves;
	cout << "Enter the direction you want(r - right, l - left, u - up and d - down): ";
	cin >> direction;
	cout << endl;
	switch (direction)
	{
	case 'r':
		for (int i = 0; i < row; i++)
		{
			for (int j = col - moves; j < col; j++)
			{
				cout << " " << array[i][j];
			}
			for (int j = 0; j < col - moves; j++)
			{
				cout << " " << array[i][j];
			}
			cout << "\n\n";
		}
		break;
	case 'l':
		for (int i = 0; i < row; i++)
		{
			for (int j = moves; j < col; j++)
			{
				cout << " " << array[i][j];
			}
			for (int j = 0; j < moves; j++)
			{
				cout << " " << array[i][j];
			}
			cout << "\n\n";
		}
		break;
	case 'u':
		for (int i = moves; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				cout << " " << array[i][j];
			}
			cout << "\n\n";
		}
		for (int i = 0; i < moves; i++)
		{
			for (int j = 0; j < col; j++)
			{
				cout << " " << array[i][j];
			}
			cout << "\n\n";
		}
		break;
	case 'd':
		for (int i = row - moves; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				cout << " " << array[i][j];
			}
			cout << "\n\n";
		}
		for (int i = 0; i < row - moves; i++)
		{
			for (int j = 0; j < col; j++)
			{
				cout << " " << array[i][j];
			}
			cout << "\n\n";
		}
		break;
	default:
		cout << "You've entered invalid value. Try this next time";
		break;
	}
	return 0;
}