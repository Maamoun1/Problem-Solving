#include<iostream>
using namespace std;
/*
write a program to print all prime numbers from 1 to N.
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

void PrintPrimeNumberFrom1ToN(int Number)
{
	
	for (short i = 1; i <= Number; i++)
	{
		if (CheckPrimeOrNot(i) == enprimeOrNot::Prime)
		{
			cout << i << endl;
		}

	}

}


int main()
{

	PrintPrimeNumberFrom1ToN(ReadPostiveNumber("Please Enter Number? "));




	return 0;
}