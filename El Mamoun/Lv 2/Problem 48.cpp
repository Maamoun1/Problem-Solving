#include<iostream>
#include<cmath>
using namespace std;
/*
write a program to print floor of numbers , don not use built in floor function.
*/

float MyFloor(float Number)
{
	if (Number > 0)
		return int(Number);
	else
		return (int)Number - 1;
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

	cout << "\nMy Floor Result: " << MyFloor(Number) << endl;
	cout << "\nMy C++ Result  : " << floor(Number) << endl;

	return 0;
}