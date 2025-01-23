#include<iostream>
using namespace std;
/*
write a program to fill array with max size 100 with random numbers from 1 to 100, 
copy it to another array in reverse order and print it
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

void FillArrayWithRandomNumber(int arr[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int arr[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void CopyArrayInReverseOrdered(int arrSource[100], int arrDestination[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
	{
		arrDestination[i] = arrSource[arrLength - (i + 1)];
	}
}


int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength, arr2[100];
	arrLength = ReadPostiveNumber("How Many Element do you need? ");

	FillArrayWithRandomNumber(arr, arrLength);

	cout << "\nArray 1 elements : \n";
	PrintArray(arr, arrLength);

	CopyArrayInReverseOrdered(arr, arr2, arrLength);

	cout << "\nArray 2 After Copying array 1 in Reversed Order: \n";
	PrintArray(arr2, arrLength);

	return 0;
}