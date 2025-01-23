#include<iostream>
using namespace std;
/*
write a program to fill array with max size 100 with random numbers from 1 to 100,
it to another array using AddarrayElement, and print it.
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

void CopyArrayUsingAddArrayElement(int arr[100],int arrDesination[100], int& arrLength,int &arrDesinationLength)
{
	
	for (int i = 0; i < arrLength; i++)
	{
		AddNumberInArray(arrDesination, arrDesinationLength, arr[i]);
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

	int arr[100], arrLength, arrLength2=0,arr2[100];
	
	arrLength = ReadPostiveNumber("How Many Element do you want? ");

	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "\nArray 1 elements: \n";
	PrintArray(arr, arrLength);

	CopyArrayUsingAddArrayElement(arr, arr2, arrLength, arrLength2);

	cout << "\nArray 2 elements After Copy: \n";
	PrintArray(arr2, arrLength2);


	return 0;
}