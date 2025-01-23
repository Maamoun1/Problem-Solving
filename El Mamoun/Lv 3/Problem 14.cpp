#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
/*
write a program to check if the matrix is Scalar or not
*/
int RandomNumber(int From, int To)
{
	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;
}

bool AreTypical(int Matrix1[3][3], int Matrix2[3][3], short row, short column)
{

	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < column; j++)
		{

			if (Matrix1[i][j] != Matrix2[i][j])
				return 0;
		}
	}
	return 1;
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

bool IsScallerMatrix(int Matrix1[3][3], short row, short column)
{
	int FirstDigional = Matrix1[0][0];

	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < column; j++)
		{
				
			if (i == j && Matrix1[i][j] != FirstDigional)
			{
				return false;
			}
				
			else if (i != j && Matrix1[i][j] != 0)
				return false;
		}
	}
	return true;
}


int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3]
	{
		{9,0,0},
		{0,9,0},
		{0,0,9}
	};

	//	FillArraywithRandomMatrix(Matrix1, 3, 3);
	//	cout << "\nMatrix1: \n";
	PrintMatrix(Matrix1, 3, 3);


	if (IsScallerMatrix(Matrix1, 3, 3))
		cout << "\nThe Matrix Is Scaller Matrix. \n";
	else
		cout << "\nThe Matrix are Not Scaller Matrix. \n";


	system("Pause > 0");



	return 0;
}