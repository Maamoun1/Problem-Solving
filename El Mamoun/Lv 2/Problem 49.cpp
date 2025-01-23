#include<iostream>
#include<cmath>
using namespace std;
/*
write a program to print ceil of numbers , don not use built in ceil function.
*/
float GetFractionPart(float Number)
{
	float Fraction = 0;
	Fraction = Number - int(Number);

	return Fraction;
}

float MyCeil(float Number)
{
	if (abs(GetFractionPart(Number)) > 0)

		if (Number > 0)
			return int(Number) + 1;
		else
			return (int)Number;

	else
		return Number;
}

float ReadNumber()
{
	float number = 0;

	cout << "Please Enter a Number? ";
	cin >> number;

	return (float)number;
}


int main()
{
	float Number = ReadNumber();

	cout << "\nMy Ceil Result: " << MyCeil(Number) << endl;
	cout << "\nMy C++ Result : " << ceil(Number) << endl;


	return 0;
}