#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
/*
write a program to fill a 3x3 matrix with random numbers,
and them , then write a function to sum all numbers in this matrix and print it.
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

int SumMatrixElement(int arr[3][3], short row, short column)
{
	int Sum = 0;

	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < column; j++)
		{
			Sum += arr[i][j];
		}
	}

	return Sum;
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

	cout << "\nSum of Matrix is: " << SumMatrixElement(arr, 3, 3);

	
	system("Pause > 0");



	return 0;
}