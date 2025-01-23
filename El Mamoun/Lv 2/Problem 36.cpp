#include<iostream>
using namespace std;
/*
write a program to dynamically read numbers and save them in an array max size of array is 100,
allocate simi-dynamic array length
*/

int ReadNumber()
{
	int Number;
	cout << "\nPlease enter a number? ";
	cin >> Number;
	return Number;
}

void PrintArray(int arr[100], int &arrLength)
{

	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void AddNumberInArray(int arr[100], int& arrLength,int Number)
{

	++arrLength;
	arr[arrLength - 1] = Number;	
}

void AddMore(int arr[100], int& arrLength)
{
	bool AddMore = true;

	do 
	{		
		AddNumberInArray(arr, arrLength, ReadNumber());

		cout << "\nDo You want to add more numbers?[0]:No,[1]:Yes? ";
		cin >> AddMore;

	} while (AddMore);
}


int main()
{
	srand((unsigned)time(NULL));

	int arr[100];
	int arrLength = 0;
	AddMore(arr, arrLength);
	
	cout << "\nArray Length: " << arrLength << endl;
	cout << "\nArray  1 elements : \n";
	PrintArray(arr, arrLength);

	return 0;
}