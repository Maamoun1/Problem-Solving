#include<iostream>
using namespace std;
/*
write a program to fill array with max size 100 with random numbers from 10 to 100 ,then print average of all number
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

int SumNumbersInArray(int arr[100], int arrLength)
{
	int SumElemnt = 0;

	for (int i = 0; i < arrLength; i++)
	{
		SumElemnt += arr[i];
	}
	return SumElemnt;
}

float AverageNumbersInArray(int arr[100], int arrLength)
{
	return (float) SumNumbersInArray(arr, arrLength) / arrLength;
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

	int arr[100], arrLength;
	arrLength = ReadPostiveNumber("How Many Element do you need? ");

	FillArrayWithRandomNumbers(arr, arrLength);
	PrintArray(arr, arrLength);

	cout << "\Sum Numbers is: " << SumNumbersInArray(arr, arrLength) << endl;
	cout << "\Average Numbers is: " 
		<< AverageNumbersInArray(arr, arrLength) << endl;


	return 0;
}