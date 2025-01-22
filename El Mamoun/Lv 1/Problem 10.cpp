#include<iostream>
using namespace std;

/*
Write a program to ask the user to enter:• Mark1, Mark2, Mark3 Then Print the Average of entered Marks
*/

void ReadNumbers(int& Num1, int& Num2, int& Num3)
{

	cout << "\nPlease Enter Your First Number? ";
	cin >> Num1;

	cout << "\nPlease Enter Your Second Number? ";
	cin >> Num2;

	cout << "\nPlease Enter Your Third Number? ";
	cin >> Num3;

}

int SumOf3Numbers(int Num1, int Num2, int Num3)
{
	return Num1 + Num2 + Num3;
}

float Average3Number(int Num1, int Num2, int Num3)
{
	return float(SumOf3Numbers(Num1, Num2, Num3) / 3);
}

void PrintResults(int Total)
{

	cout << "\nThe Average 3 Number is: " << Total << endl;
}


int main()
{

	int Num1, Num2, Num3;
	ReadNumbers(Num1, Num2, Num3);

	PrintResults(Average3Number(Num1, Num2, Num3));

	return 0;
}