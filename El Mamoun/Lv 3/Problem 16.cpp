#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
/*
write a program to check if the matrix is sparse or not.
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
			cout << arr[i][j] << "   ";
		}
		cout << endl;
	}
}

short CountNumberInMatrix(int Matrix1[3][3], short row, short column, short NumToCheck)
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

bool IsSparce(int Matrix1[3][3], short row, short column)
{
	short MaxtrixSize = row * column;

	return CountNumberInMatrix(Matrix1, 3, 3, 0) > MaxtrixSize / 2;
}


int main()
{
	srand((unsigned)time(NULL));
	int Matrix1[3][3]
	{
		{0,0,4},
		{4,0,8},
		{0,0,7}
	};

//	FillArraywithRandomMatrix(Matrix1, 3, 3);
	cout << "\nMatrix1: \n";
	PrintMatrix(Matrix1, 3, 3);

	if (IsSparce(Matrix1, 3, 3))
		cout << "\nYes,its Sparce. \n";
	else
		cout << "\nNo,It is not Sparce. \n";


	system("Pause > 0");



	return 0;
}