#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
/*
write a program to print the min and max numbers in matrix
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
			cout << setw(2) << arr[i][j] << "    ";
		}
		cout << endl;
	}
}

short MinInMatrix(int arr[3][3], short row, short column)
{
	short MinNum = arr[0][0];

	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < column; j++)
		{
			if (arr[i][j] < MinNum)
			{
				MinNum = arr[i][j];
			}
		}
	}
	return MinNum;
}

short MaxInMatrix(int arr[3][3], short row, short column)
{
	short MaxNum = arr[0][0];

	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < column; j++)
		{
			if (arr[i][j] > MaxNum)
			{
				MaxNum = arr[i][j];
			}
		}
	}
	return MaxNum;
}

int main()
{
	srand((unsigned)time(NULL));
	int Matrix1[3][3], Matrix2[3][3];

	FillArraywithRandomMatrix(Matrix1, 3, 3);
	cout << "\nMatrix1: \n";
	PrintMatrix(Matrix1, 3, 3);

	cout << "\nMinium Number is: " << MinInMatrix(Matrix1, 3, 3);
	cout << "\nMaxium Number is: " << MaxInMatrix(Matrix1, 3, 3);

	
	system("Pause > 0");



	return 0;
}