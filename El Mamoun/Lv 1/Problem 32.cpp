#include<iostream>
using namespace std;

/*
 Problem 32: Write a program to ask the user to enter:• Number • M
 Then Print the Number^M
 */

int ReadNumber()
{
	int number = 0;

	cout << "Please Enter a Number? ";
	cin >> number;

	return number;
}

int ReadPower()
{
	int number = 0;

	cout << "Please Enter a Power? ";
	cin >> number;

	return number;
}

int PowerOfM(int Number, int M)
{
	if (M == 0)
	{
		return 1;
	}
		
	int P = 1;
	for (int i = 1; i <= M; i++)
	{
		P = P * Number;
	}

	return P;
}

int main()
{
	cout << "Result = " << PowerOfM(ReadNumber(), ReadPower()) << endl;

	return 0;
}