#include<iostream>
using namespace std;

/*
 Problem 26: Write a program to print numbers from 1 to N
 */

int ReadNumber()
{
	int number = 0;

	cout << "Please Enter a Number? ";
	cin >> number;

	return number;
}

void PrintNumberFrom1ToN(int Number)
{

	for (int Counter = 1; Counter <= Number; Counter++)
	{
		cout << Counter << endl;
	}
}

int main()
{

	PrintNumberFrom1ToN(ReadNumber());

	return 0;
}