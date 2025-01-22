#include<iostream>
using namespace std;

/*
Problem 19: Write a program to calculate circle area through diameter, then print it on the screen.
 The use should enter:
 D
*/

float ReadDiameter()
{
	float Diameter;

	cout << "\nPlease Enter Diameter? ";
	cin >> Diameter;

	return Diameter;
}

float CircleAreaThroughDiameter(float Diameter)
{
	const float PI = 3.1415929;

	float Area = (PI * pow(Diameter, 2)) / 4;

	return Area;
}

void PrintResult(float Area)
{
	cout << "\n Area Of Circle is = " << Area << endl;
}


int main()
{

	PrintResult(CircleAreaThroughDiameter(ReadDiameter()));

	return 0;
}