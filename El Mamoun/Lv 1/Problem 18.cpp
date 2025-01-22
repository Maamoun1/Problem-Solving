#include<iostream>
using namespace std;

/*
 Problem 18: Write a program to calculate circle area then print it on the screen.
 The use should enter:
 r
*/

float ReadRadius()
{
	float Radius;

	cout << "\nPlease Enter Radius? ";
	cin >> Radius;
	
	return Radius;
}

float CircleArea(float Radius)
{
	const float PI = 3.1415929;

	float Area = PI * (Radius * Radius);

	return Area;
}

void PrintResult(float Area)
{
	cout << "\n Area Of Circle is = " << Area << endl;
}


int main()
{

	PrintResult(CircleArea(ReadRadius()));

	return 0;
}