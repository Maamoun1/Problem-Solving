#include<iostream>
using namespace std;
/*
write a program to read a number and print it in order from left to right
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

int ReverseNumber(int Number)
{
	int Remainder = 0, Number2 = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;

		Number2 = Number2 * 10 + Remainder;

	}
	return Number2;
}

void PrintDigits(int Number)
{
	int Remainder;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;

		cout << Remainder << endl;
	}
}


int main()
{

	PrintDigits(ReverseNumber(ReadPostiveNumber("Please Enter a Postive Number? ")));

	return 0;
}