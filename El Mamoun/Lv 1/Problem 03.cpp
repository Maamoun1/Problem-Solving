#include<iostream>
#include<string>
using namespace std;

/*
Problem 3 :Write a program to ask the user to enter a number, then Print “ODD” if its odd, Or “Even” if its even.
*/
enum enEvenOrOdd { Even = 1, Odd = 2 };

int ReadNumber()
{
	int number = 0;

	cout << "Please Enter a Number? ";
	cin >> number;

	return number;
}

enEvenOrOdd CheckEvenOrOdd(int number)
{

	if (number % 2 == 0)
		return enEvenOrOdd::Even;

	else
		return enEvenOrOdd::Odd;
}

void PrintEvenOrOdd(enEvenOrOdd EvenOrOdd)
{
	
	if (EvenOrOdd == enEvenOrOdd::Even)
		cout << "The Number is Even \n";

	else
		cout << "The Number  is Odd \n";
}


int main()
{

	PrintEvenOrOdd(CheckEvenOrOdd(ReadNumber()));


	return 0;
}