#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
/*
write a program to fill a 3x3 matrix with random numbers.
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

void PrintMatrix(int arr[3][3], short rows, short columns)
{

	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < columns; j++)
		{
			cout << setw(2) << arr[i][j] << "   ";
		}
		cout << endl;
	}
}


int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];

	FillMatrixWithRandomNumbers(arr, 3, 3);
	
	cout << "\nThe Following is a 3x3 Random Matrix: \n";
	PrintMatrix(arr, 3, 3);

	system("Pause > 0");

	return 0;
}