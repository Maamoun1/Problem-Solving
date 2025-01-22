#include<iostream>
using namespace std;

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

float HowManyMonth(float LoanAmount, float MonthlyPayment)
{
	return (float)LoanAmount / MonthlyPayment;
}

int main()
{
	float LoanAmount = ReadPostiveNumber("Please Enter Loan Amount? ");
	float MontlyPayment = ReadPostiveNumber("Please Enter Monthly Payment? ");

	cout << "Number of Month is= " << HowManyMonth(LoanAmount, MontlyPayment);

	return 0;
}