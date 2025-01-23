#include<iostream>
#include<cstdlib>
using namespace std;
/*
write a program to fill array with max size 100 with random numbers from -100 to 100,
then print the count of positive numbers.
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

int RandomNumber(int From, int To)
{

	int randNumber = rand() % (To - From + 1) + From;

	return randNumber;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arr[i] = RandomNumber(-100, 100);
}

void PrintArray(int arr[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int CountPostiveNumberInArray(int arr[100], int& arrLength)
{
	int CountPostive = 0;

	for (int i = 0; i < arrLength; i++)
	{

		if (arr[i]  > 0)
			++CountPostive;
	}
	return CountPostive;
}


int main()
{

	int arr[100], arrLength;

	arrLength = ReadPostiveNumber("Please Enter How many element do you need? ");

	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "\nArray elements: \n";
	PrintArray(arr, arrLength);

	cout << "\nCount Postive Number is: \n";
	cout << CountPostiveNumberInArray(arr, arrLength);



	return 0;
}