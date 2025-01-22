#include<iostream>
using namespace std;

/*
  Proble 15: Write a program to calculate rectangle area and print it on the screen.
*/

void ReadNumbers(float &Length, float &Width)
{
	cout << "\nPlease Enter a Length? ";
	cin >> Length;

	cout << "\nPlease Enter a Width? ";
	cin >> Width;
}

float CalCulateRectangeArea(float A, float B)
{
	return float(A * B);
}

void PrintResult(float Area)
{
	cout << "\n Area Of Rectange is = " << Area << endl;
}

int main()
{

	float Length, Width;

	ReadNumbers(Length, Width);

	PrintResult(CalCulateRectangeArea(Length, Width));

	return 0;
}