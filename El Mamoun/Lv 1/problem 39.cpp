#include<iostream>
using namespace std;

/*
Problem 39: Write a program to read a TotalBill and CashPaid and calculate the remainder to be paid back.
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

float CalculateRemainder(float TotalBill, float CashPaid)
{
	return (CashPaid - TotalBill);
}


int main()
{

	float TotalBill = ReadPostiveNumber("Please Enter a Total Bill? ");
	float CashPaid  = ReadPostiveNumber("Please Enter a Cash Piad? ");

	cout <<"Result = "<< CalculateRemainder(TotalBill, CashPaid);

	return 0;
}