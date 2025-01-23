#include<iostream>
using namespace std;
/*
write a program to fill array with max size 100 with random numbers from 1 to 100,
read number and return its index in array if found otherwise
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

void FillArrayWithRandomNumbers(int arr[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int arr[100], int arrLength)
{
	cout << "\nOriginal Array: ";

	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

short FindNumberPositionInArray(int arr[100], int arrLength,short SearchNumber)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (SearchNumber == arr[i])
			return i;
	}
	return -1;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100];
	int arrLength;
	arrLength = ReadPostiveNumber("How Many Keys do you need? ");

	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "\nArray  1 elements : \n";
	PrintArray(arr, arrLength);

	int SearchNumber = ReadPostiveNumber("Please Enter a Number To Search For? \n");

	cout << "\nNumber you Looking For is: " << SearchNumber << endl;

	short NumberPosition = FindNumberPositionInArray(arr, arrLength, SearchNumber);

	if (NumberPosition == -1)
	{
		cout << "The Number is not found :-( \n";
	}

	else
	{
		cout << "\nThe Number Found at position " << NumberPosition << endl;
		cout << "\nThe Number Found at orders " << NumberPosition+1 << endl;

	}
	return 0;
}