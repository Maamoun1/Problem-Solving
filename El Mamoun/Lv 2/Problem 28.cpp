#include<iostream>
using namespace std;
/*
write a program to fill array with max size 100 with random numbers from 10 to 100 ,copy it to another array and print it.
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

void CopyArray(int arrSource[100], int arrDestination[100], int arrLength)
{
	//10 20 30 40 50 60 70 80 
	for (int i = 0; i < arrLength; i++)
	{
		
	arrDestination[i] = arrSource[i];
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



int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength, arr2[100];
	arrLength = ReadPostiveNumber("How Many Element do you need? ");

	FillArrayWithRandomNumbers(arr, arrLength);
	
	cout << "\nArray 1 elements: \n";
	PrintArray(arr, arrLength);

	CopyArray(arr, arr2, arrLength);

	cout << "\nArray 2 elements: \n";
	PrintArray(arr2, arrLength);

	return 0;
}