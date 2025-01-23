#include<iostream>
using namespace std;
/*
write a program to fille array with numbers,then check if it is palindrome array or not 
*/

void PrintArray(int arr[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

bool IsPalindromeArray(int arr[100], int& arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] != arr[arrLength - (i + 1)])
			return false;
	}
	return true;
}


int main()
{

	int arr[100]{ 10,20,30,30,20,10 }, arrLength=6;

	cout << "\nArray Element: \n";
	PrintArray(arr, arrLength);

	if (IsPalindromeArray(arr, arrLength))
		cout << "\n The Array is  Plaindrome ";
	else
		cout << "\nYes, Array is not Palindrome \n";


	return 0;
}