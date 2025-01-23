#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
/*
write a program to fill a 3x3 matrix with random numbers,
then print each col sum.
*/

int RandomNumber(int From, int To)
{
	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short row, short Column)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < Column; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}

void PrintMatrix(int arr[3][3], short row, short column)
{

	for (short i = 0; i < row; i++)
	{

		for (short j = 0; j < column; j++)
		{
			cout << setw(3) << arr[i][j] << "    ";
		}

		cout << endl;
	}
}

int ColumnSum(int arr[3][3], short row, short column)
{
	int ColsSum = 0;

	for (short j = 0; j < row; j++)
	{
		ColsSum += arr[j][column];
	}

	return ColsSum;
}

void PrintEachColumnSum(int arr[3][3], short row, short column)
{

	for (short i = 0; i < column; i++)
	{

		cout << "\nColumn " << i + 1 << " Sum = " << ColumnSum(arr,row, i) << endl;
	}
}


int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];

	FillMatrixWithRandomNumbers(arr, 3, 3);
	cout << "\nThe Following is a 3x3 random Matrix: \n";
	PrintMatrix(arr, 3, 3);

	ColumnSum(arr, 3, 3);

	cout << "\nThe Following are sum of each row in the Matrix: \n";
	PrintEachColumnSum(arr, 3, 3);

	system("Pause > 0");

	return 0;
}