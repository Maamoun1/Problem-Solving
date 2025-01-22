#include<iostream>
#include<string>
using namespace std;

/*
Problem 37: Write a program to read numbers from user and sum them, keep reading until the user enters -99 then print
the Sum on screen.
*/

float ReadNumber(string Message)
{
	float number = 0;

	cout << Message << endl;
	cin >> number;

	return number;
}

float SumUntil_99()
{
	int Sum=0, Counter=1, Number;

	do
	{
		Number = ReadNumber("Please Enter Number " + to_string(Counter));

		if (Number == -99)
		{
			break;
		}

		Counter++;
		Sum += Number;

	} while (Number != -99);

	return Sum;
}


int main()
{
	cout << "Result = " << SumUntil_99();

	return 0;
}