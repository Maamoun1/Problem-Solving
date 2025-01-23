#include<iostream>
using namespace std;
/*
write a program to read a number and check if it is palindrome?
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

bool IsPalindrome(int Number)
{
	return Number == ReverseNumber(Number);
}


int main()
{
	 
	if (IsPalindrome(ReadPostiveNumber("Please Enter a Postive Number? ")))
		cout << "\nYes, its is a Palindrome Number \n";
	else
		cout << "\n No , its is not a Palindrome Number \n";


	return 0;
}