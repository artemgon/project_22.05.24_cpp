#include <iostream>
using namespace std;

int main() {
	const int row = 5, col = 5;
	int array[row][col], first_element;
	cout << "Please, enter the first element: ";
	cin >> first_element;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			array[i][j] = first_element;
			cout << " " << array[i][j];
			first_element *= 2;
		}
		cout << "\n\n";
	}
	return 0;
}