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

void PrintFibonacciUsingRecursion(int Number,int Prev1,int Prev2)
{
	int Fibonacci = 0;
	if (Number > 0)
	{
		Fibonacci = Prev2 + Prev1;
		Prev2 = Prev1;
		Prev1 = Fibonacci;
		cout << Fibonacci << "   ";
		
		PrintFibonacciUsingRecursion(Number - 1, Prev1, Prev2);
	}
	//cout << "\n";
}


int main()
{

	PrintFibonacciUsingRecursion(10, 0, 1);




	return 0;
}