#include<iostream>
using namespace std;

/*
  Problem 13:Write a program to ask the user to enter 3 numbers:
 • A
 • B
 • C
 Then Print Max number
*/

int ReadNumber()
{
	int number = 0;

	cout << "Please Enter a Number? ";
	cin >> number;

	return number;
}

int Max3Number(int Num1, int Num2,int Num3)
{

	if (Num1 > Num2 && Num1 > Num3)
		return Num1;

	else if (Num2 > Num1 && Num2 > Num3)
		return Num2;
	else
		return Num3;
}

void PrintMaxNumber(int Max)
{
	cout << "\nMax Number is = " << Max << endl;
}

int main()
{

	int Num1, Num2, Num3;

	Num1 = ReadNumber();
	Num2 = ReadNumber();
	Num3 = ReadNumber();

	PrintMaxNumber(Max3Number(Num1, Num2, Num3));

	return 0;
}