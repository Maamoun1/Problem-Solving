#include<iostream>
using namespace std;
/*
writa a program to read a number and print it reversed
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

int ReverseNumber(int Number)
{
	int Remainder = 0, Number2 = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;

		Number2 = Number2 * 10 + Remainder;

	}
	return Number2;
}


int main()
{

	cout << "\nReverse Number is "
		 << ReverseNumber(ReadPostiveNumber("Please Enter a Postive Number? "));

	return 0;
}