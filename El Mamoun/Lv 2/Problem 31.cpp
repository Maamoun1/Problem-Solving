#include<iostream>
using namespace std;
/*
write a program to fill array with ordered numbers from 1 to N , 
then print it , after that suffle this array and print it after shuffle 
*/
int RandomNumber(int From, int To)
{

	int randNumber = rand() % (To - From + 1) + From;

	return randNumber;
}

void Swap(int& A, int& B)
{
	int Temp;
	Temp = A;
	A = B;
	B = Temp;
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

void FillArrayWith1ToN(int arr[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = i + 1;
	}
}

void ShuffleArray(int arr[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
	{
		Swap(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
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

	int arr[100], arrLength, arr2[100], arrLength2, arrSum[100];
	arrLength = ReadPostiveNumber("How Many Element do you need? ");

	FillArrayWith1ToN(arr, arrLength);

	cout << "\nArray 1 Before Shuffle: \n";
	PrintArray(arr, arrLength);

	ShuffleArray(arr, arrLength);
	
	cout << "\nArray 1 After Shuffle: \n";
	PrintArray(arr, arrLength);

	return 0;
}