#include<iostream>
using namespace std;

/*
 Problem 27: Write a program to print numbers from N to 1.
 */

int ReadNumber()
{
	int number = 0;

	cout << "Please Enter a Number? ";
	cin >> number;

	return number;
}

void PrintNumberFromNTo10(int Number)
{

	for (int Counter =Number; Counter >= 1; Counter--)
	{
		cout << Counter << endl;
	}
}

int main()
{

	PrintNumberFromNTo10(ReadNumber());

	return 0;
}