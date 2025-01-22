#include<iostream>
using namespace std;

/*
Problem 41: Write a program to read a NumberOfHours and calculates the number of weeks, and days included in that
number
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

float HoursToDays(float NumOfHour)
{
	return (float) NumOfHour / 24;
}

float HoursToWeeks(float NumberOfHour)
{
	return float(HoursToDays(NumberOfHour) / 7);
}

int main()
{

	float NumberOfHours = ReadPostiveNumber("Please Enter Number of Hours? ");
	float NumberOfDays = HoursToDays(NumberOfHours);
	float NumberOfWeeks = HoursToWeeks(NumberOfHours);

	cout << "\nNumber of Hours = " << NumberOfHours << endl;
	cout << "\nNumber of Days  = " << NumberOfDays  << endl;
	cout << "\nNumber of Weeks = " << NumberOfWeeks << endl;


	return 0;
}