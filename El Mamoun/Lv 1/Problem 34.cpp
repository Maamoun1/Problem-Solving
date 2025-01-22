#include<iostream>
using namespace std;

/*
Problem 34: Write a program to ask the user to enter:
 • TotalSales
 The commission is calculated as one percentage * the total sales amount, all you need is to decide which percentage
to use of the following:
 • > 1000,000    Percentage is 1%
 • > 500K to 1M  Percentage is 2%
 • > 100K  – 500K Percentage is 3%
 • > 50K to 100K  Percentage is 5%
 • Otherwise  Percentage is 0%
*/

int ReadTotalSalse()
{
	int TotalSales = 0;

	cout << "Please Enter a Total Sales? ";
	cin >> TotalSales;

	return TotalSales;
}

float GetCommessionPercentage(int TotalSales)
{
	if (TotalSales >= 1000000)
		return 0.01;

	else if (TotalSales >= 500000)
		return 0.02;

	else if (TotalSales >= 100000)
		return 0.03;

	else if (TotalSales >= 50000)
		return 0.05;

	else
		return 0.00;
}

float CalculateTotalCommession(int TotalSales)
{
	return (GetCommessionPercentage(TotalSales) * TotalSales);
}


int main()
{

	float TotalSlaes = ReadTotalSalse();

	cout << endl << "Commesion Percentage = " << GetCommessionPercentage(TotalSlaes) << endl;
	cout << endl << "Total Commesion Percentage = " << CalculateTotalCommession(TotalSlaes) << endl;

	return 0;
}