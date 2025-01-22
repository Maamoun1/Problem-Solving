#include<iostream>
using namespace std;

/*
 Problem 28: Write a program to Sum odd numbers from 1 to N.
 */

enum enEvenOrOdd { Even = 1, Odd = 2 };

enEvenOrOdd CheckEvenOrOdd(int number)
{

	if (number % 2 != 0)
		return enEvenOrOdd::Odd;

	else
		return enEvenOrOdd::Even;
}

int ReadNumber()
{
	int number = 0;

	cout << "Please Enter a Number? ";
	cin >> number;

	return number;
}

int SumOddNumberFrom1ToN(int Number)
{
	int SumOddNumbers = 0;
	
	cout << "\nOdd Number = ";
	for (int Counter = 1; Counter <= Number; Counter++)
	{

		if (CheckEvenOrOdd(Counter) == enEvenOrOdd::Odd)
			SumOddNumbers += Counter;
	}
	return SumOddNumbers;
}

void PrintOddNumberFrom1ToN(int SumOddNumber)
{
	cout << "\nSum Odd Number is: " << SumOddNumber;
}




int main()
{

	cout << SumOddNumberFrom1ToN(ReadNumber());
	system("Pause > 0");

	return 0;
}