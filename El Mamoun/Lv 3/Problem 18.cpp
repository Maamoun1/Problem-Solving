#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
/*
write a program to print the intersected numbers in two given matrices.
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

bool IsNumberIsExist(int Matrix1[3][3], short row, short column, short NumToCheck)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < column; j++)
		{

			if (Matrix1[i][j] == NumToCheck)
				return true;
		}
	}
	return false;
}

void InterSectedMatrices(int Matrix1[3][3], int Matrix2[3][3], short row, short column)
{
	short Number;

	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < column; j++)
		{
			Number = Matrix1[i][j];
			if (IsNumberIsExist(Matrix2, row, column, Number))
			{
				cout << setw(3) << Number << "   ";
			}
		}
		cout << "\n";
	}
}



int main()
{
	srand((unsigned)time(NULL));
	int Matrix1[3][3], Matrix2[3][3];

	FillArraywithRandomMatrix(Matrix1, 3, 3);
	cout << "\nMatrix1: \n";
	PrintMatrix(Matrix1, 3, 3);

	FillArraywithRandomMatrix(Matrix2, 3, 3);
	cout << "\nMatrix2: \n";
	PrintMatrix(Matrix2, 3, 3);
	
	cout << "\nIntersected Number are: \n";
	InterSectedMatrices(Matrix1, Matrix2, 3, 3);

	system("Pause > 0");



	return 0;
}