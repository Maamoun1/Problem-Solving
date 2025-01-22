#include<iostream>
using namespace std;

/*
 Problem 21: Write a program to calculate circle area along the circumference, then print it on the screen.
 The use should enter:
 L
 */

float ReadCircumference()
{
	float L;

	cout << "\nPlease Enter A? ";
	cin >> L;

	return L;
}

float CircleAreaThroughCircumference(float L)
{
	const float PI = 3.1415929;

	float Area = pow(L, 2) / (4 * PI);

	return Area;
}

void PrintResult(float Area)
{
	cout << "\n Area Of Circle is = " << Area << endl;
}


int main()
{

	PrintResult(CircleAreaThroughCircumference(ReadCircumference()));

	return 0;
}