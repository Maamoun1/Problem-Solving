#include<iostream>
#include<cmath>
using namespace std;
/*
write a program to print sqrt of numbers , do not use built n sqrt function
*/
float GetFractionPart(float Number)
{
	float Fraction = 0;
	Fraction = Number - int(Number);

	return Fraction;
}

float MySqrt(float Number)
{
	return pow(Number, 0.5);
}

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


int main()
{
	float Number = ReadPostiveNumber("Please Enter a Postive Number? ");

	cout << "\nMy Ceil Result: " << MySqrt(Number) << endl;
	cout << "\nMy C++ Result : " << sqrt(Number) << endl;

	return 0;
}