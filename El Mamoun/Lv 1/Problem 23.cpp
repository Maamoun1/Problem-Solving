#include<iostream>
#include<cmath>
using namespace std;

/*
 Problem 23:Write a program to calculate  circle area circle described around an arbitrary triangle, then print it on the screen.
 The use should enter:
 a
 b
 C
 */

void ReadTriangleData(float& A, float& B,float &C)
{
	cout << "\nPlease Enter A? ";
	cin >> A;

	cout << "\nPlease Enter A? ";
	cin >> B;

	cout << "\nPlease Enter C? ";
	cin >> C;
}

float CircleAreaThroughDescribedArbitraryTriangle(float A,float B,float C)
{
	const float P = (A + B + C) / 2;
	const float PI = 3.1415929;

	float T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));
	
	float Area = PI * pow(T, 2);

	return Area;
}

void PrintResult(float Area)
{
	cout << "\n Area Of Circle is = " << Area << endl;
}


int main()
{
	float A = 0, B = 0, C = 0;

	ReadTriangleData(A, B, C);
	PrintResult(CircleAreaThroughDescribedArbitraryTriangle(A, B,C));

	return 0;
}