#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
/*
write a program to fill a 3x3 matrix with random numbers,
print it , then print the middle row and middle col
*/

int RandomNumber(int From, int To)
{
	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;
}

void FillArraywithRandomMatrix(int arr[3][3], short row, short column)
{

	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < column; j++)
		{

			arr[i][j] = RandomNumber(1, 10);
		}
	}
}

void PrintMiddleRow(int arr[3][3], short row, short Column)
{
	short MiddleRow = floor(row / 2);

	for (short j = 0; j < Column; j++)
	{
		printf(" %0*d   ", 2, arr[MiddleRow][j]);

	}
}

void PrintMiddleColumn(int arr[3][3], short row, short Column)
{
	short MiddleCol = floor(Column / 2);

	for (short j = 0; j < row; j++)
	{
		printf(" %0*d   ", 2, arr[j][MiddleCol]);
	}
}

void PrintMatrix(int arr[3][3], short row, short column)
{

	for (short i = 0; i < row; i++)
	{

		for (short j = 0; j < column; j++)
		{
			printf(" %0*d   ", 2, arr[i][j]);
		}

		cout << endl;
	}
}




int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];

	FillArraywithRandomMatrix(arr, 3, 3);
	cout << "\nMatrix1: \n";
	PrintMatrix(arr, 3, 3);

	cout << "\nMiddle Row of Matrix1 is: \n";
	PrintMiddleRow(arr, 3, 3);

	cout << "\n\nMiddle Column of Matrix1 is: \n";
	PrintMiddleColumn(arr, 3, 3);

	system("Pause > 0");



	return 0;
}