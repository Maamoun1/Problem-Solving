#include<iostream>
using namespace std;

/*
 Problem 12: Write a program to ask the user to enter:• Number1 , Number2 Then Print the Max Number
*/

int ReadNumber()
{
	int number = 0;

	cout << "Please Enter a Number? ";
	cin >> number;

	return number;

}

int Max2Number(int Num1,int Num2)
{

	if (Num1 > Num2)
		return Num1;

	else
		return Num2;

}

void PrintMaxNumber(int Max)
{
	cout << "\nMax Number is = " << Max << endl;
}

int main()
{

	int Num1, Num2;

	Num1 = ReadNumber();
	Num2 = ReadNumber();

	PrintMaxNumber(Max2Number(Num1, Num2));

	return 0;
}