#include<iostream>
using namespace std;
/*
write a program to fill array with max size 100 with random numbers from 1 to 100
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
	
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}



int main()
{

	int arr[100], arrLength, NumberToCheck;
	arrLength = ReadPostiveNumber("How Many Element do you need? ");

	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "\nArray Element: ";
	PrintArray(arr, arrLength);

	return 0;
}