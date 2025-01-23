#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
/*
write a program to fill a 3x3 matrix with random numbers,
then sum each col in another array and print them
*/
int RandomNumber(int From, int To)
{
	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short row, short Column)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < Column; j++)
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
			cout << setw(3) << arr[i][j] << "    ";
		}

		cout << endl;
	}

}

int ColumnSum(int arr[3][3], short row, short column)
{
	int ColsSum = 0;

	for (short j = 0; j < row; j++)
	{
		ColsSum += arr[j][column];
	}

	return ColsSum;
}

void SumColsMatrixInArray(int arr[3][3],int arrSum[100], short row, short column)
{

	for (short i = 0; i < column; i++)
	{

		arrSum[i] = ColumnSum(arr, row, i);
	}
}

void PrintColsSumInArray(int arrSum[100], short Length)
{

	for (short i = 0; i < Length; i++)
	{

		cout << "Col " << i + 1 << " Sum = " << arrSum[i] << endl;
	}
}


int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3],arrSum[100];

	FillMatrixWithRandomNumbers(arr, 3, 3);
	cout << "\nThe Following is a 3x3 random Matrix: \n";
	PrintMatrix(arr, 3, 3);

	SumColsMatrixInArray(arr, arrSum, 3, 3);

	cout << "\nThe Following are sum of each row in the Matrix: \n";
	PrintColsSumInArray(arrSum, 3);

	system("Pause > 0");

	return 0;
}