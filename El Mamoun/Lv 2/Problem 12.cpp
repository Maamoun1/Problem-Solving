#include<iostream>
using namespace std;
/*
write a program to read a number and print inverted pattern as follow
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

void PrintInvertedPattern(int Number)
{
	cout << "\n";
	for (short i = Number; i >= 1; i--)
	{
		for (short j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << "\n";
	}
}


int main()
{

	PrintInvertedPattern(ReadPostiveNumber("Please Enter a Number? "));

	return 0;
}