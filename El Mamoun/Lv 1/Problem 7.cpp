#include<iostream>
#include<string>
using namespace std;

/*
Problem 7: Write a program to ask the user to enter: • Number Then Print the “Half of the <Number> is <???>”
*/

int ReadNumber()
{
	int number = 0;

	cout << "Please Enter a Number? ";
	cin >> number;

	return number;

}

float HalfOfNumber(int number)
{

	return float(number / 2);
}

void PrintHalfOfNumber(int number)
{
	string Result = "Half of " + to_string(number) + " is " + to_string(HalfOfNumber(number));

	cout << endl << Result << endl;
}

int main()
{

	PrintHalfOfNumber(ReadNumber());

	return 0;
}