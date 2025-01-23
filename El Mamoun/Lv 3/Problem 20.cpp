#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
/*
write a program to check it the matrix is palindrome or not.
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

bool IsPalindromeMatrix(int arr[3][3], short row, short column)
{
	for (short i = 0; i < row; i++)
	{

		for (short j = 0; j < column; j++)
		{
			if (arr[i][j] != arr[i][column - (j + 1)])
				return false;
		}
		
	}
	return true;
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
	int Matrix1[3][3]
	{
		{1,2,1},
		{5,5,5},
		{7,3,7}
	};

//	FillArraywithRandomMatrix(Matrix1, 3, 3);
	cout << "\nMatrix1: \n";
	PrintMatrix(Matrix1, 3, 3);

	if (IsPalindromeMatrix(Matrix1, 3, 3))
		cout << "\nYes:Matrix is Plaindrome. \n";
	else
		cout << "\nNo:Matrix is not Plaindrome. \n";

	system("Pause > 0");



	return 0;
}