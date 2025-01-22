#include<iostream>
using namespace std;

/*
Problem 40: A restaurant charges 10% services fee and 16% sales tax.
Write a program to read a BillValue and add service fee and sales tax to it, and print the TotalBill on the
screen.

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

float TotalBillAfterServiceandFee(float TotalBill)
{
	TotalBill = TotalBill * 1.1;
	TotalBill = TotalBill * 1.16;

	return TotalBill;
}


int main()
{

	float BillValue = ReadPostiveNumber("Please Enter a Total Bill? ");

	cout <<"Result = "<< TotalBillAfterServiceandFee(BillValue);

	return 0;
}