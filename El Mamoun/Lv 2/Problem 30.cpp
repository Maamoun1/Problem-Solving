#include<iostream>
using namespace std;
/*
write a program to fill array with max size 100 with random numbers from 10 to 100 ,sum their elements in a third array and print it the result.
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

void Sum2Arrays(int arrSource[100], int arrDestination[100],int arrSum[100],int arrLength)
{
	
	int Sum = 0;

	for (int i = 0; i < arrLength; i++)
	{
		arrSum[i] = arrDestination[i] + arrSource[i];
			
	}
	cout << endl;
}

void CopyArray(int arrSource[100], int arrDestination[100], int arrLength)
{

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

	int arr[100], arrLength, arr2[100], arrLength2,arrSum[100];
	arrLength = ReadPostiveNumber("How Many Element do you need? ");

	FillArrayWithRandomNumbers(arr, arrLength);
	FillArrayWithRandomNumbers(arr2, arrLength);

	Sum2Arrays(arr, arr2, arrSum, arrLength);


	cout << "\nArray 1 elements: \n";
	PrintArray(arr, arrLength);

	cout << "\nArray 2 elements: \n";
	PrintArray(arr2, arrLength);

	cout << "\nSum Array1 and Array2 elemnts: \n";
	PrintArray(arrSum, arrLength);


	return 0;
}