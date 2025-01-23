#include<iostream>
using namespace std;
/*
write a program to read N elements and store them in array then print all array elements and
ask for a number to check,then print how many numbers a certain elements repeated in that array
*/
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

void ReadArray(int arr[100], int &arrLength)
{
	cout << "\nPlease Enter Number Element? ";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
	{
		cout << "Element [" << i + 1 << "]: ";
		cin >> arr[i];
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

int TimesRepeated(int arr[100], int arrLength, int NumToCheck)
{
	int CountRrepeat = 0;

	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == NumToCheck)
			++CountRrepeat;
	}
	return CountRrepeat;
}


int main()
{

	int arr[100], arrLength, NumberToCheck;

	ReadArray(arr, arrLength);
	NumberToCheck = ReadPostiveNumber("\nEnter The Number do you want To Check? ");

	PrintArray(arr, arrLength);

	cout << NumberToCheck;
	cout << " is repeated ";
	cout<< TimesRepeated(arr, arrLength, NumberToCheck) << " Time(s)\n";

	return 0;
}