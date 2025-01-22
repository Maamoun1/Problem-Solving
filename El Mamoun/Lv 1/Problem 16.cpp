#include<iostream>
using namespace std;

/*
  Problem 16: Write a program to calculate rectangle area through diagonal and side area of rectangle and print it on the screen.
 The use should enter:
 a
 d
 */

void ReadNumbers(float& diagonal, float& Width)
{
	cout << "\nPlease Enter a diagonal? ";
	cin >> diagonal;

	cout << "\nPlease Enter a Width? ";
	cin >> Width;
}

float CalCulateRectangeAreaThroughDiagonal(float diagonal, float Width)
{

	float Area = float(Width * sqrt(pow(diagonal, 2) - pow(Width, 2)));

	return Area;
}

void PrintResult(float Area)
{

	cout << "\n Area Of Rectange is = " << Area << endl;

}

int main()
{

	float diagonal, Width;

	ReadNumbers(diagonal, Width);
	PrintResult(CalCulateRectangeAreaThroughDiagonal(diagonal, Width));


	return 0;
}