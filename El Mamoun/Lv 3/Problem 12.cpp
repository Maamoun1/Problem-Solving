#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
/*
write a program to compare two matrices and check if they are typical or not.
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

bool AreTypicalMatrices(int arr1[3][3], int arr2[3][3], short row, short column)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < column; j++)
		{

			if (arr1[i][j] != arr2[i][j])
				return false;
		}
	}

	return true;
}


int main()
{
	srand((unsigned)time(NULL));

	int arr1[3][3], arr2[3][3];

	FillArraywithRandomMatrix(arr1, 3, 3);
	cout << "\nMatrix1: \n";
	PrintMatrix(arr1, 3, 3);

	FillArraywithRandomMatrix(arr2, 3, 3);
	cout << "\nMatrix1: \n";
	PrintMatrix(arr2, 3, 3);

	if (AreTypicalMatrices(arr1, arr2, 3, 3))
		cout << "\nThe Matrices are Typical. \n";
	else
		cout << "\nThe Matrices are Not Typical. \n";


	system("Pause > 0");



	return 0;
}