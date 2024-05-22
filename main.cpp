#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	const int cols = 50;
	const int rows = 50;
	int array[cols][rows];
	int current_cols = 0, current_rows = 0, sum = 0, max = 0, min = 0;
	do
	{
		cout << "Enter the number of columns: ";
		cin >> current_cols;
		cout << "Enter the number of rows: ";
		cin >> current_rows;
	} while (current_rows < 0 || current_rows > 50 || current_cols < 0 || current_cols > 50);
	for (size_t i = 0; i < current_cols; i++)
	{
		for (size_t j = 0; j < current_rows; j++)
		{
			array[i][j] = rand() % 20 - 10;
            sum = sum + array[i][j];
            if (array[i][j] > max) {
                max = array[i][j];
            }
            if (array[i][j] < min) {
                min = array[i][j];
            }
		}
	}
    for (size_t i = 0; i < current_cols; i++)
    {
        for (size_t j = 0; j < current_rows; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Sum: " << sum;
    cout << "\nArithmetic mean: " << sum / (current_cols * current_rows);
    cout << "\nMin: " << min;
    cout << "\nMax: " << max;
	return 0;
}