#include<iostream>
using namespace std;
/*
 Problem 9:  Write a program to ask the user to enter:• Number1, Number2, Number3
*/

void ReadNumbers(int &Num1,int &Num2,int &Num3)
{

	cout << "\nPlease Enter Your First Number? ";
	cin >> Num1;

	cout << "\nPlease Enter Your Second Number? ";
	cin >> Num2;

	cout << "\nPlease Enter Your Third Number? ";
	cin >> Num3;

}

int SumOf3Numbers(int Num1, int Num2, int Num3)
{
	
	return Num1 + Num2 + Num3;
}

void PrintResults(int Total)
{
	cout << "\nYour are Total Number is: " << Total << endl;
}

int main()
{

	int Num1, Num2, Num3;
	ReadNumbers(Num1, Num2, Num3);

	PrintResults(SumOf3Numbers(Num1, Num2, Num3));

	return 0;
}