#include<iostream>
using namespace std;

/*
Problem 43: Write a program that inputs the number of seconds  and changes it to days, hours, minutes, and seconds

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

struct stTaskDuration
{
	int Days, Hours, Minutes, Seconds;	
};

stTaskDuration SecondsToTaskDurationInSeconds(int TotalSeconds)
{
	stTaskDuration TaskDuration;

	const int SecondPerDay= 24 * 60 * 60;
	const int SecondPerHour = 60 * 60;
	const int SecondPerMinute = 60;

	int Remainder = 0;

	TaskDuration.Days = floor(TotalSeconds / SecondPerDay);
	Remainder = TotalSeconds % SecondPerDay;

	TaskDuration.Hours = floor(Remainder / SecondPerHour);
	Remainder = Remainder % SecondPerHour;

	TaskDuration.Minutes = floor(Remainder / SecondPerMinute);
	Remainder = Remainder % SecondPerMinute;

	TaskDuration.Seconds = Remainder;

	return TaskDuration;
}

void PrintTaskDurationDetails(stTaskDuration TaskDuration)
{

	cout << TaskDuration.Days << ": " << TaskDuration.Hours << ": "
		 << TaskDuration.Minutes << ": " << TaskDuration.Seconds;
}

int main()
{

	int NumberOfSecods = ReadPostiveNumber("Please Enter Number of Seconds? ");

	PrintTaskDurationDetails(SecondsToTaskDurationInSeconds(NumberOfSecods));

	return 0;
}