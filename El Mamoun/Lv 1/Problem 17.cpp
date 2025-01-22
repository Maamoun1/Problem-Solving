#include<iostream>
using namespace std;

/*
 Problem 17: Write a program to calculate triangle area then print it on the screen.
 The use should enter:
 a
 h
 */

void ReadNumbers(float& A, float& H)
{
	cout << "\nPlease Enter A? ";
	cin >> A;

	cout << "\nPlease Enter H? ";
	cin >> H;
}

float TrainagleArea(float A, float H)
{

	float Area = (A / 2) * H;

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
	PrintResult(TrainagleArea(diagonal, Width));


	return 0;
}