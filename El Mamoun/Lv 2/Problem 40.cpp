#include<iostream>
using namespace std;
/*
write a program	to fill array with numbers,then print distinct numbers to another array
*/

int RandomNumber(int From, int To)
{

	int randNumber = rand() % (To - From + 1) + From;

	return randNumber;
}

void FillArray(int arr[100], int& arrLength)
{
	arrLength = 10;
	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 50;
	arr[4] = 50;
	arr[5] = 70;
	arr[6] = 70;
	arr[7] = 70;
	arr[8] = 70;
	arr[9] = 90;
}

void PrintArray(int arr[100], int& arrLength)
{

	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void AddNumberInArray(int arr[100], int& arrLength, int Number)
{

	++arrLength;
	arr[arrLength - 1] = Number;
}

short FindNumberPositionInArray(int arr[100], int Number, int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == Number)
			return i;
	}

	return -1;
}

bool IsNumberInArray(int arr[100], int arrLength, int SearchNumber)
{
	return FindNumberPositionInArray(arr, arrLength, SearchNumber) != -1;

}

void CopyDistinctArray(int arr1[100], int arr2[100], int arrLength, int& arrLength2)
{

	for (int i = 0; i < arrLength; i++)
	{
		if (!IsNumberInArray(arr2, arrLength2, arr1[i]))
		{
			AddNumberInArray(arr2, arrLength2, arr1[i]);
		}
	}
}


int main()
{
	srand((unsigned)time(NULL));

	int arrSource[100], SourceLength;
	FillArray(arrSource, SourceLength);

	cout << "\nArray 1 elements: \n";
	PrintArray(arrSource, SourceLength);

	int arrDesination[100], DestinationLength = 0;
	CopyDistinctArray(arrSource, arrDesination, SourceLength, DestinationLength);

	cout << "\nArray 2 elements: \n";
	PrintArray(arrDesination, DestinationLength);

	return 0;
}