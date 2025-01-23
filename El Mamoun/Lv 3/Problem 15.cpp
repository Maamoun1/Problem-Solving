#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
/*
write a program to count given number in matrix
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
			printf(" %0*d   ", 2, arr[i][j]);
		}

		cout << endl;
	}
}

short CountNumberInMatrix(int Matrix1[3][3], short row, short column,short NumToCheck)
{
	short CountNum = 0;

	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < column; j++)
		{
			if (Matrix1[i][j] == NumToCheck)
				++CountNum;		
		}
	}
	return CountNum;
}


int main()
{
	srand((unsigned)time(NULL));
	int Matrix1[3][3];

	FillArraywithRandomMatrix(Matrix1, 3, 3);
	cout << "\nMatrix1: \n";
	PrintMatrix(Matrix1, 3, 3);

	int NumToCheck = ReadPostiveNumber("\nEnter The Number to count in Matrix? ");

	cout << "Number " << NumToCheck << " Count in Matrix " << CountNumberInMatrix(Matrix1, 3, 3, NumToCheck);

	system("Pause > 0");



	return 0;
}