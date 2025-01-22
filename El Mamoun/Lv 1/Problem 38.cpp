#include<iostream>
using namespace std;

/*
Problem 38: Write a program to read a number and check if it is a prime number or not.
 Note: Prime number can only divide on one and on itself.
*/

enum enPrimeOrNot { Prime = 1, NotPrime = 2 };

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

enPrimeOrNot CheckPrime(int Number)
{
	int M = round(Number / 2);

	for (int counter = 2; counter <= M; counter++)
	{
		if (Number % counter == 0)
			return enPrimeOrNot::NotPrime;
	}

	return enPrimeOrNot::Prime;
}

void PrintNumberType(int Number)
{

	if (CheckPrime(Number)==enPrimeOrNot::Prime)
		cout << Number << " is Prime \n";

	else
		cout << Number << " is not Prime \n";
}



int main()
{

	PrintNumberType(ReadPostiveNumber("Please Enter a Postive Number? "));


	return 0;
}