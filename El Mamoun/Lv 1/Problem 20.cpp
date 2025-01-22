#include<iostream>
using namespace std;

/*
Problem 20: Write a program to calculate Circle area inscribed in a square, then print it on the screen.
 The use should enter:
 A
*/

float ReadSquareSide()
{
	float A;

	cout << "\nPlease Enter A? ";
	cin >> A;

	return A;
}

float CircleAreaThroughInscribedSquare(float A)
{
	const float PI = 3.1415929;

	float Area = (PI * pow(A, 2)) / 4;

	return Area;
}

void PrintResult(float Area)
{
	cout << "\n Area Of Circle is = " << Area << endl;
}


int main()
{

	PrintResult(CircleAreaThroughInscribedSquare(ReadSquareSide()));

	return 0;
}