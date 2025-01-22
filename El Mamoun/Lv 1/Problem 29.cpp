#include<iostream>
using namespace std;

/*
 Problem 29: Write a program to Sum even numbers from 1 to N.
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

int SumEvenNumberFrom1ToN(int Number)
{
	int SumEvenNumbers = 0;

	cout << "\nOdd Number = ";
	for (int Counter = 1; Counter <= Number; Counter++)
	{

		if (CheckEvenOrOdd(Counter) == enEvenOrOdd::Even)
			SumEvenNumbers += Counter;
	}
	return SumEvenNumbers;
}

void PrintOddNumberFrom1ToN(int SumEvenNumber)
{
	cout << "\nSum Odd Number is: " << SumEvenNumber;
}


int main()
{

	cout << SumEvenNumberFrom1ToN(ReadNumber());
	system("Pause > 0");

	return 0;
}