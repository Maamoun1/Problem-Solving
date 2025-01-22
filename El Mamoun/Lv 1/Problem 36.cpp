#include<iostream>
using namespace std;

/*
 Problem 36 :Write a program to ask the user to enter:
 • Number1
 • Number 2
 • OperationType
*/

enum enOperationType { Add = '+', Sub = '-', Mult = '*', Div = '/' };

float ReadNumber()
{
	float number = 0;

	cout << "Please Enter a Number? ";
	cin >> number;

	return number;
}

enOperationType ReadOperationType()
{
	char Op;

	cout << "Please Enter Operation Type? ";
	cin >> Op;

	return (enOperationType) Op;
}

int CalculteOperationType(enOperationType OpType, int Number1, int Number2)
{
	if (OpType == enOperationType::Add)
		return Number1 + Number2;

	else if (OpType == enOperationType::Sub)
		return Number1 - Number2;

	else if (OpType == enOperationType::Mult)
		return Number1 * Number2;

	else if (OpType == enOperationType::Div)
		return Number1 / Number2;

	else
		return 0;
}


int main()
{

	float Number1 = ReadNumber();
	float Number2 = ReadNumber();

	enOperationType OpType = ReadOperationType();

	cout << "Result = " << CalculteOperationType(OpType, Number1, Number2) << endl;


	return 0;
}