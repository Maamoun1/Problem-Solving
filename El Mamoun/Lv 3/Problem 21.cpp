#include<iostream>
using namespace std;
/*
write a program to print Fibonacci series of 10
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

void PrintFibonacciSeriesUsingLoops(int Number)
{
	int Fibonacci = 0;
	int Prev2 = 0, Prev1 = 1;
	cout << "1   ";
	for (int Counter = 2; Counter <= Number; Counter++)
	{
    	Fibonacci = Prev2 + Prev1;
		cout << Fibonacci << "   ";

		Prev2 = Prev1;
		Prev1 = Fibonacci;
	}
	cout << "\n";
}


int main()
{

	PrintFibonacciSeriesUsingLoops(ReadPostiveNumber("Please Enter a Number? "));


	return 0;
}