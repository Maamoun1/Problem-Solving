#include<iostream>
using namespace std;

/*
 Write a program to ask the user to enter: • Mark1, Mark2, Mark3
 Then Print the Average of entered Marks, and print “PASS” if average>=50, otherwise print “FAIL”
*/

enum enPassOrFail { Pass = 1, Fail=2 };

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

enPassOrFail CheckAverage(float Average)
{

	if (Average >= 50)
		return enPassOrFail::Pass;

	else
		return enPassOrFail::Fail;
}

void PrintResults(float Average)
{

	cout << "\nThe Average = " << Average << endl;

	if (CheckAverage(Average) == enPassOrFail::Pass)
		cout << "Pass";
	else
		cout << "Fail";
}


int main()
{

	int Num1, Num2, Num3;
	
	ReadNumbers(Num1, Num2, Num3);
	PrintResults(Average3Number(Num1, Num2, Num3));

	return 0;
}