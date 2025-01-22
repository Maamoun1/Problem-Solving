#include<iostream>
using namespace std;

/*
 Problem 14: Write a program to ask the user to enter:
 • Number1
 • Number2
 Then print the two numbers , then Swap the two numbers and print them
*/

int ReadNumber()
{
	int number = 0;

	cout << "Please Enter a Number? ";
	cin >> number;

	return number;
}

void Swap2Number(int& Num1, int& Num2)
{
	int Temp = 0;

	Temp = Num1;
	Num1 = Num2;
	Num2 = Temp;
}

void PrintSwapNumber(int Num1, int Num2)
{

	cout << "\nNumber Before Swap " << Num1 << " " << Num2 << endl;

	Swap2Number(Num1, Num2);
	cout << "\nNumber After Swap  " << Num1 << " " << Num2 << endl;
}

int main()
{

	int Num1, Num2;
	Num1 = ReadNumber();
	Num2 = ReadNumber();

	PrintSwapNumber(Num1, Num2);
	
	return 0;
}