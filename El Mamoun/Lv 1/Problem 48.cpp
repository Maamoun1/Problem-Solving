#include<iostream>
using namespace std;

/*
Problem 48: Write a program to read a LoanAmount and ask you how many months you need to settle the loan, then
calculate the monthly installment amount
*/

int ReadPostiveNumber(string message)
{
	int number{ 0 };
	do
	{
		cout << message;
		cin >> number;

	} while (number < 0);

	return number;
}

float CalMonthlyInstallmentAmount(float LoanAmount, float HowManyMonth)
{
	return (float)LoanAmount / HowManyMonth;
}

int main()
{
	float LoanAmount = ReadPostiveNumber("Please Enter Loan Amount? ");
	float HowManyMonth = ReadPostiveNumber("Please Enter How many Month ? ");

	cout << "Number of Month is= " << CalMonthlyInstallmentAmount(LoanAmount, HowManyMonth);

	return 0;
}