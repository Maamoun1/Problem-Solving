#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
/*
write a program to check if a given number exists in matrix or not.
*/
int RandomNumber(int From, int To)
{
	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;
}

int ReadPostiveNumber(string message)
{
	int number{ 0 };
	do
	{
		cout << message;
		cin >> number;

	} while (number < 0);

	return number;
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
			cout << setw(2) << arr[i][j] << "    ";
		}
		cout << endl;
	}
}

bool IsNumberIsExist(int Matrix1[3][3], short row, short column,short NumToCheck)
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


int main()
{
	srand((unsigned)time(NULL));
	int Matrix1[3][3];

	FillArraywithRandomMatrix(Matrix1, 3, 3);
	cout << "\nMatrix1: \n";
	PrintMatrix(Matrix1, 3, 3);

	short NumToCheck = ReadPostiveNumber("\nPlease Enter The Number to look for in Matrix? ");

	if (IsNumberIsExist(Matrix1, 3, 3, NumToCheck))
		cout << "\nYes,Number is Exist. \n";
	else
		cout << "\nNo,Number is not Exist. \n";


	system("Pause > 0");



	return 0;
}