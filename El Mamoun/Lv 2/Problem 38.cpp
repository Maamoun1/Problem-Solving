#include<iostream>
using namespace std;
/*
write a program to fill array with max size 100 with random numbers from 1 to 100,
copy only odd numbers to another array using addarrayelement , and print it
*/

enum enEvenOrOdd { Even = 1, Odd = 2 };

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

void CopyOddNumberInArray(int arr[100], int arrDesination[100], int& arrLength, int& arrDesinationLength)
{

	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] % 2 != 0)
		{
			AddNumberInArray(arrDesination, arrDesinationLength, arr[i]);
		}
	}
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{

	for (int i = 0; i < arrLength; i++)
		arr[i] = RandomNumber(1, 100);
}


int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength, arrLength2 = 0, arr2[100];

	arrLength = ReadPostiveNumber("How Many Element do you want? ");

	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "\nArray 1 elements: \n";
	PrintArray(arr, arrLength);

	CopyOddNumberInArray(arr, arr2, arrLength, arrLength2);

	cout << "\nArray 2 elements After Copy Odd: \n";
	PrintArray(arr2, arrLength2);


	return 0;
}