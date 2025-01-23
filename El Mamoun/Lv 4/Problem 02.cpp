#include<iostream>
using namespace std;
/*
write a program to check if year is a leap year or not
*/
short ReadYear()
{
	short Year;
	cout << "\nPlease Enter a Year to Check Leap Or Not? ";
	cin >> Year;
	return Year;
}

bool IsLeapYear(short Year)
{
	return  ((Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0));

}

int main()
{

	short Year = ReadYear();

	if (IsLeapYear(Year))
		cout << "\nIs Leap Year. \n";
	else
		cout << "\nIs Not Leap Year. \n";


	return 0;
}