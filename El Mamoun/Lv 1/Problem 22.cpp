#include<iostream>
using namespace std;

/*
  Problem 22: Write a program to calculate circle area Inscribed in an Isosceles Triangle, then print it on the screen.
 The use should enter:
 a
 b
 */

void ReadTriangleData(float &A,float &B)
{
	cout << "\nPlease Enter A? ";
	cin >> A;

	cout << "\nPlease Enter A? ";
	cin >> B;
}

float CircleAreaThroughInscribedIsoscelesTriangle(float A,float B)
{
	const float PI = 3.1415929;
	 
	float Area = (PI * (B * B) / 4) * ((2 * A - B) / (2 * A + B));

	return Area;
}

void PrintResult(float Area)
{
	cout << "\n Area Of Circle is = " << Area << endl;
}


int main()
{
	float A = 0, B = 0;

	ReadTriangleData(A, B);
	PrintResult(CircleAreaThroughInscribedIsoscelesTriangle(A,B));

	return 0;
}