#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
/*
write a program to fill a 3x3 matrix with ordered numbers,
*/
int RandomNumber(int From, int To)
{
	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;
}

void FillMatrixWithOrderedNumbers(int arr[3][3], short row, short Column)
{
	short Counter = 0;

	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < Column; j++)
		{
			++Counter;
			arr[i][j] = Counter;
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



int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3] ;

	FillMatrixWithOrderedNumbers(arr, 3, 3);

	cout << "\nThe Following is a 3x3 Ordered Matrix: \n";
	PrintMatrix(arr, 3, 3);

	

	system("Pause > 0");

	return 0;
}