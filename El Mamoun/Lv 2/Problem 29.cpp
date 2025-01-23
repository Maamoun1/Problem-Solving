#include<iostream>
using namespace std;

/*
write a program to fill array with max size 100 with random numbers from 10 to 100 ,copy only prime numbers to another array and print it.
*/
enum enprimeOrNot { Prime = 1, NotPrime = 2 };

enprimeOrNot CheckPrimeOrNot(int number)
{

	int M = round(number / 2);

	for (int counter = 2; counter <= M; counter++)
	{

		if (number % counter == 0)
			return enprimeOrNot::NotPrime;

	}
	return enprimeOrNot::Prime;
}

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

void CopyOnlyPrimeInArray(int arrSource[100], int arrDestination[100], int &arrLength,int &arrLength2)
{
	int Counter = 0;

	for (int i = 0; i < arrLength; i++)
	{

		if (CheckPrimeOrNot(arrSource[i]) == enprimeOrNot::Prime)
		{
			arrDestination[Counter] = arrSource[i];
			Counter++;
		}
	}
    arrLength2 = --Counter;
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

	int arr[100], arrLength, arr2[100], arrLength2;
	arrLength = ReadPostiveNumber("How Many Element do you need? ");

	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "\nArray 1 elements: \n";
	PrintArray(arr, arrLength);

	CopyOnlyPrimeInArray(arr, arr2, arrLength, arrLength2);

	cout << "\nArray 2 Prime elements: \n";
	PrintArray(arr2, arrLength2);



	return 0;
}