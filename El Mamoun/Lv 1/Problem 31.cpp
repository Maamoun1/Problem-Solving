#include<iostream>
using namespace std;

/*
Problem 31: Write a program to ask the user to enter:• Number
 Then Print the Number^2 , Number^3 , Number^4
*/

int ReadNumber()
{
	int number = 0;

	cout << "Please Enter a Number? ";
	cin >> number;

	return number;
}

void Power_2_3_4(int Number)
{
	int a, b, c;
	a = Number * Number;
	b = Number * Number * Number;
	c = Number * Number * Number * Number;

	cout << a << " " << b << " " << c << endl;
}



int main()
{
	Power_2_3_4(ReadNumber());

	return 0;
}