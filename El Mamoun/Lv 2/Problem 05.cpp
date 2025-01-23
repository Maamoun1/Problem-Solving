#include<iostream>
using namespace std;
/*
writa a program to read a number and print it in a reversed order
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

void PrintDigits(int Number)
{
	int Remainder;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		
		cout << Remainder << endl;
	}
}


int main()
{

	PrintDigits(ReadPostiveNumber("Please Enter a Postive Number? "));

	return 0;
}