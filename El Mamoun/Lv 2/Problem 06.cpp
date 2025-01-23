#include<iostream>
using namespace std;
/*
writa a program to read a number and print the sum of its digits
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

int SumOfDigits(int Number)
{
	int Remainder;
	int Sum = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;

		Sum += Remainder;

	}
	return Sum;
}


int main()
{

	cout << "Sum Of Digits is " << SumOfDigits(ReadPostiveNumber("Please Enter a Postive Number? "));

	return 0;
}