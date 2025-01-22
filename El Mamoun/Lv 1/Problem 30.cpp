#include<iostream>
using namespace std;

/*
 Problem 30: Write a program to calculate factorial of N!
 */

int ReadPostiveNumber(string Message)
{
	int Number = 0;

	do 
	{
		cout << Message;
		cin >> Number;

	} while (Number < 0);

	return Number;
}

int Factorial(int Number)
{
	int Factorial = 1;
	
	for (int Counter = Number; Counter >= 1; Counter--)
	{
		Factorial *= Counter;

	}
	return Factorial;
}



int main()
{

	cout << Factorial(ReadPostiveNumber("Please Enter a Postive Number? "));

	return 0;
}